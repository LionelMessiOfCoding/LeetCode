#include "Solution1.h"

#include <iostream>

int main() {

    Solution1 s;

    std::vector<int> vec1 = {3,2,3};
    std::vector<int> vec2 = {2,2,1,1,1,2,2};

    for(int& x : vec1) {
        std::cout << x << " ";
    }
    std::cout << std::endl << s.majorityElement(vec1) << std::endl;

    for(int& x : vec2) {
        std::cout << x << " ";
    }
    std::cout << std::endl << s.majorityElement(vec2) << std::endl;



    return 0;
}