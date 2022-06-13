/*
	СТАТУС: Не готово

	ИЗВЕСТНЫЕ ОШИБКИ:
	// Добавление элемента в вектор
	функция сбоит при работе с вектором созданным конструктором по умолчанию



	ВИДЕО: 2:43:52
*/
#include <iostream>
#include "Vector.h"
using std::cout;
using std::endl;
using std::boolalpha;

int main()
{
	srand(time(0));
	int size{ 5 };
	int* arr = new int[size] {1, 2, 3, 4, 5};
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

	Vector v1;
	Vector v2{ 3 };
	Vector v3{ arr, size };

	cout << "\nv1 size is " << v1.GetSize() << endl;
	cout << "\nv2 size is " << v2.GetSize() << endl;
	cout << "\nv3 size is " << v3.GetSize() << endl;

	v1.Print();
	v2.Print();
	v3.Print();

	v2.Add(999);
	v2.Print();

	v2.Add(888);
	v2.Print();

	v2.Add(777);
	v2.Print();

	v2.Clear();
	v2.Print();
	v2.Input();
	v2.Print();

	cout << "\nv1 IsEmpty - " << boolalpha << v1.IsEmpty() << endl;
	cout << "\nv2 IsEmpty - " << boolalpha << v2.IsEmpty() << endl;
	cout << "\nv3 IsEmpty - " << boolalpha << v3.IsEmpty() << endl;

	v2.Print();
	cout << "\nv2 size is " << v2.GetSize() << endl;
	v2.Insert(2, 999999);
	v2.Print();
	cout << "\nv2 size is " << v2.GetSize() << endl;

	v2.Add(777777);
	v2.Print();
	cout << "\nv2 size is " << v2.GetSize() << endl;

	v2.Remove(2);
	v2.Print();
	cout << "\nv2 size is " << v2.GetSize() << endl;

	delete[]arr;
}