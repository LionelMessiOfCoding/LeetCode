#include "Solution1.h"
#include "Solution2.h"

#include <iostream>

using namespace std;

int main() {

    vector<int> vect1 = {1, 2, 3, 4};
    vector<int> vect2 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

    Solution2 a;

    cout << a.containsDuplicate(vect1);
    cout << a.containsDuplicate(vect2);


    return 0;
}