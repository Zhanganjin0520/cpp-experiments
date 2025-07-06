//
//实验笔记
//左移运算 <<,左移后，低位补0，高位舍弃
//右移运算 >>,右移后, 低位舍弃, 高位无符号数补零，有符号数补符号位
// a = 0 || sizeof(int); 等价于 0||4 输出为 True
// sizeof 占多少字节
//

#include "experimentsVar.h"
#include <iostream>
using namespace std;

int main() {
    //实验1
    const double pi = 3.14159;
    cout << "定义常量Pi " << pi << endl;

    int a = sizeof pi;
    cout << "常量 PI 占用字节数\t" << a << endl;

    a = sizeof(short);
    cout << "short 类型占用字节数\t" << a << endl;

    a = 3 & 5;
    cout << "3&5的结果是\t" << a << endl;

    a = sizeof(int);
    cout << "int 类型占用字节数\t" << a << endl;

    double radius = 0;
    cout << "输入半径 radius" << "\n";
    cin >> radius;

    cout << "计算圆的周长" << 2 * pi * radius << endl;

    //实验2
    //无符号整数
    unsigned int x;
    unsigned int y = 100;
    unsigned int z = 50;

    x = y - z;
    cout << "Difference is: " << x << endl;
    //无符号整数无法表示负数，x值为4294967246
    x = z - y;
    cout << "Difference is: " << x << endl;

    //实验3
    int i, j, k;
    cout << "input value of i : \n";
    cin >> i;

    cout << "input value of j : \n";
    cin >> j;

    k = i - j > 0 ? i - j : j - i;
    cout << "The difference of i and j is:\t" << k;

    //if 语句
    //单语句
    if (x > y) cout << x;
    //两分支
    if (x > y) cout << x;
    else cout << y;
    //多重分支
    if (x > y) cout << y;
    else if (x == y) cout << x;
    else cout << x;

}
