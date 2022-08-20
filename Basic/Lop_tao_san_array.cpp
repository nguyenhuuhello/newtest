#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main()
{
    array <int, 5> arr1 = {8,5,9};
    for (auto a : arr1)
    {
        cout << a << " ";
    }
    cout << endl;
    sort(arr1.begin(), arr1.end());
    for (auto &a : arr1)
    {
        a = a + 1;
        cout << a << " ";
    }
    cout << endl;
    for (auto &a : arr1)
    {
        cout << a << " ";
    }

    return 0;
}