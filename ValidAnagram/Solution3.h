#include "BaseSolution.h"

#include <unordered_map>

class Solution3 : public BaseSolution {
public:
    bool isAnagram(std::string, std::string) override;
};

bool Solution3::isAnagram(std::string s, std::string t) {
    std::unordered_map<char, int> myMap;

    for(const auto& c : s) {
        myMap[c]++;
    }

    for(const auto& c : t) {
        myMap[c]--;
    }

    for(const auto& x : myMap) {
        if(x.second != 0)
            return false;
    }

    return true;
}