#ifndef SOLUTION2_H_
#define SOLUTION2_H_

#include "BaseSolution.h"

#include <unordered_map>

class Solution2 : public BaseSolution {
public:
    std::vector<int> twoSum(std::vector<int>&, int) override;
};

std::vector<int> Solution2::twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> myMap;
    for(int i = 0; i < nums.size(); i++) {
        if(myMap.find(target-nums[i]) != myMap.end()) {
            return {i, myMap[target-nums[i]]};
        }
        myMap[nums[i]] = i;        
    }
    return {};
}



#endif /* SOLUTION2_H_ */