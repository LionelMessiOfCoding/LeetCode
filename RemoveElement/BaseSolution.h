#ifndef BASESOLUTION_H_
#define BASESOLUTION_H_

#include <iostream>
#include <vector>

using namespace std;

class BaseSolution {
    virtual int removeElement(vector<int>&, int) = 0;
};

#endif /* BASESOLUTION_H_ */