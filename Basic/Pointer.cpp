#include<iostream>
using namespace std;
int main()
{
    
    
    int b = 5;
    int *a = &b;
    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "*&a = " << *&a << endl;
    cout << "*a = " << *a << endl;
    cout << "&b = " << &b << endl;
    cout << "*&b = " << *&b << endl;
    cout << "b = " << b << endl;
    cout << "----------------------------";
    *a = 100;
    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "*&a = " << *&a << endl;
    cout << "*a = " << *a << endl;
    cout << "&b = " << &b << endl;
    cout << "*&b = " << *&b << endl;
    cout << "b = " << b << endl;
    // *a : giá trị
    // &a : địa chỉ
    // a  : địa chỉ
    cout << "----------------------------";
    int c = 11;
    a = &c;
    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "*&a = " << *&a << endl;
    cout << "*a = " << *a << endl;
    cout << "&b = " << &b << endl;
    cout << "*&b = " << *&b << endl;
    cout << "b = " << b << endl;
    cout << typeid(&a).name();
    
    return 0;

}