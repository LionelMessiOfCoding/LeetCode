#include "Solution1.h"
#include "Solution2.h"

#include <iostream>
#include <vector>

int main() {

    std::string s1 = "babad";
    std::string s2 = "cbbd";
    std::string s3 = "a";

    Solution2 a;

    std::vector<std::string> vec;

    vec.push_back(s1);
    vec.push_back(s2);
    vec.push_back(s3);

    for(auto const& str : vec) {
        std::cout << "String: " << str << " LP: " << a.longestPalindrome(str) << std::endl;
    }

    return 0;
}