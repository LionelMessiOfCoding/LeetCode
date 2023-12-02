#ifndef SOLUTION2_H_
#define SOLUTION2_H_

#include "BaseSolution.h"

#include <algorithm>

class Solution2 : public BaseSolution {
public:
    bool isAnagram(std::string, std::string) override;
};

bool Solution2::isAnagram(std::string s, std::string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s==t;
}

#endif /* SOLUTION2_H_ */