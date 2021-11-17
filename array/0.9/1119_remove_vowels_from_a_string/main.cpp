/*
Given a string s, remove the vowels 'a', 'e', 'i', 'o', and 'u' from it, and
return the new string.

Example 1:
    Input: s = "leetcodeisacommunityforcoders"
    Output: "ltcdscmmntyfrcdrs"

Example 2:
    Input: s = "aeiou"
    Output: ""

Constraints:
    1 <= s.length <= 1000
    s consists of only lowercase English letters.

Time complexity O(N)
Space complexity O(1)
*/

#include <iostream>
#include <set>

class Solution {
 public:
  static std::string removeVowels(std::string s) {
    std::set<char> set{'a', 'e', 'o', 'i', 'u'};
    int i = 0;
    for (int j = 0; j < s.size(); ++j) {
      if (set.count(s[j]) == 0) {
        s[i++] = s[j];
      }
    }
    return s.substr(0, i);
  }
};

int main() {
  std::string input = "leetcodeisacommunityforcoders";

  std::cout << Solution::removeVowels(input) << std::endl;

  return 0;
}
