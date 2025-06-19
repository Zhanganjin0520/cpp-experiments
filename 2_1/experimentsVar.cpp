//
// Created by zhanganjin on 2025/6/18.
//

#include "experimentsVar.h"
#include <iostream>
using namespace std;

int main() {
    const double pi = 3.14159;
    cout << "定义常量Pi " << pi << endl;

    //sizeof 占多少字节
    int x = sizeof pi;
    cout << "常量 PI 占用字节数" << x << endl;

    x = sizeof(short);
    cout << "short 类型占用字节数" << x << endl;

    x = 3 & 5;
    cout << "3&5的结果是" << x << endl;

    x = sizeof(int);
    cout << "int 类型占用字节数" << x << endl;

    // a = 0 || sizeof(int); 输出位 True

    double radius = 0;
    cout << "输入半径 radius" << "\n";
    cin >> radius;

    cout << "计算圆的周长" << 2 * pi * radius << endl;

    //左移运算 <<,左移后，低位补0，高位舍弃

    //右移运算 >>,右移后, 低位舍弃, 高位无符号数补零，有符号数补符号位
}
