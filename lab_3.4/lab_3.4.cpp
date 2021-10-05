// Lab_03_4.cpp
// Кобетяк Андрій
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 12

#include <iostream>

using namespace std;

int main()
{
	double x, y, R;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((0 <= y && y <= R && -1 * R <= x && x <= 0 && (x + R) * (x + R) + (y - R) * (y - R) >= R * R) ||
		(0 <= x && x <= R && -1 * R <= y && y <= 0 && (x - R) * (x - R) + (y + R) * (y + R) >= R * R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}