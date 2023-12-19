#ifndef SOLUTION1_H_
#define SOLUTION1_H_

#include "BaseSolution.h"

class Solution1 : public BaseSolution {
public:
    int strStr(std::string, std::string) override;
};

int Solution1::strStr(std::string haystack, std::string needle) {
    return haystack.find(needle);
}

#endif /* SOLUTION1_H_ */