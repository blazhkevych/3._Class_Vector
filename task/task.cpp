/*
	СТАТУС: готово

	ИЗВЕСТНЫЕ ОШИБКИ:

	ДОДЕЛАТЬ:

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
	int* arr = new int[size] {1, 2, 3, 4, 5}; // массив для инициализации
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

	cout << "\nv1 IsEmpty - " << boolalpha << v1.IsEmpty() << endl;
	cout << "\nv2 IsEmpty - " << boolalpha << v2.IsEmpty() << endl;
	cout << "\nv3 IsEmpty - " << boolalpha << v3.IsEmpty() << endl;

	cout << "\nv1 :" << endl;
	v1.Print();
	cout << endl;
	cout << "v2 :" << endl;
	v2.Print();
	cout << endl;
	cout << "v3 :" << endl;
	v3.Print();
	cout << endl;

	v1.Add(111);
	v1.Add(111);
	v2.Add(222);
	v2.Add(222);
	v3.Add(333);
	v3.Add(333);
	cout << "\nv1 After adding 2 elements to the vector :" << endl;
	v1.Print();
	cout << "\nv2 After adding 2 elements to the vector :" << endl;
	v2.Print();
	cout << "\nv3 After adding 2 elements to the vector :" << endl;
	v3.Print();

	v1.Clear();
	v2.Clear();
	v3.Clear();
	cout << "\nv1 After clearing the vector :" << endl;
	v1.Print();
	cout << "\nv2 After clearing the vector :" << endl;
	v2.Print();
	cout << "\nv3 After clearing the vector :" << endl;
	v3.Print();

	v1.Input();
	v2.Input();
	v3.Input();
	cout << "\nv1 After filling the vector :" << endl;
	v1.Print();
	cout << "\nv2 After filling the vector :" << endl;
	v2.Print();
	cout << "\nv3 After filling the vector :" << endl;
	v3.Print();

	cout << "\nv1 IsEmpty - " << boolalpha << v1.IsEmpty() << endl;
	cout << "\nv2 IsEmpty - " << boolalpha << v2.IsEmpty() << endl;
	cout << "\nv3 IsEmpty - " << boolalpha << v3.IsEmpty() << endl;

	cout << "\nv1 After inserting the 111111 into the vector at the 1 index :" << endl;
	v1.Insert(1, 111111);
	v1.Print();
	cout << "\nv1 size is " << v1.GetSize() << endl;

	cout << "\nv2 After inserting the 222222 into the vector at the 2 index :" << endl;
	v2.Insert(2, 222222);
	v2.Print();
	cout << "\nv2 size is " << v2.GetSize() << endl;

	cout << "\nv2 After inserting the 333333 into the vector at the 3 index :" << endl;
	v3.Insert(3, 333333);
	v3.Print();
	cout << "\nv3 size is " << v3.GetSize() << endl;

	v1.Remove(1);
	cout << "\nv1 After removing an element from a vector at a 1 index :" << endl;
	v1.Print();
	cout << "\nv1 size is " << v1.GetSize() << endl;

	v2.Remove(2);
	cout << "\nv2 After removing an element from a vector at a 2 index :" << endl;
	v2.Print();
	cout << "\nv2 size is " << v2.GetSize() << endl;

	v3.Remove(3);
	cout << "\nv3 After removing an element from a vector at a 3 index :" << endl;
	v3.Print();
	cout << "\nv3 size is " << v3.GetSize() << endl;

	Vector v4 = v3;

	cout << "\nv3 and v4 After Vector v4 = v3 :" << endl;
	cout << "v3 addresses :" << &v3 << '\t' << v3.GetVect() << endl;
	cout << "v4 addresses :" << &v4 << '\t' << v4.GetVect() << endl;

	cout << "\nv3 :";
	cout << "\nv3 size is " << v3.GetSize() << endl;
	v3.Print();
	cout << endl;

	cout << "v4 :";
	cout << "\nv4 size is " << v4.GetSize() << endl;
	v4.Print();
	cout << endl;
	cout << endl;

	cout << "arr address :" << &arr << endl;
	cout << "v1 addresses :" << &v1 << '\t' << v1.GetVect() << endl;
	cout << "v2 addresses :" << &v2 << '\t' << v2.GetVect() << endl;
	cout << "v3 addresses :" << &v3 << '\t' << v3.GetVect() << endl;
	cout << "v4 addresses :" << &v4 << '\t' << v4.GetVect() << endl;

	delete[]arr;
}