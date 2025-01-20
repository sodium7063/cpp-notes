#include <iostream>
using namespace std;

/**
 * new 关键字，用于在堆区开辟内存，创建的返回值是对应内存空间的地址。
 * 堆区的数据由程序员管理开辟和释放，使用关键字 delete 进行删除。
 */

int *func()
{
    int *p = new int(10);
    return p;
}

int *func_arr()
{
    int *p = new int[10];
    for (int i = 0; i < 10; i++)
    {
        p[i] = i + 1;
    }
    return p;
}

int main(int argc, char const *argv[])
{
    int *p = func();
    cout << "data in the heap is: " << *p << endl;
    delete p; // 释放堆区内存
    cout << "data in the heap is: " << *p
         << ", it became to a random value after being deleted." << endl; // 释放后的内存数据不可用

    int *p_arr = func_arr();

    cout << "arr data in the heap is: ";
    for (int i = 0; i < 10; i++)
        cout << p_arr[i] << " ";
    // use `delete[]` to release the memory of an array
    delete[] p_arr;
    cout << "\narr data in the heap is: ";
    for (int i = 0; i < 10; i++)
        cout << p_arr[i] << " ";

    return 0;
}
