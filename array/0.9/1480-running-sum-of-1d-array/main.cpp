/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.


Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].


Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].


Example 3:

Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]


constraints:

1 <= nums.length <= 1000
-10^6 <= nums[i] <= 10^6
*/

#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int> &nums) {
        for (int i = 1; i < nums.size(); ++i) {
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};

int main() {
    string input;
    getline(cin, input);
    vector<int> nums;

    stringstream ss(input);

    int n;
    int cnt = 0;
    while (ss >> n) {
        nums.push_back(n);
        cnt++;
        if (cnt < 1 || cnt > 1000) {
            fprintf(stderr, "Constraints: 1 <= nums.length <= 1000");
            return -1;
        }
    }

    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] < -pow(10, 6) || nums[i] > pow(10, 6)) {
            fprintf(stderr, "Constraints: -10^6 <= nums[i] <= 10^6");
            return -1;
        }
    }

    Solution s;
    s.runningSum(nums);

    return 0;
}