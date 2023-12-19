#ifndef SOLUTION2_H_
#define SOLUTION2_H_

class Solution2 {
public:
    int addDigits(int);
};

int Solution2::addDigits(int num) {
    int sum = 0;
    while(num != 0) {
        sum += num%10;
        num /= 10;
    }

    if(sum < 10) return sum;
    else return addDigits(sum); 
}

#endif /* SOLUTION2_H_ */