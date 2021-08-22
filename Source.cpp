#include<iostream>
#include<ctime>
#include<string>
#include<string.h>
using namespace std;
struct car
{
	string color;
	string model;
	string number;
};
void print(car* car1, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Color:" << car1[i].color << endl;
		cout << "Model:" << car1[i].model << endl;
		cout << "Number:" << car1[i].number << endl;
	}
}
void input(car* car1, int size)
{
	cin.ignore();
	for (int i = 0; i < size; i++)
	{
		cout << "Input color:";
		getline(cin, car1[i].color);
		cout << "Input model:";
		getline(cin, car1[i].model);
		cout << "Input number:";
		getline(cin, car1[i].number);
	}
}
void edit(car* car1, int size)
{
	cin.ignore();
	int index;
	cout << "Input index your car:";
	cin >> index;
	cin.ignore();
	cout << "Input color:";
	getline(cin, car1[index-1].color);
	cout << "Input model:";
	getline(cin, car1[index-1].model);
	cout << "Input number:";
	getline(cin, car1[index-1].number);
}
void main()
{
	const int size = 10;
	car car1[size] = {};
	cout << "Do you want add 10 cars?Input 1 if yes or 0, if no:";
	int choose;
	cin >> choose;
	if (choose == 1)
	{
		input(car1, size);
	}
	cout << "Do you want print your cars?Input 2 if yes or 0, if no:";
	cin >> choose;
	if (choose == 2)
	{
		print(car1, size);
	}
	cout << "Do you want edit your car?Input 3 if yes or 0, if no:";
	cin >> choose;
	if (choose == 3)
	{
		edit(car1, size);
	}
	cout << "Do you want print your cars?Input 2 if yes or 0, if no:";
	cin >> choose;
	if (choose == 2)
	{
		print(car1, size);
	}
}