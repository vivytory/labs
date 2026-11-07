#include <iostream>
#include <string>
using namespace std;
int main()
{
   setlocale(LC_ALL, "RU");

   while (true) {
	   string s;
	   cout << "\n Введите группы чисел, состоящие из 0 и 1 \n";
	   cin >> s;

	   bool error = false;

	   for (int i = 0; i < s.length(); ++i) {
		   if (s[i] != '0' && s[i] != '1') {
			   cout << "\n Ошибка! Вводить можно только 1 или 0";
			   error = true;
			   break;
		   }
	   }

	   if (error) {
		   continue;
	   }

		   int max = 1;
		   int now = 1;

		   for (int i = 1; i < s.length(); ++i) {
			   if (s[i] == s[i - 1]) {
				   now++;
			   }

			   else {
				   if (now > max) {
					   max = now;
				   }

				   now = 1;
			   }
		   }

		   if (now > max) {
			   max = now;
		   }

		   cout << "\n Количество символов в самой длинной группе = " << max << endl;
		   break;
	   }
 }




