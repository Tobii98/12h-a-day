#include <iostream>
#include <string>
	using namespace std;

int main(){
	cout << "Hay nhap a va b de xem Tong, Hieu: \n";
	double a,b;
	string ketqua;
	cout << "Hay nhap a = ";
	cin >> a;
	cout << "Hay nhap b = ";
	cin >> b;
	
	cout << "Tong : " << a + b << "\n";
	cout << "Hieu : " << a - b << "\n";
	cout << "Tich : " << a * b;	
	return 0;
	
}
