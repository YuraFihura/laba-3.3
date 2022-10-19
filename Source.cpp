// Lab_03_3.cpp
// < Фігура Юрій >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 24
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	
		double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x < 0)
		y = -R / 6 - (x + 6);
	else
		if (x > 0 < x && x <= R)
			y = 0 - sqrt(pow(R, 2) - pow(x - 0, 2));
		else
			if (x > R && x <= 2 * R)
				y = 0 + sqrt(pow(R, 2) - pow(x - 2 * R, 2));
			else
				
				y = R;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}