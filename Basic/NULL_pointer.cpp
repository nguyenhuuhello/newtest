#include<iostream>
#define nullptr NULL

using namespace std;

int main()
{
    int *a = NULL;
    //Lưu ý: 0 không phải là con trỏ, vì vậy sử dụng nullptr     
    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "*&a = " << *&a << endl;
    cout << "*a = " << *a << endl; 

    
    return 0;
}

