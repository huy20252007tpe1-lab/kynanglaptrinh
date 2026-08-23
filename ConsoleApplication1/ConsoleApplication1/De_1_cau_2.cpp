#include <iostream>
using namespace std;
int xB, yB;
int soDuongDi(int x, int y) {
    // Đã đến B
    if (x == xB && y == yB) {
        return 1;
    }

    // Đi quá B
    if (x > xB || y > yB) {
        return 0;
    }

    // Đi sang phải hoặc đi lên
    return soDuongDi(x + 1, y) + soDuongDi(x, y + 1);
}
void nhaptoado(int& x, int& y) {
	cout << "Nhap toa do x: ";
	cin >> x;
	cout << "Nhap toa do y: ";
	cin >> y;
}
//check A có đi tới B theo hướng đông bắc hay không
bool checktoado(int xA, int yA, int xB, int yB) {
	if (xA > xB || yA > yB) {
		return false;
	}
	return true;
}
void inputtoado(int& xA, int& yA, int& xB, int& yB) {
	cout << "Nhap toa do diem A:" << endl;
	nhaptoado(xA, yA);
	cout << "Nhap toa do diem B:" << endl;
	nhaptoado(xB, yB);
	if (!checktoado(xA, yA, xB, yB)) {
        cout << "A phai nam ben trai B" << endl;

		inputtoado(xA, yA, xB, yB);
	}
}
int main()
{
    int xA, yA;
	inputtoado(xA, yA, xB, yB);

	cout << "So duong di: "
		<< soDuongDi(xA, yA);

	return 0;
}
