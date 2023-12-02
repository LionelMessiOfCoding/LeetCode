#ifndef SOLUTION1_H_
#define SOLUTION1_H_

#include "BaseSolution.h"

class Solution1 : public BaseSolution {
public:
    bool isPalindrome(int) override;
};

bool Solution1::isPalindrome(int x) {
    if(x < 0) return false;

    int y = x;
    int test = 0;

    do {
        test = test*10 + y%10;
        y /= 10;
    }
    while (y != 0);

    return test==x;
}


#endif /* SOLUTION1_H_ */