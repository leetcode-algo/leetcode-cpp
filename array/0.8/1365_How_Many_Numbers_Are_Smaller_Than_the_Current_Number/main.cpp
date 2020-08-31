/*
Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

Return the answer in an array.



Example 1:

Input: nums = [8,1,2,2,3]
Output: [4,0,1,1,3]
Explanation:
For nums[0]=8 there exist four smaller numbers than it (1, 2, 2 and 3).
For nums[1]=1 does not exist any smaller number than it.
For nums[2]=2 there exist one smaller number than it (1).
For nums[3]=2 there exist one smaller number than it (1).
For nums[4]=3 there exist three smaller numbers than it (1, 2 and 2).
Example 2:

Input: nums = [6,5,4,8]
Output: [2,1,0,3]
Example 3:

Input: nums = [7,7,7,7]
Output: [0,0,0,0]


Constraints:

2 <= nums.length <= 500
0 <= nums[i] <= 100
*/
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class Solution {
public:
    // Time complexity O(n^2)
    // Space complexity O(n)
    vector<int> smallerNumbersThanCurrent(vector<int> &nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            int sum = 0;
            for (int j = 0; j < nums.size(); ++j) {
                if (i == j) continue;
                if (nums[j] < nums[i]) ++sum;
            }
            result.push_back(sum);
        }
        return result;
    }
    // Time complexity O(nlogn)
    // Space complexity O(n)
    vector<int> smallerNumbersThanCurrent2(vector<int> &nums) {
        vector<int> result;
        vector<int> copy(nums);

        sort(copy.begin(), copy.end());
        auto it = copy.begin();
        for (int i = 0; i < nums.size(); ++i) {
            it = find(copy.begin(), copy.end(), nums[i]);
            result.push_back(it - copy.begin());
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
        if (n < 0 || n > 100) {
            fprintf(stderr, "Constraints: 0 <= nums[i] <= 100");
            return -1;
        }
        nums.push_back(n);
    }

    if (nums.size() < 2 || nums.size() > 500) {
        fprintf(stderr, "Constraints: 2 <= nums.length <= 500");
        return -1;
    }

    // Test
    vector<int> result;
    Solution s;
    result = s.smallerNumbersThanCurrent2(nums);

    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }

    return 0;
}