/*
Given an array nums of integers, return how many of them contain an even number of digits.


Example 1:

Input: nums = [12,345,2,6,7896]
Output: 2
Explanation:
12 contains 2 digits (even number of digits).
345 contains 3 digits (odd number of digits).
2 contains 1 digit (odd number of digits).
6 contains 1 digit (odd number of digits).
7896 contains 4 digits (even number of digits).
Therefore only 12 and 7896 contain an even number of digits.
Example 2:

Input: nums = [555,901,482,1771]
Output: 1
Explanation:
Only 1771 contains an even number of digits.


Constraints:

1 <= nums.length <= 500
1 <= nums[i] <= 10^5
*/
#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>

using namespace std;

class Solution {
public:
    // TODO check the time complexity
    // Time complexity: O(n)
    // Space complexity: O(1)
    int findNumbers(vector<int> &nums) {
        int result = 0;
        for (int i = 0; i < nums.size(); ++i) {
            int cnt = 0;
            while (nums[i] != 0) {
                nums[i] /= 10;
                ++cnt;
            }
            if (cnt % 2 == 0) {
                ++result;
            }
        }
        return result;
    }
    // Time complexity: O(n)
    // Space complexity: O(1)
    int findNumbersBitOps(vector<int> &nums) {
        int result = 0;
        for (int i = 0; i < nums.size(); ++i) {
            result += (int)log10(nums[i]) & 1;
        }
        return result;
    }
};

int main() {
    string input;
    vector<int> nums;
    cout << "nums = ";
    getline(cin, input);

    stringstream ss(input);
    int n;
    while (ss >> n) {
        if (n < 1 || n > pow(10, 5)) {
            fprintf(stderr, "Constraints: 1 <= nums.length <= 10^5");
            return -1;
        }
        nums.push_back(n);
    }

    if (nums.size() < 1 || nums.size() > 500) {
        fprintf(stderr, "Constraints: 1 <= nums.length <= 500");
        return -1;
    }

    int result;
    Solution s;
    result = s.findNumbersBitOps(nums);

    // Test
    cout << result << endl;
    return 0;
}