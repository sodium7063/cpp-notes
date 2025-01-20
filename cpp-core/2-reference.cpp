/*

This section is about references.

# section 1:
The essence of references is to alias, and the syntax is:
data type &alias = original name

# section 2:
Tips:
1. **** references must be initialized when declared, and cannot be changed after initialization.
2. references are not variables, they are just aliases.

# section 3:
Reference can be parameters of a function, and the function can change the value of the original variable through the reference.
Take the swap functions as an example, since C++ use call by value, the swap function cannot change the value of the original variable. Pointer and reference can solve this problem.

> careful: references are most references of common variables, and rearly used for pointers. Don't see references as another form of pointers.

# section 4:
References can be returned by functions, but be careful with the lifetime of the reference.
1. don't return a reference to a local variable.
2. the call of function can be left value.

# section 5:
The essence of references is constant pointers, witch points to a var and cannot be changed.

# constant reference:
Used to prevent the function from changing the value of the original variable.

*/
#include <iostream>
#include <typeinfo>
using namespace std;

void fakeSwap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void ptrSwap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void refSwap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// int &retRef()
// {
//     int a = 10;
//     return a; // dont return a reference to a local variable, it will report an error.
// }

int &func_to_be_left_value()
{
    static int static_num = 10;
    return static_num;
}

int main(int argc, char const *argv[])
{
    int a = 10;

    // 1. reference
    int &b = a;
    cout << "a: " << a << ", b: " << b << endl;
    // 2. change the value of a by b (reference)
    b = 20;
    cout << "a: " << a << ", b: " << b << endl;

    // # section 4:
    // 1. dont return a reference to a local variable
    // int &ref = retRef();
    // cout << "ref: " << ref << endl;
    // 2. the call of function can be left value
    // now we have a function `func_to_be_left_value` that returns a reference to a static variable.
    // we can call it, and use a ref to receive the return value.
    int &ref = func_to_be_left_value();
    cout << "ref: " << ref << endl; // 10
    // and if make the function as left value, the static variable in it will be changed, too.
    func_to_be_left_value() = 100;
    cout << "ref: " << ref << endl; // 100
    /*
    to realize this point, we shoule know these points:
        1. var `ref` is a reference to a static variable.
        2. the call of function can be seen as the returned value.
        3. the returned value equals to the static variable.
        4. so, the static variable can be changed by the returned value.
    */

    return 0;
}
