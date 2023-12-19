#ifndef BASESOLUTION_H_
#define BASESOLUTION_H_

#include <vector>

class BaseSolution {
public:
    virtual int removeDuplicates(std::vector<int>&) = 0;
};

#endif /* BASESOLUTION_H_ */