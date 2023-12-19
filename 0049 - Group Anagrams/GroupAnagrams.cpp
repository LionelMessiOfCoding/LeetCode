#include "Solution1.h"
#include "Solution2.h"

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    
    for (string s : strs) {
        cout << s << " ";
    }
    cout << endl;


    Solution2 a;
    // a.sortStrings(strs);
    vector<vector<string>> myvec;

    myvec = a.groupAnagrams(strs);

    for(const auto& vec : myvec) {
        for(const auto& str : vec) {
            cout << str << " ";
        }
        cout << endl;
    }

    return 0;
}

