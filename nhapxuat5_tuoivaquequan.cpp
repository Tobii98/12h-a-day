#include <iostream>
#include <string>
	using namespace std;

int main(){
	cout << "Hay nhap thong tin cua ban !. \n";
	cout << "Tuoi cua ban: ";
	int tuoi;
	cin >> tuoi;
	cout << "Que quan: ";
	string quequan;
	cin.ignore();
	getline(cin, quequan);
	
	cout << "Ban " << tuoi << " Tuoi va den tu " << quequan;
	return 0;
	
}
