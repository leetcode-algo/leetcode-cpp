/*
Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn].



Example 1:

Input: nums = [2,5,1,3,4,7], n = 3
Output: [2,3,5,4,1,7]
Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].
Example 2:

Input: nums = [1,2,3,4,4,3,2,1], n = 4
Output: [1,4,2,3,3,2,4,1]
Example 3:

Input: nums = [1,1,2,2], n = 2
Output: [1,2,1,2]


Constraints:

1 <= n <= 500
nums.length == 2n
1 <= nums[i] <= 10^3
*/
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

//TODO algo
class Solution {
public:
    vector<int> shuffle(vector<int> &nums, int n) {

    }
};

int main() {
    vector<int> nums;
    string input;
    cout << "nums = ";
    getline(cin, input);

    int n;
    cout << "n = ";
    cin >> n;
    if (n < 1 || n > 500) {
        fprintf(stderr, "Constraints: 1 <= n <= 500");
        return -1;
    }

    stringstream ss(input);
    int tmpNumber;
    while (ss >> tmpNumber) {
        if (tmpNumber < 1 || tmpNumber > 1000) {
            fprintf(stderr, "1 <= nums[i] <= 10^3");
            return -1;
        }
        nums.push_back(tmpNumber);
    }

    if (nums.size() != 2 * n) {
        fprintf(stderr, "Constraints: nums.length == 2n");
        return -1;
    }

    return 0;
}
