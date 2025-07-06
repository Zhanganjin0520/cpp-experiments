//
// Created by zhanganjin on 2025/7/6.
//

#include "expWhile.h"

#include <iostream>
#include <__ostream/basic_ostream.h>
using namespace std;

int main(int argc, char *argv[]) {
    //1-10求和 while
    int i = 1, sum = 0;
    while (i <= 10) {
        sum += i;
        i++;
    }
    cout << "sum = " << sum << endl;

    //1-10求和 do while
    int j = 1, sum2 = 0;
    do {
        sum2 += j;
        j++;
    } while (j <= 10);
    cout << "sum2 = " << sum2 << endl;

    //数字反转 do-while
    int n, right_digit, newNum = 0;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The number in reverse order is ";
    do {
        right_digit = n % 10;
        cout << right_digit;
        n = n / 10;
    } while (n != 0);
    cout << endl;
    return 0;
}
