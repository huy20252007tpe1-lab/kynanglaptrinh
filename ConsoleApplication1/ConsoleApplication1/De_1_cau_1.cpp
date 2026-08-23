#include <iostream>
using namespace std;
void input (int& n)
{
	while (true)
	{
		cout << "Nhap n: ";
		cin >> n;
		if (2<=n && n<=20)
			break;
		else
			cout << "Vui long nhap so nguyen duong trong khoang [2, 20]!" << endl;
	}
}
void vematranxoanoc(int a[][20], int n)
{
	int top = 0;
	int bottom = n - 1;
	int left = 0;
	int right = n - 1;

	int value = 1;
    while (top <= bottom && left <= right) {

        // 1. Đi từ trái sang phải
        for (int j = left; j <= right; j++) {
            a[top][j] = value;
            value++;
            
        }
        top++;

        // 2. Đi từ trên xuống dưới
        for (int i = top; i <= bottom; i++) {
            a[i][right] = value;
            value++;
        }
        right--;

        // 3. Đi từ phải sang trái
        for (int j = right; j >= left; j--) {
            a[bottom][j] = value;
            value++;
        }
        bottom--;

        // 4. Đi từ dưới lên trên
        for (int i = bottom; i >= top; i--) {
            a[i][left] = value;
            value++;
        }
        left++;
    };
    cout << "\nMa tran xoan oc:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

}

int main()
{
	int n;
	int a[20][20];

	input(n);
	vematranxoanoc(a, n);
    return 0;
}

