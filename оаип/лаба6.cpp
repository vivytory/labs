#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
	int n, m;
	setlocale (LC_ALL, "RU");
	cout << "Введите количество строк матрицы : ";
	cin >> n;
	cout << "Введите количество столбцов матрицы : ";
	cin >> m;

	double** a = new double* [n];

for (int i = 0; i < n; i++) {
    a[i] = new double[m];
}

     int *b = new int[n];
cout << "Введите элементы матрицы : " << endl;

for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		cin >> a[i][j];
	}
}

cout << "Матрица имеет вид: " << endl;
for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		cout << setw(4) << a[i][j];
	}
	cout << endl;
}

for (int i = 0; i < n; i++) {
	b[i] = 1;
	for (int j = 0; j < m / 2; j++) {
		if (a[i][j] != a[i][m - 1 - j]) {
			b[i] = 0;
			break;
		}
	}
}

cout << "Вектор B:" << endl;
for (int i = 0; i < n; i++) {
	cout << b[i] << "";
}

for (int i = 0; i < n; i++) {
	delete[] a[i];
}


delete[] a;
delete[] b;
}