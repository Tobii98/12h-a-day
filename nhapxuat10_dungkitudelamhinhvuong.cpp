#include <iostream>
#include <string>
	using namespace std;
int main(){
	int canhben,canhtrenduoi;
	cout << "Nhap canh tren (chieu rong): ";
	cin >> canhtrenduoi;
	cout << "Nhap canh ben (chieu dai): ";
	cin >> canhben;
	
	
	cout << "+" << string(canhtrenduoi - 2, '*') << "+\n";
	for(int i = 0; i < canhben - 6; i++ ){
		cout << "*" << string(canhtrenduoi -2, ' ') << "*\n";
	}
	cout << "+" << string(canhtrenduoi -2, '*') << "+";
	return 0;
}
