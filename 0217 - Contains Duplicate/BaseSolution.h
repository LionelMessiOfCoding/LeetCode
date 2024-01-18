#ifndef BASESOLUTION_H_
#define BASESOLUTION_H_

#include <vector>

using namespace std;

class BaseSolution {
public:
    virtual bool containsDuplicate(vector<int>&) = 0;
};

#endif /* BASESOLUTION_H_ */