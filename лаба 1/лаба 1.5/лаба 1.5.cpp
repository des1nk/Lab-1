// лаба 1.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << abs(a) + abs(b) << endl;
	cout << abs(a) - abs(b) << endl;
	cout << abs(a) * abs(b) << endl;
	cout << abs(a) / abs(b) << endl;
}
