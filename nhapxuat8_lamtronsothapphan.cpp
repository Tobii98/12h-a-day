#include <iostream>
#include <iomanip>
	using namespace std;
int main(){
	double diemvan, diemtoan;
	cout << "Tinh diem trong binh va lam tron den 2 chu so sau dau phay.\n";
	cout << "hay nhap diem van :";	
	cin >> diemvan;
	cout << "hay nhap diem toan: ";
	cin >> diemtoan;
	double diemtrungbinh = (diemvan + diemtoan) / 2;
	cout << fixed << setprecision(2) << "Diem trung binh cua van va toan la: " << diemtrungbinh;
	return 0;
	
}

