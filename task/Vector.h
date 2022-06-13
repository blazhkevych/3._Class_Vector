#pragma once
class Vector
{
	// Вектор
	int* m_vect;
	// Размерность вектора
	int m_size;
public:
	// Конструктор по умолчанию
	Vector();

	// Конструктор, позволяющий задавать размерность вектора
	Vector(int size);

	// Конструктор, позволяющий проинициализировать вектор с помощью существующего массива
	Vector(const int* ptr, int size);

	// Конструктор копирования
	Vector(const Vector& v);

	// Деструктор
	~Vector();

	// Функция возвращает размерность вектора
	int GetSize() const;

	// Вывод на экран
	void Print() const;

	// Заполнение вектора
	void Input();

	// Очистка вектора
	void Clear();

	// Возвращает истину, если вектор пустой
	bool IsEmpty() const;

	// Добавление элемента в вектор
	void Add(const int& item);

	// Вставка элемента в вектор по заданному индексу
	void Insert(int index, const int& item);

	// Удаление элемента из вектора по заданному индексу
	void Remove(int index);
};

