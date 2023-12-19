#include <iostream>

#include "Solution1.h"

int main() {

    std::vector<int> vec = {1,3,5,6};

    Solution1 s;

    for(const auto& x : vec) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "Target : 5, Output : " << s.searchInsert(vec, 5) << std::endl;
    std::cout << "Target : 2, Output : " << s.searchInsert(vec, 2) << std::endl;
    std::cout << "Target : 7, Output : " << s.searchInsert(vec, 7) << std::endl;

    return 0;
}