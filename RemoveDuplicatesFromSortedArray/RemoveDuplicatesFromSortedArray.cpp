#include "Solution1.h"

#include <iostream>

int main() {

    std::vector<int> vec1 = {1,1,2};
    std::vector<int> vec2 = {0,0,1,1,1,2,2,3,3,4};
    Solution1 s;
    
    // Checking vec1
    std::cout<< "Original vec1:";
    for(int& x : vec1) {
        std::cout << x << " ";
    }

    int i1 = s.removeDuplicates(vec1);

    std::cout << std::endl << "New vec1: ";
    for(int& x : vec1) {
        std::cout << x << " ";
    }
    std::cout << std::endl << "Unique elements in new vec1: " << i1;


    // Checking vec2
    std::cout << std::endl << "Original vec2: ";
    for(int i = 0; i < vec2.size(); i++) {
        std::cout << vec2[i] << " ";
    }

    int i2 = s.removeDuplicates(vec2);

    std::cout << std::endl << "New vec2: ";
    for(int i = 0; i < vec2.size(); i++) {
        std::cout << vec2[i] << " ";
    }
    std::cout << std::endl << "Unique elements in new vec2: " << i2;


    return 0;
}