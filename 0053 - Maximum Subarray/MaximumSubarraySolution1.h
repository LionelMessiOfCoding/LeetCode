#ifndef MAXIMUMSUBARRAYSOLUTION1_H_
#define MAXIMUMSUBARRAYSOLUTION1_H_

#include "MaximumSubarrayBaseSolution.h"

class Solution1 : public BaseSolution {
    public:
    int maxSubArray(vector<int>& nums) override;
};

int Solution1::maxSubArray(vector<int>& nums) {
    int largestSum = -10001;

        for(int subArraySize = 1; subArraySize <= nums.size(); subArraySize++) {
                        
            for(int startingPoint = 0; startingPoint <= nums.size() - subArraySize; startingPoint++) {

                int temporarySum = 0;

                for (int i = 0; i < subArraySize; i++) {
                    temporarySum += nums[startingPoint + i];
                }

                if(temporarySum > largestSum)
                    largestSum = temporarySum;

            }

        }

        return largestSum;
}

#endif /* MAXIMUMSUBARRAYSOLUTION1_H_ */