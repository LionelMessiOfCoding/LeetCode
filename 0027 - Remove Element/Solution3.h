#ifndef SOLUTION3_H_
#define SOLUTION3_H_

#include "BaseSolution.h"

class Solution3 : public BaseSolution {
public:
    int removeElement(vector<int>&, int) override;
};


int Solution3::removeElement(vector<int>& nums, int val) {
    int count = 0;

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != val) {
            nums[count] = nums[i];
            count++;
        }
    }
    
    return count;
}




#endif /* SOLUTION3_H_ */