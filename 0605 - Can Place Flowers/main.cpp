#include "Solution.cpp"

#include <iostream>

int main() {
    
    Solution s;
    std::vector<int> flowerBed1 = {1, 0, 0, 0, 1};

    std::cout << s.canPlaceFlowers(flowerBed1, 1) << '\n';
    std::cout << s.canPlaceFlowers(flowerBed1, 2) << '\n';

    return 0;
}