#ifndef SOLUTION1_H_
#define SOLUTION1_H_

#include "BaseSolution.h"

#include <vector>
#include <unordered_map>

class Solution1 : public BaseSolution {
public:
    int majorityElement(std::vector<int>&) override;
};

int Solution1::majorityElement(std::vector<int>& nums) {
    std::unordered_map<int, int> myMap;

    for(int i = 0; i < nums.size(); i++) {
        myMap[nums[i]]++;
        if(myMap[nums[i]] > nums.size()/2)
            return nums[i];
    }

    return 0;
}

#endif /* SOLUTION1_H_ */