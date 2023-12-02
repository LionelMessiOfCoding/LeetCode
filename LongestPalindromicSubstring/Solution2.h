#ifndef SOLUTION2_H_
#define SOLUTION2_H_

#include "BaseSolution.h"

class Solution2 : public BaseSolution {
public:
    std::string longestPalindrome(std::string) override;
    bool isPalindrome(std::string);
};

std::string Solution2::longestPalindrome(std::string s) {
    if (s.size()==1) return s;
        
    std::string ans = "";
    ans += s[0];

    for(int i = 0; i < s.size(); i++) {
        for(int j = s.size()-1; j > i; j--) {
            if(isPalindrome(s.substr(i, j-i+1))) {
                if(s.substr(i, j-i+1).size() > ans.size())
                    ans = s.substr(i, j-i+1);
                break;
            }
        }
        if(ans.size() >= s.size()-i)
            break;
    }

        return ans;
}

bool Solution2::isPalindrome(std::string s) {
    std::string temp = "";
    for(int i = s.size()-1; i >= 0; i--) {
        temp += s[i];
    }
    return temp==s;
}

#endif /* SOLUTION2_H_ */