#include "Solution1.h"

std::string Solution1::mergeAlternately(std::string word1, std::string word2) {
    // Iterate through both words using index
    // Only add letter if index is within bounds for that word size
    std::string res = "";

    for(int i = 0; i < word1.size() || i < word2.size(); i++) {
        if(i < word1.size()) res += word1[i];
        if(i < word2.size()) res += word2[i];
    }

    return res;
}