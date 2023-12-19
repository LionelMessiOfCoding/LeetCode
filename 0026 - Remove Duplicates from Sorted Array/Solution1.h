#ifndef SOLUTION1_H_
#define SOLUTION1_H_

#include "BaseSolution.h"

#include <unordered_map>

class Solution1 : public BaseSolution {
public:
    int removeDuplicates(std::vector<int>&) override;
};

int Solution1::removeDuplicates(std::vector<int>& nums) {
    std::unordered_map<int, int> myMap;
    int index = 0;

    for(int i = 0; i < nums.size(); i++) {
        if(myMap.find(nums[i]) == myMap.end()) {
            myMap[nums[i]]++;
            nums[index] = nums[i];
            index++;
        }
    }

    return index;
}

#endif /* SOLUTION1_H_ */