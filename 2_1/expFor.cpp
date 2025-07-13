//
// Created by zhanganjin on 2025/7/6.
//

#include "expFor.h"

#include <iostream>
using namespace std;

enum GameResult { WIN, LOSE, TIE, CANCEL };

//功能最强的循环语句 for 语句
int main() {
    int n;
    cout << "Please enter a positive integer: ";
    cin >> n;
    cout << "Number " << n << " Factors ";
    for (int k = 1; k <= n; k++) {
        if (n % k == 0) {
            cout << k << " ";
        }
    }
    cout << endl;


    GameResult result;
    GameResult omit = CANCEL;
    for (int count = WIN; count <= CANCEL; count++) {
        result = GameResult(count);
        if (result == omit) {
            cout << "The game was cancelled" << endl;
        } else {
            cout << "The game was played ";
            switch (result) {
                case WIN: cout << "wins" << endl;
                    break;
                case LOSE: cout << "loses" << endl;
                    break;
                default: ;
            }
        }
    }

    return 0;
}
