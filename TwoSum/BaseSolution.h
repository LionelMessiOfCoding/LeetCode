#ifndef BASESOLUTION_H_
#define BASESOLUTION_H_

#include <vector>

class BaseSolution {
public:
    virtual std::vector<int> twoSum(std::vector<int>&, int) = 0;
};

#endif /* BASESOLUTION_H_ */