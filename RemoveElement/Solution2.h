#ifndef SOLUTION2_H_
#define SOLUTION2_H_

#include "BaseSolution.h"
#include <algorithm>

class Solution2 : public BaseSolution {
public:
    int removeElement(vector<int>&, int) override;
};

int Solution2::removeElement(vector<int>& nums, int val) {
    int count = 0;

        // [1, 3, -3, 5, 7, 7, 3];
        
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] == val) {
            nums[i] = 51;            
        } else {
            count++;
        }
    }

    sort(begin(nums), end(nums));

    return count;
}

#endif /* SOLUTION2_H_ */