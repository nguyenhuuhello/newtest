#include<iostream>
using namespace std;

int main()
{
    int arr[] = {4, 8, 9, 9};
    for (auto a : arr)  
    {
        cout << a << " ";
    }

    // Ngoài ra chúng ta có thể sử dụng biến tham chiếu để cải thiện hiệu suất
    // nếu không giá trị của mảng thay đổi sau khi thực hiện thì ta có thể thêm const trước kiểu dũ liệu auto
    for (auto &a : arr)  
    {
        cout << a << " ";
    }
    // vòng lặp for each không sử dụng với con trỏ mảng
    
        
        return 0;
}