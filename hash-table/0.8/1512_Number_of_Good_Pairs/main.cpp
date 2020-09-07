/*
Given an array of integers nums.

A pair (i,j) is called good if nums[i] == nums[j] and i < j.

Return the number of good pairs.



Example 1:

Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
Example 2:

Input: nums = [1,1,1,1]
Output: 6
Explanation: Each pair in the array are good.
Example 3:

Input: nums = [1,2,3]
Output: 0


Constraints:

1 <= nums.length <= 100
1 <= nums[i] <= 100
*/
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class Solution {
public:
    // Time complexity O(n^2)
    // Space complexity O(n)
    int numIdenticalPairs(vector<int> &nums) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                 if (nums[i] == nums[j]) {
                     ++cnt;
                 }
            }
        }
        return cnt;
    }

    // Time complexity O(n)
    // Space complexity O(n)
    int numIdenticalPairsHashTable(vector<int> &nums) {
        int hash[101] = {0};
        int ret = 0;

        for (int i = 0; i < nums.size(); ++i) {
            ret += hash[nums[i]];
            ++hash[nums[i]];
        }
        return ret;
    }
};

int main() {
    vector<int> nums;
    string input;
    cout << "nums = ";
    getline(cin, input);

    stringstream ss(input);
    int n;
    while (ss >> n) {
        if(n < 1 || n > 100){
            fprintf(stderr, "Constraints: 1 <= nums[i] <= 100");
            return -1;
        }
        nums.push_back(n);
    }

    if (nums.size() < 1 || nums.size() > 100) {
        fprintf(stderr, "Constraints: 1 <= nums.length <= 100");
        return -1;
    }

    int result;
    Solution s;
    result = s.numIdenticalPairs(nums);

    // Test
    cout << result << endl;

    return 0;
}
