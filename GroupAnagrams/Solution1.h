#ifndef SOLUTION1_H_
#define SOLUTION1_H_

#include "BaseSolution.h"

#include <string>
#include <algorithm>

class Solution1 : public BaseSolution {
public:
    virtual vector<vector<string>> groupAnagrams(vector<string>&) override;
    // void sortStrings(vector<string>&);
    bool isAnagram(string s, string t);
};

// void Solution1::sortStrings(vector<string>& strs) {
//     for(int i = 0; i < strs.size(); i++) {
//         sort(strs[i].begin(), strs[i].end());
//     }
// }

vector<vector<string>> Solution1::groupAnagrams(vector<string>& strs) {
    vector<vector<string>> vecvec;

    for(string str : strs) {
        bool found = false;
        for(auto& vec : vecvec) {   //tad
            if(isAnagram(str, vec[0])) {            // [{abs, sab} , {bat}, {tad}]
                vec.push_back(str);
                found = true;
                break;
            }
        }
        if(!found) vecvec.push_back({str});
    }


    return vecvec;
}

bool Solution1::isAnagram(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s==t;
}

#endif /* SOLUTION1_H_ */