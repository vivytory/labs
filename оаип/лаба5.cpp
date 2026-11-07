#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RU");
	int a[100], i, n, sum;
	cout << "Нажмите 1 для ввода случайных чисел \n";
	cout << "Нажмите любую клавишу для ввода чисел с клавиатуры \n";

	while (true) {
		if (_getch() == '1') {
			srand(time(0));
			cout << "Выбран ввод случайных чисел \n";
			cout << "Введите размер массива: ";
			cin >> n;
			for (i = 0; i < n; i++) {
				a[i] = rand() % 21 - 10;
				cout << a[i] << " ";
			}
		}

		else {
			cout << "Выбран ввод чисел с клавиатуры \n";
			cout << "Введите размер массива: ";
			cin >> n;
			for (i = 0; i < n; i++) {
				cout << "a[" << i + 1 << "]=";
				cin >> a[i];
			}
		}

		int last = -1;
		for (i = 0; i < n; i++) {
			if (a[i] > 0) {
				last = i;
			}
		}

		if (last == -1) {
			cout << "В массиве нет положительных элементов \n " << endl;
		}

		else if (last == 0) {
			cout << "Последний положительный элемент стоит первым \n" << endl;
		}

		else {
			int sum = 0;
			for (int i = 0; i < last; i++) {
				sum = sum + a[i];
			}
			cout << "Последний положительный элемент: a[" << last + 1 << "] = " << a[last] << endl;
			cout << "Сумма элементов до него = " << sum << endl;
			break;
		}

	}
}