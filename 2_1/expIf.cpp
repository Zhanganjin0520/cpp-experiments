//
// Created by zhanganjin on 2025/7/6.
//

#include "expIf.h"

#include <iostream>
using namespace std;


int main(int argc, char *argv[]) {
    cout << "if pause demo\n";
    int x, y;
    cout << "Enter x and y:";
    cin >> x >> y;
    if (x != y)
        if(x > y)
            cout << x << " is greater than " << y << endl;
        else
            cout << y << " is greater than " << x << endl;
    else
        cout << y << " is equal to " << x << endl;
    return 0;
}
