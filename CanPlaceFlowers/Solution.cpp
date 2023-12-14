#include "Solution.h"

#include <iostream>

bool Solution::canPlaceFlowers(std::vector<int>& flowerbed, int n) {
    int possibleFlowers = 0;
    for(int i = 0; i < flowerbed.size(); i++) {
        if(flowerbed[i]==0 && (i==0 || flowerbed[i-1]==0) && (i==flowerbed.size()-1 || flowerbed[i+1] == 0)) {
            flowerbed[i] = 1;
            possibleFlowers++;
        }
    }
    return (possibleFlowers >= n);
}