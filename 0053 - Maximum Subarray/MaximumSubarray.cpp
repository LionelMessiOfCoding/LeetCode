#include "MaximumSubarrayBaseSolution.h"
#include "MaximumSubarraySolution1.h"
#include "MaximumSubarrayKadane.h"

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> vect{ 5, 4, -1, 7, 8 };

    for(int x : vect) {
        cout << x << " ";
    }

    cout << endl;

    Solution1 s;
    cout << s.maxSubArray(vect);

    KadaneSolution a;
    cout << a.maxSubArray(vect);

    return 0;
}