#include <string>
#include <iostream>
	using namespace std;

int main(){
	cout << "Tinh chu vi va dien tich hinh chu nhat. \n";
	cout << "chieu dai = ";
	int chieudai,chieurong;
	cin >> chieudai;
	cout << "Chieu Rong = ";
	cin.ignore();
	cin >> chieurong;
	cout << "Chu vi = " << 2 * (chieudai + chieurong) << "\n";
	cout << "Dien tich = " << chieudai * chieurong;
	return 0;
}
