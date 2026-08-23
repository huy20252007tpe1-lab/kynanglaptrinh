#include <iostream>
using namespace std;
void nhaptoado(int& xA, int& yA, int& xB, int& yB) {
	// Nhập tọa độ A và B , A phải đi tới B theo hướng tây nam, nếu không phải nhập lại tọa độ 
	cout << "Nhap toa do A: " << endl;
	cout << "Nhap toa do xA: ";
	cin >> xA;
	cout << "Nhap toa do yA: ";
	cin >> yA;
	cout << "Nhap toa do B: " << endl;
	cout << "Nhap toa do xB: ";
	cin >> xB;
	cout << "Nhap toa do yB: ";
	cin >> yB;
	// Kiểm tra điều kiện xA >= xB và yA >= yB
	if (xA < xB || yA < yB) {
		cout << "Toa do A phai nam ben phai toa do B!" << endl;
		nhaptoado(xA, yA, xB, yB);
	}
}
int socachdituAdenB(int xA, int yA, int xB, int yB) {
	// Đã đến B
	if (xA == xB && yA == yB) {
		return 1;
	}

	// Đi quá B
	if (xA < xB || yA < yB) {
		return 0;
	}
	// Đi sang phải hoặc đi lên

	return socachdituAdenB(xA - 1, yA, xB, yB) + socachdituAdenB(xA, yA - 1, xB, yB);
}
int main()
{
	int xA, yA, xB, yB;
	nhaptoado(xA, yA, xB, yB);
	cout << "So cach di tu A den B: " << socachdituAdenB(xA, yA, xB, yB) << endl;
    return 0;
}
