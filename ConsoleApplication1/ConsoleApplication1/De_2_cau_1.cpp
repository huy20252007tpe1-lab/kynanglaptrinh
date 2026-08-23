
#include <iostream>
using namespace std;
void input(int& n)
{
    while (true)
    {
        std::cout << "Nhap n: ";
        std::cin >> n;
        if (2 <= n && n <= 20)
            break;
        else
            std::cout << "Vui long nhap so nguyen duong trong khoang [2, 20]!" << std::endl;
    }
}
void vematranxoazigzag(int a[][20], int n)
{
    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = n - 1;

    int value = 1;
    while (top <= bottom) {

        // 1. Đi từ trái sang phải nếu top chẵn
        if (top % 2 == 0) {
            for (int j = left; j <= right; j++) {
                a[top][j] = value;
                value++;
            }
            top++;

        } else {
        // 2. Đi từ phải sang trái nếu top lẻ
            for (int j = right; j >= left; j--) {
                a[top][j] = value;
                value++;
            }
            top++;
        }

    };
    cout << "\nMa tran zigzag:\n";

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
    vematranxoazigzag(a, n);
    return 0;
}

