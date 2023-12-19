#ifndef SOLUTION1_H_
#define SOLUTION1_H_

#include "BaseSolution.h"

#include <vector>

class Solution1 : public BaseSolution {
public:
    std::vector<int> twoSum(std::vector<int>&, int) override;
};

std::vector<int> Solution1::twoSum(std::vector<int>& nums, int target) {
    for(int i = 0; i < nums.size() - 1; i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            if(nums[i] + nums[j]== target)
                return {i, j};
        }
    }
}

#endif /* SOLUTION1_H_ */