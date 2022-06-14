#include <stdlib.h>
#include <iostream>
#include "Vector.h"
using std::cout;
using std::endl;

// Конструктор по умолчанию
Vector::Vector()
{
	m_vect = nullptr;
	m_size = 0;
}

// Конструктор, позволяющий задавать размерность вектора
Vector::Vector(int size)
{
	m_size = size;
	m_vect = new int[m_size];
	int min = 0; // Минимальное значение
	int max = 100; // Максимальное значение
	for (int i = 0; i < size; i++) // Заполняем одномерный массив псевдослучайными числами.
		m_vect[i] = rand() % (max - min + 1) + min;
}

// Конструктор, позволяющий проинициализировать вектор с помощью существующего массива
Vector::Vector(const int* ptr, int size)
{
	m_size = size;
	m_vect = new int[m_size];
	for (int i = 0; i < m_size; i++)
		m_vect[i] = ptr[i];
}

// Конструктор копирования
Vector::Vector(const Vector& v)
{
	int size = v.GetSize();
	m_vect = new int[size];
	for (int i = 0; i < size; i++)
		m_vect[i] = v.m_vect[i];
	m_size = v.GetSize();
}

// Деструктор
Vector::~Vector()
{
	delete[] m_vect;
}

// Функция возвращает размерность вектора
int Vector::GetSize() const
{
	return m_size;
}

// Функция возвращает адрес вектора
int* Vector::GetVect() const
{
	return m_vect;
}

// Вывод на экран
void Vector::Print() const
{
	for (int i = 0; i < m_size; i++)
		cout << m_vect[i] << '\t';
	cout << endl;
}

// Заполнение вектора
void Vector::Input()
{
	int min = 0; // Минимальное значение
	int max = 100; // Максимальное значение
	if (m_size != 0)
		for (int i = 0; i < m_size; i++)
			m_vect[i] = rand() % (max - min + 1) + min; // Заполнение одномерного массива псевдослучайными числами.
}

// Очистка вектора
void Vector::Clear()
{
	for (int i = 0; i < m_size; i++)
		m_vect[i] = 0;
}

// Возвращает истину, если вектор пустой
bool Vector::IsEmpty() const
{
	return m_size <= 0 ? true : false;
}

// Добавление элемента в вектор
void Vector::Add(const int& item)
{
	int* p = new int[++m_size];
	if (m_vect != nullptr)
	{

		for (int i = 0; i < m_size - 1; i++)
			p[i] = m_vect[i];
		p[m_size - 1] = item;
	}
	else
	{
		*p = item;
	}
	delete[]m_vect;
	m_vect = p;
	p = nullptr;
}

// Вставка элемента в вектор по заданному индексу
void Vector::Insert(int index, const int& item)
{
	if (index < 0 || index > m_size - 1)
		return;
	int* p = new int[++m_size];
	int k = 0;
	for (int i = 0; i < m_size; i++)
	{
		if (index == i)
		{
			k = 1;
			p[i] = item;
		}
		else
			p[i] = m_vect[i - k];
	}
	delete[]m_vect;
	m_vect = p;
	p = nullptr;
}

// Удаление элемента из вектора по заданному индексу
void Vector::Remove(int index)
{
	if (index < 0 || index > m_size - 1)
		return;
	int* p = new int[--m_size];
	int k = 0;
	for (int i = 0; i < m_size; i++)
	{
		if (index == i)
			k = 1;
		p[i] = m_vect[i + k];
	}
	delete[]m_vect;
	m_vect = p;
	p = nullptr;
}