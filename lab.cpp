#include <iostream>
#include <fstream>
#include <string>
// #include <cstring>
#include <cmath>
#include <stack>
#include <vector>

using namespace std;

class HinhHoc {
protected:
    const double pi = 3.14;
public:
    virtual double get_ChuVi () = 0;
    virtual double get_DienTich () = 0;
    virtual double get_TheTich () = 0;
};

class HinhTron : public HinhHoc {
private:
    double banKinh = 0;
public:
    void setBanKinh (double bk = 0) { this->banKinh = bk;}
    double get_ChuVi ()     { return this->banKinh * 2 * pi;                }
    double get_DienTich ()  { return this->banKinh * this->banKinh * pi;    } 
    double get_TheTich () {
        cout << "Invalid" << endl;
        return 0;
    }
};
class HinhLapPhuong : public HinhHoc {
private:
    double canh;
public:
    void setcanh (double bk = 0) { this->canh = bk;}
    double get_ChuVi ()     { return this->canh * 12;                       }
    double get_DienTich ()  { return this->canh * this->canh * 6;           }
    double get_TheTich ()   { return this->canh * this->canh * this->canh;  }
};


class Parent{  
	public: 	 	 	
	virtual void show(){
	    cout << "Ham show cua Parent" << endl;
	}
}; 
class Child: public Parent{  	
    public: 	 	 	
    void show(){
        cout << "Ham show cua Child" << endl;
    }
};  



// <returnType> <methodName>([<params>]) = 0;

int main()
{
    Child c1; 
    Parent *p1 = &c1;
    p1->show(); // Ham show cua Child
}

/**

Có thể thấy chương trình sau khi chạy sẽ gọi đến phương thức show() của lớp Parent, mà không gọi tới phương thức show() của lớp Child.

Vậy để chương trình gọi tới phương thức show() của lớp Child ta sử dụng hàm ảo virtual như sau:

**/
/**
 * change
 * fffff
 * */