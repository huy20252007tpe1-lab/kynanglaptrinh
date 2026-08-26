#include <iostream>
using namespace std;

bool laSoNguyenTo(int* n) { 
    if (*n < 2)
        return false;

    for (int i = 2; i < *n; i++) {
        if (*n % i == 0)
            return false;
    }

    return true;
}

bool laSoDoiXung(int* n) {
    int banDau = *n;
    int dao = 0;

    while (*n > 0) {
        int chuSo = *n % 10;
        dao = dao * 10 + chuSo;
        *n = *n / 10;
    }

    return banDau == dao;
}
void nhapn(int& n) {
    do {
        cout << "Nhap so luong phan tu (n >= 10): ";
        cin >> n;
    } while (n < 10);
}

void inputArray(int* a, int& n) {
    int* p = a;

    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i  << ": ";
        cin >> *(p + i);

    }
}   
void outsonguyento(int* a, int& n) {
    int* p = a;

    cout << "Cac so nguyen to trong mang la: ";

    for (int i = 0; i < n; i++) {

        if (laSoNguyenTo(p + i)) {
            cout << *(p + i) << " ";
        }
    }

	cout << endl;
}
void outsodoiXung(int* a, int& n) {
	cout << "Cac so doi xung trong mang la: ";
	for (int i = 0; i < n; i++) {
		if (laSoDoiXung(&a[i])) {
			cout << a[i] << " ";
		}
	}
	cout << endl;
}
int main()
{
    int n;
    nhapn(n);
    int* a = new int[n];
    inputArray(a, n);
	outsonguyento(a, n);
	outsodoiXung(a, n);	

    delete[] a;

    return 0;
}