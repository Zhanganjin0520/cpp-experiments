//
// Created by zhanganjin on 2025/6/18.
//

#include "experimentsVar.h"
#include <iostream>
using namespace std;

int main() {
    const double pi = 3.14159;
    cout << "定义常量Pi" << pi << endl;

    double radius = 0;
    cout << "输入半径 radius" << "\n";
    cin >> radius;

    cout << "计算圆的周长" << 2 * pi * radius << endl;
}
