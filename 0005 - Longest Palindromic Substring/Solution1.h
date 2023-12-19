#ifndef asd
#define asd

#include "BaseSolution.h"

class Solution1 : public BaseSolution {
public:
    std::string longestPalindrome(std::string) override;
    bool isPalindrome(std::string);
};

std::string Solution1::longestPalindrome(std::string s) {
    std::string ans = "";
    if (s.size()==1) return s;
    for(int i = 0; i < s.size()-1; i++) {
        for(int j = 1; i+j<s.size()+1; j++) {
            std::string a = s.substr(i, j);
            if(isPalindrome(a) && a.size() > ans.size())
                ans = a;
        }
    }
    return ans;
}

bool Solution1::isPalindrome(std::string s) {
    std::string temp = "";
    for(int i = s.size()-1; i >= 0; i--) {
        temp += s[i];
    }
    return temp==s;
}

#endif /* asd */