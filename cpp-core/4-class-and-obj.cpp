/*
类和对象

面向对象三大特征：
    - 封装
    - 继承
    - 多态


面向对象编程认为"一切皆对象"，对象具有属性和行为。

# 封装

封装是面向对象编程（OOP）的三大特性之一。其重要性在于：
    - 将属性和行为作为一个整体进行封装，用于表示生活中的事物；
    - 通过访问权限来控制属性和行为，提高安全性。

在C++中，封装通过类来实现。封装的语法为：

``` class 类名 { 访问权限: 属性和行为 }

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
