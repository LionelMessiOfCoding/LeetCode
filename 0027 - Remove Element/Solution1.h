#ifndef SOLUTION1_H_
#define SOLUTION1_H_

#include "BaseSolution.h"

class Solution1 : public BaseSolution {
public:
    int removeElement(vector<int>&, int) override;
};

int Solution1::removeElement(vector<int>& nums, int val) {
    int count = 0;
    int d = nums.size() - 1;

    for(int i = 0; i < nums.size(); i++) {
        if(i > d) {
            break;
        }

        if(nums[i] != val) {
            count++;
        } else {
            while(nums[d] == val) {
                d--;
            }
            swap(nums[i], nums[d]);
        }
    }

    return count;
}

#endif /* SOLUTION1_H_ */