#include "Solution1.h"
#include "Solution2.h"

#include <iostream>

int main() {

    std::vector<std::string> vec1 = {"flower","flow","flight"};
    std::vector<std::string> vec2 = {"dog","racecar","car"};
    Solution2 s;

    std::cout << s.longestCommonPrefix(vec1) << std::endl;
    std::cout << s.longestCommonPrefix(vec2) << std::endl;

    return 0;
}