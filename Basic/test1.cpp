// 1. Tính đóng gói ENCAPSULATION: bỏ vào private thì chỉ có thể thao tác trong class đó
// 2. Tính trừu tượng hóa ABSTRACTION
// 3. Tính kế thừa  INHERITANCE 
//Chú ý:- khi sử dụng protected thì không thể truy xuất dữ liệu từ bên ngoài nhưng vẫn có thể truy xuất dữ liệu từ class kế thừa nó ( class dẫn xuất)
//      - Tránh trường hợp đa kế thừa DIMOND INHERITANCE để tránh xung đột 
//      - Kế thừa nhiều lớp: Multi-level inheritance
// 4. Tính đa hình POLYMORPHISM




#include<iostream>
#include<string>
using namespace std;


class Basic{
protected:
    int tuoi;
    string ho_ten;
    bool gioi_tinh; 

public:
    Basic()
    {
        cout <<"Constractor" << endl;
    }

    Basic(const string &ht, bool gt) // &ht sẽ chuyển thẳng giá trị thẳng vào ht, giảm thời gian thực hiện
                                // kiểu truyển tham chiếu nên giá trị sẽ bị thay đổi, vì vậy nên sử dụng const
    
    : ho_ten(ht), gioi_tinh(gt)
    {
        cout <<"Constructor" << endl;
    }
    
    void show_infor()
    {
        cout << "Ho ten: " << ho_ten << endl;
        if ( gioi_tinh == true) 
            cout << "Gioi tinh: Nam" << endl;
        else 
            cout << "Gioi tinh: Nu" << endl;
    }
    void show(){
        cout << "Hello";
    }


    ~Basic()
    {
        cout << "Distractor";
    }

    //TÍNH TRỪU TƯỢNG
    void change_gt()
    {
        gioi_tinh = false;
    }

};

//TÍNH KẾ THỪA 
class Basic_1: public Basic{
private:
    string mssv;
public:

    Basic_1(const string &ht, bool gt, string mssv)
    : Basic(ht, gt)
    {
        this->mssv = mssv;
    }

    void nhap_tuoi(int t)
    {
        tuoi = t;
    }

    
    void show(){
        cout <<"Hi" << endl;
    }


    void show_MSSV()
    {
        cout << mssv;
    }
};


int main(){
    Basic_1 *a = new Basic_1("Hoàng", true,"jkhasdkjasdfjkh");
    a->change_gt(); // Để có thể thay đổi dữ liệu thì chúng ta tạo các method: TÍNH TRỪU TƯỢNG HÓA

    a->show_MSSV();
    a->nhap_tuoi(6);
    // cout << "Nhap mssv:";
    // cin >> a->mssv;
    // cout << endl << "Mssv:" << a->mssv <<endl;
    // a->show();
    
    //CON TRỎ ĐA HÌNH: chúng ta có thể khai báo
    // Basic b = new Basic_1(const string &ht, bool gt, string mssv)
    // Nhưng không thể làm ngược lại 
    // Đối với cách này thì đối với các hàm cùng tên trong 2 class, nó vẫn sẽ gọi hàm của class Basic
    // Để gọi hàm của class Basic_1 thì cần để từ virtual  vào trước hàm đó ở class Basic

    delete a;

    return 0;
}