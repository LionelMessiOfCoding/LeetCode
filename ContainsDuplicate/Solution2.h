#ifndef SOLUTION2_H_
#define SOLUTION2_H_

#include "BaseSolution.h"

#include <iostream>
#include <algorithm>

using namespace std;

class Solution2 : public BaseSolution {
public:
    bool containsDuplicate(vector<int>&) override;
};

bool Solution2::containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size()-1; i++) {
        if(nums[i]==nums[i+1])
            return true;
    }
    return false;
}


#endif /* SOLUTION2_H_ */