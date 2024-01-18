#include "Solution1.cpp"

#include <iostream>
#include <vector>

int main() {

    std::vector<std::vector<std::string>> testcases;
    testcases.push_back({"abc", "pqr"});
    testcases.push_back({"ab", "pqrs"});

    Solution1 s;

    for(const std::vector<std::string> vec : testcases) {
        std::cout << "Input: " << vec[0] << ' ' << vec[1] << '\n';
        std::cout << "Output: " << s.mergeAlternately(vec[0], vec[1]) << '\n';
    }

    return 0;
}