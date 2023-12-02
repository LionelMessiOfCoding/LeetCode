#ifndef MAXIMUMSUBARRAY_H_
#define MAXIMUMSUBARRAY_H_

#include <iostream>
#include <vector>

using namespace std;

class BaseSolution {
public:
    virtual int maxSubArray(vector<int>& nums) = 0;
    virtual ~BaseSolution() {};
};

#endif /* MAXIMUMSUBARRAY_H_ */