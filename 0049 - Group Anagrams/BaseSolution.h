#ifndef BASESOLUTION_H_
#define BASESOLUTION_H_

#include <vector>
#include <string>

using namespace std;

class BaseSolution {
public:
    virtual vector<vector<string>> groupAnagrams(vector<string>&) = 0;
};

#endif /* BASESOLUTION_H_ */