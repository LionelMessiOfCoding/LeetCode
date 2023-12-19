#include "Solution1.h"
#include "Solution2.h"

#include <iostream>

int main() {

    std::string h1 = "sadbutsad";
    std::string n1 = "sad";

    std::string h2 = "leetcode";
    std::string n2 = "leeto";

    std::string h3 = "rhinoceros";
    std::string n3 = "noce";

    std::string h4 = "super";
    std::string n4 = "superduper";

    Solution2 s;

    std::cout << s.strStr(h1, n1) << std::endl;
    std::cout << s.strStr(h2, n2) << std::endl;
    std::cout << s.strStr(h3, n3) << std::endl;
    std::cout << s.strStr(h4, n4) << std::endl;


    return 0;
}