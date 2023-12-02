#include <iostream>
#include <string>
#include <vector>

int main() {

    return 0;
}

class Solution {
public:
    int numberOfWays(std::string);
};

int Solution::numberOfWays(std::string corridor) {
        std::vector<int> dividers;
        int seat = 0;
        int totalSeats = 0;
        int plants = 0;

        for(int i = 0; i < corridor.size(); i++) {
            // If seat == 2:
            //      if c[i]==S, add plants to vec and reset plants
            //      if c[i]==P, plants+=1
            if(seat == 2) {
                if(corridor[i]=='S') {
                    totalSeats++;
                    dividers.push_back(plants);
                    plants = 0;
                    seat = 1;
                } else {
                    plants++;
                }
            }

            // If seat == 0 || seat == 1:
            //      if c[i]==S, seat++
            //          if seat == 2, plants+=1
            else if(corridor[i]=='S') {
                totalSeats++;
                seat++;
                if(seat == 2) {
                    plants++;
                }
            }
        }

        // If seat, return 0
        if(totalSeats%2 || totalSeats<2) return 0;

        // Multiply each value in vec (besides the first 0) and return value
        const int MOD = 1e9 + 7;
        long long answer = 1;
        for(int& plant : dividers) {
            answer = (answer * plant) % MOD;
        }
        return answer;
    }