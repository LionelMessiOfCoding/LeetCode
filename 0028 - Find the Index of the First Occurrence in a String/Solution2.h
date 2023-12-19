#ifndef SOLUTION2_H_
#define SOLUTION2_H_

#include "BaseSolution.h"

class Solution2 : public BaseSolution {
public:
    int strStr(std::string, std::string);
};

int Solution2::strStr(std::string haystack, std::string needle) {

    if(needle.size() > haystack.size())
        return -1;

    for(int i = 0; i < haystack.size()-needle.size()+1; i++) {
        if(haystack[i]==needle[0]) {
            if(haystack.substr(i, needle.size()) == needle)
                return i;
        }
    }
    return -1;
}



#endif /* SOLUTION2_H_ */