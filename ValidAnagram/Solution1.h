#ifndef SOLUTION1_H_
#define SOLUTION1_H_

#include "BaseSolution.h"

#include <iostream>
#include <algorithm>
#include <cstring>

class Solution1 : public BaseSolution {
public:
    bool isAnagram(std::string, std::string) override;
};

bool Solution1::isAnagram(std::string s, std::string t) {
    if(s.length() != t.length())
            return false;
        
        char charArray1[s.length()-1];
        char charArray2[s.length()-1];

        strcpy(charArray1, s.c_str());
        strcpy(charArray2, t.c_str());

        // sort(charArray1.begin(), charArray1.end());
        // sort(charArray2.begin(), charArray2.end());

        return charArray1==charArray2;
}


#endif /* SOLUTION1_H_ */