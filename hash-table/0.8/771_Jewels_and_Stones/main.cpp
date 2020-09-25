/*
You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:

Input: J = "aA", S = "aAAbbbb"
Output: 3

Example 2:

Input: J = "z", S = "ZZ"
Output: 0

Note:

S and J will consist of letters and have length at most 50.
The characters in J are distinct.
*/

#include <iostream>
#include <unordered_set>

using namespace std;


class Solution {
public:
    // Time complexity: O(J.length*S.length)
    // Space complexity: O(1)
    int numJewelsInStones(string J, string S) {
        int cnt = 0;
        for (char charS:S) {
            for (char charJ:J) {
                if (charS == charJ) {
                    ++cnt;
                    break;
                }
            }
        }
        return cnt;
    }

    // Time complexity: O(J + S)
    // Space complexity: O(1)
    int numJewelsInStonesSet(string J, string S) {
        int cnt = 0;
        unordered_set<char> setJ(J.begin(), J.end());
        for (char charS:S) {
            if (setJ.count(charS)) {
                ++cnt;
            }
        }
        return cnt;
    }

    // Time complexity: O(J + S)
    // Space complexity: O(1)
    int numJewelsInStonesBool(string J, string S) {
    }
};

int main() {
    string strJ;
    cout << "J = ";
    getline(cin, strJ);

    if (strJ.length() > 50) {
        fprintf(stderr, "Note: S and J will consist of letters and have length at most 50.");
        return -1;
    }

    string strS;
    cout << "S = ";
    getline(cin, strS);

    if (strJ.length() > 50 || strS.length() > 50) {
        fprintf(stderr, "Note: S and J will consist of letters and have length at most 50.");
        return -1;
    }

    int result;
    Solution s;
    result = s.numJewelsInStonesBool(strJ, strS);

    // Test
    cout << result << endl;

    return 0;
}