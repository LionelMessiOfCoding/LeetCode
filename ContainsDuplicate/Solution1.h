#ifndef SOLUTION1_H_
#define SOLUTION1_H_

#include "BaseSolution.h"

#include <map>

using namespace std;

class Solution1 : public BaseSolution {
public:
    bool containsDuplicate(vector<int>&) override;
};

bool Solution1::containsDuplicate(vector<int>& nums) {
    map<int, int> myMap; //Faster if unordered_map

    for(int i = 0; i < nums.size(); i++) {
        if(myMap.find(nums[i]) == myMap.end())
            myMap.insert({nums[i], i}); //myMap[nums[i]] = i;
        else return true;
    }
    return false;
}


#endif /* SOLUTION1_H_ */