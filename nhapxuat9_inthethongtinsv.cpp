#include <iostream>
#include <string>
#include <iomanip>
	using namespace std;
int main(){
	
	string hoten, lop, masv;
	cout << "Ho ten sinh vien: ";
	getline(cin, hoten);
	cout << "Lop: ";
	getline(cin, lop);
	cout << "Ma sv: ";
	cin >> masv;
	cout << setw(10) <<"========== Bang Thong Tin Sinh Vien ========== \n";
	cout << "+" << string(29, '-') << "+" << string(13, '-') << "+" << string(20, '-') << "+"<< "\n"; 
	cout << "|" << "          Ho Va Ten          " << "|" << "     Lop     "  << "|" << "        Ma sv       "<< "|\n";
	cout << "+" << string(29, '-') << "+" << string(13, '-') << "+" << string(20, '-') <<"\n";
	cout << "|" << setw(29) << left << hoten << "|" << setw(13) << lop  <<  "|" << left <<  setw(20)<< masv <<"|\n";
	cout << "+" << string(29, '-') << "+" << string(13, '-') << "+" << string(20, '-') << "+"<< "\n"; 
	return 0;
}
