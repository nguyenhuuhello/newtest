#include<iostream>
#include<string>
using namespace std;

auto b (int d, int c)
{
    int e = d + c;
    return e;
};
int main()
{
    auto a = "kjshadfjgkhdsafgjh";
    cout << typeid(a).name(); 

    auto sum = (20,11);
    cout << sum;
    return 0;



}