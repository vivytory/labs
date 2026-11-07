#include <iostream>
#include <cmath>
#include <iomanip>
#include <conio.h>
using namespace std;
void main()
{
    setlocale(LC_ALL, "RU");
    double s, r, y, x, a, b, h, m, PI = 3.1415926535;
    int k, n;

    cout << "Чтобы значения были константами нажмите 1 \n";
    cout << "Чтобы ввести значения с клавиатуры нажмите любую клавишу \n";

    if (_getch() == '1') {
        a = 0.1;
        b = 1.0;
        h = 0.1;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "h = " << h << endl;
    }
    
    else  {
        cout << "Введите a="; cin >> a;
        cout << "Введите b="; cin >> b;
        cout << "Введите h="; cin >> h;
    }
        cout << "Введите n="; cin >> n;
    cout << setw(10) << "Y(x)"
         << setw(18) << "S(x)"
         << setw(18) << "|Y(x)-S(x)|" << endl;
    cout << string(55, '-') << endl;
     for (x = a; x <= b; x = x + h){
        s = r = 1;
        for (k = 1; k <= n; k++) {
            r = r * x / k;
            s = s + r * cos(k * PI / 4);
        }
        y = exp(x * cos(PI / 4)) * cos(x * sin(PI / 4));
         m = fabs(y - s);

         cout << setw(10) << y
              << setw(18) << s
              << setw(18) << m << endl;
    }
}