#include "Solution1.h"
#include "Solution2.h"

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<vector<int>> vecvec;
    vecvec.push_back({2,7,11,15});
    vecvec.push_back({3,2,4});
    vecvec.push_back({3,3});

    Solution2 s;

    vector<int> a0 = s.twoSum(vecvec[0], 9);
    vector<int> a1 = s.twoSum(vecvec[1], 6);
    vector<int> a2 = s.twoSum(vecvec[2], 6);

    cout << a0[0] << " " << a0[1] << endl;
    cout << a1[0] << " " << a1[1] << endl;
    cout << a2[0] << " " << a2[1] << endl;


    return 0;
}