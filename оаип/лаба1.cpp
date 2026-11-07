#include <iostream>
#include <cmath>
using namespace std;
int main()
{   
    setlocale(LC_ALL, "RU");
    double x, y, z, v, a, b, c, d;
    cout << "Задай x="; cin >> x;
    cout << "Задай y="; cin >> y;
    cout << "Задай z="; cin >> z;
    a = 1 + pow(sin(x + y), 2);
    b = fabs((x - 2 * y) / (1 + x * x * y * y));
    c = pow(x, fabs(y));
    d = pow(cos(atan(1 / z)), 2);
    v = a / b * c + d;
    cout << "Результат v=" << v << endl;
}
