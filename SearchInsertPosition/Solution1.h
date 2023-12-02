#ifndef SOLUTION1_H_
#define SOLUTION1_H_

#include "BaseSolution.h"

class Solution1 : public BaseSolution {
public:
    int searchInsert(std::vector<int>&, int) override;
};

int Solution1::searchInsert(std::vector<int>& nums, int target) {
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] >= target)
            return i;
    }
    return nums.size();
}


#endif /* SOLUTION1_H_ */