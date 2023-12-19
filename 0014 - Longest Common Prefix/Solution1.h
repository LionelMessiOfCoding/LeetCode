#ifndef asd
#define asd

#include "BaseSolution.h"

#include <algorithm>

class Solution1 : public BaseSolution {
public:
    std::string longestCommonPrefix(std::vector<std::string>&) override;
};

std::string Solution1::longestCommonPrefix(std::vector<std::string>& strs) {
    sort(strs.begin(), strs.end());
    int count = 0;
    for(int i = 0; i < strs[0].size() && i < strs[strs.size()-1].size(); i++) {
        if(strs[0][i] != strs[strs.size()-1][i])
            break;
        count ++;
    }
    return strs[0].substr(0, count);
}

#endif /* asd */