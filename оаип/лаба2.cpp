#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    double pi = 3.14, y, z, x, a, b, fi;
    do {
            cout <<"\n\tЗадай z="; cin >> z;
            cout << "\n\tЗадай a="; cin >> a;
            cout << "\n\tЗадай b="; cin >> b;

        if (pow(z, 3) < 0) {
            cout << "Ошибка: корень квадратный из отрицательного числа" << endl;
        }
        if (z >= 1) {
            (x = pow(pow(z, 3), 1. / 2));
            cout << "При условии z >= 1, x=" << x << endl;
        }
        else {
            (x = z);
            cout << "При условии z < 1, x= " << x << endl;
        }
        switch (_getch()) {
        case '1': fi = 2 * x;
            cout << "Функция fi(x)=2x" << endl;
            break;
        case '2': fi = pow(x, 2);
            cout << "Функция fi(x)=x^2, fi= " << fi << endl;
            break;
        default: fi = x / 3;
            cout << " (Default!) Функция fi(x)=x/3, fi= " << fi << endl;
        }
        y = -pi * fi + a * pow(cos(pow(x, 3)), 2) + b * pow(sin(pow(x, 2)), 2);
        cout << "Результат y=" << y << endl;
        cout << "\nНажми клавишу 5 для повтора или любую другую клавишу для выхода";
    } while (_getch() == '5');
}