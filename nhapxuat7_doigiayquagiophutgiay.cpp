#include <iostream>
#include <string>
	using namespace std;
	
int main(){
	cout << "Doi giay thanh gio-phut-giay.\n";
	cout << "Hay nhap so giay :";
	int tongsogiay;
	cin >> tongsogiay;
	
	int gio = tongsogiay / 3600;
	int sodu = tongsogiay % 3600;
	int phut = sodu / 60;
	int giay = sodu % 60;
	
	cout << tongsogiay << "s = :" << gio << ":" << phut << ":" << giay;
	return 0;
}
