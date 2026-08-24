#include <iostream>
using namespace std;
void input(int& n, int& k) {
	do {
		cout << "Nhap so luong phan tu (n >= 10): ";
		cin >> n;
	} while (n < 10);
	cout << "Nhap so k: ";
	cin >> k;
}

void listCapSumK(int* a, int n, int k) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] + a[j] == k) {
				cout << "(" << a[i] << ", " << a[j] << ")" << endl;
			}
		}
	}
}

void inputArray(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
}

int uocChung(int a, int b) {
	if (a < 0) a = -a;
	if (b < 0) b = -b;
	if (a == 0 && b == 0) return 0;
	if (a == 0) return b;
	if (b == 0) return a;
	int uoc = 1;
	int nhoHon = (a < b) ? a : b;

	for (int i = 1; i <= nhoHon; i++) {
		if (a % i == 0 && b % i == 0) {
			uoc = i;
		}
	}

	return uoc;
}

void listPairs(int* a, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (uocChung(a[i], a[j]) == 1) {
				cout << "(" << a[i] << ", " << a[j] << ")" << endl;
			}
		}
	}
}

int main()
{
	int n;
	int k;
	input(n, k);
	int* a = new int[n];
	inputArray(a, n);
	cout << "Cac cap so co tong bang "<<k<<":\n";

	listCapSumK(a, n, k);
	cout << "Cac cap so nguyen to cung nhau trong mang:\n";
	listPairs(a, n);

    delete[] a;

    return 0;
}