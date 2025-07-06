//
// Created by zhanganjin on 2025/7/6.
//

#include "expFor.h"

#include <iostream>
using namespace std;

//功能最强的循环语句 for 语句
int main() {
    int n;
    cout << "Please enter a positive integer: ";
    cin >> n;
    cout << "Number " << n << " Factors ";
    for (int k =1; k <= n; k++) {
        if (n % k == 0) {
            cout << k << " ";
        }
    }
    cout << endl;
    return 0;
}
