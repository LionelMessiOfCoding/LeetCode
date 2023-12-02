#include "Solution1.h"
#include "Solution2.h"
#include "Solution3.h"

#include <iostream>

using namespace std;

int main() {

    string a1 = "anagram";
    string a2 = "nagaram";
    
    string b1 = "rat";
    string b2 = "car";

    Solution3 s;

    cout << s.isAnagram(a1, a2) << endl;
    cout << s.isAnagram(b1, b2) << endl;
    


    return 0;
}