#include "Solution1.h"
#include "Solution2.h"
#include "Solution3.h"

#include <iostream>

using namespace std;

int main() {

    vector<int> nums  = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    Solution3 s;
    s.removeElement(nums, val);

    for (int num : nums) {
        cout << num << " ";
    }


    return 0;
}