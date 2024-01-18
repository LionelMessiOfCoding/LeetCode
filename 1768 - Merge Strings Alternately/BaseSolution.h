#ifndef BASESOLUTION_H_
#define BASESOLUTION_H_

#include <string>

class BaseSolution {
public:
    virtual std::string mergeAlternately(std::string, std::string) = 0;
};

#endif /* BASESOLUTION_H_ */