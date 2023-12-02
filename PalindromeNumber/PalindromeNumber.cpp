#include "Solution1.h"

#include <iostream>

using namespace std;

int main() {

    Solution1 a;
    int myArray[] = {121, -121, 10, 1001, 1011, 0, 808, 1337};

    for(const int& x : myArray) {
        cout << "Is " << x << " a palindrome: " << a.isPalindrome(x) << endl;
    }

    return 0;
}