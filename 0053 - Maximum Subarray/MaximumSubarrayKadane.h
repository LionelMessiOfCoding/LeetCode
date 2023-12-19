#ifndef MAXIMUMSUBARRAYKADANE_H_
#define MAXIMUMSUBARRAYKADANE_H_

#include "MaximumSubarrayBaseSolution.h"

class KadaneSolution : public BaseSolution {
    public:
    int maxSubArray(vector<int>& nums) override;
};

int KadaneSolution::maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];
    int curSum = nums[0];

    for(int i = 1; i< nums.size(); i++) {
        curSum = max(nums[i], curSum + nums[i]);
        maxSum = max(curSum, maxSum);
    }
    return maxSum;
}

#endif /* MAXIMUMSUBARRAYKADANE_H_ */