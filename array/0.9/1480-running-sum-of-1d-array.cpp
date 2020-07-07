/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

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
 

Constraints:

1 <= nums.length <= 1000
-10^6 <= nums[i] <= 10^6
*/

#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int>& nums)
    {
        return nums
    }
};

int main()
{
    //TODO
    //Create an array from user input
    vector<int> nums;

    string input;
    getline(cin, input);
    cout << input << endl;
    istringstream ss(input);
    istream_iterator<string> begin(ss), end;

    //putting all the tokens in the vector
    vector<string> arrayTokens(begin, end);


    for (auto it = arrayTokens.begin(); it != arrayTokens.end(); ++it)
    {
        cout << *it << ' ';
    }
    /*
    int n;
    while (cin >> n && n != )
    {
        nums.push_back(x);
    }
    */
    return 0;
}
