#include <iostream>
using namespace std;

int main () {
    int r,c, a[40][40], b[40][40], sum[40][40];
    cout << "Введите количество строк(до 40): ";
    cin >> r;
    cout << "Введите количество столбцов(до 40): ";
    cin >> c;

    cout << endl << "Ввод элементов первой матрицы: " << endl; 

    for (int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j){
            cout << "Введите элемент A: " << "[" << i+1 << "]" << "[" << j+1 << "]" << " : ";
            cin >> a[i][j];
        }
    // ^ ввод первой матрицы

    cout << endl << "Ввод элементов второй матрицы: " << endl;

        for (int i = 0; i < r; ++i)
            for(int j = 0; j < c; ++j){
                cout << "Введите элемент B: " "[" << i+1 << "]" << "[" << j+1 << "]" << " : ";
                cin >> b[i][j];
        }
    // ^ ввод второй матрицы

    for (int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];
    // ^ сумма матриц

    cout << endl << "Сумма двух матриц: " << endl;

    for (int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j){
            cout << sum[i][j] << "  ";
            if (j==c-1) //случай, когда следует переместиться на строку ниже
                cout << endl;}
}
