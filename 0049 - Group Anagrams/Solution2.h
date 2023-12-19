#ifndef SOLUTION2_H_
#define SOLUTION2_H_

#include "BaseSolution.h"

#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>

class Solution2 : public BaseSolution {
public:
    vector<vector<string>> groupAnagrams(vector<string>&) override;
};

vector<vector<string>> Solution2::groupAnagrams(vector<string>& strs) {

    unordered_map<string, vector<string>> myMap;
    for(const auto& str : strs) {
        string key = str;
        sort(key.begin(), key.end());
        myMap[key].push_back(str);
    }

    vector<vector<string>> vecvec;
    for(const auto& pair : myMap) {
        vecvec.push_back(pair.second);
    }

    return vecvec;
}

#endif /* SOLUTION2_H_ */