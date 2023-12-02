#ifndef SOLUTION2_H_
#define SOLUTION2_H_

#include "BaseSolution.h"

#include <algorithm>

class Solution2 : public BaseSolution {
public:
    std::string longestCommonPrefix(std::vector<std::string>&) override;
    bool hasLetter(std::string, std::string, int);
};

std::string Solution2::longestCommonPrefix(std::vector<std::string>& strs) {
    sort(strs.begin(), strs.end());
    std::string prefix = "";
    for(int i = 0; i < strs[0].size() && i < strs[strs.size()-1].size(); i++) {
        if(hasLetter(strs[0], strs[strs.size()-1], i))
            prefix += strs[0][i];
        else break;
    }
    return prefix;
}

bool Solution2::hasLetter(std::string a, std::string b, int i) {
    return a[i]==b[i];
}

#endif /* SOLUTION2_H_ */