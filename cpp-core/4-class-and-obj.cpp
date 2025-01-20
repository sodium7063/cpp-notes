/*
类和对象

C++面向对象三大特性为：封装、继承、多态。

面向对象思想认为“万物皆对象”，对象上有其属性和行为。

# 封装

封装是面向对象思想的三大特性之一，其意义在于：
    - 将属性和行为作为一个整体，表现生活中的事物；
    - 将属性和行为加以权限控制，提高安全性。

封装的语法：class 类名 { 访问权限： 属性和行为 }

# 继承

# 多态

*/
#include <iostream>
using namespace std;

const int PI = 3.14; // 定义一个常量 PI

// 定义一个类
class Circle
{
public:
    int m_r; // 半径

    // 计算圆的周长
    double calculat_perimeter()
    {
        return 2 * PI * m_r;
    }
};

int main(int argc, char const *argv[])
{
    // 创建一个对象
    Circle c1;
    c1.m_r = 10; // 给圆对象的半径赋值
    cout << "perimeter of circle c1 is: " << c1.calculat_perimeter() << endl;

    return 0;
}
