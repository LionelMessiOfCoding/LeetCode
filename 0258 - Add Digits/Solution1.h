#ifndef SOLUTION1_H_
#define SOLUTION1_H_

#include <vector>

class Solution1 {
public:
    int addDigits(int);
};


int Solution1::addDigits(int num) {
    // store all the digits in a vec
    std::vector<int> nums;

    while(num != 0) {
        if(num < 10) {
            nums.push_back(num);
            break;
        }
        nums.push_back(num%10);
        num /= 10;
    }

    // add all the digits
    int added = 0;
    for(const int& val : nums) {
        added += val;
    }


    // repeat(recursive?)
    if(added < 10)
        return added;
    else 
        return addDigits(added);
}

#endif /* SOLUTION1_H_ */