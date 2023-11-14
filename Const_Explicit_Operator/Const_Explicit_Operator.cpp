// Const_Explicit_Operator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Array {
	int size;
	int* array;
public:
	explicit Array(int size = 10);
	~Array();
	int getSize() const;
	int getValue(int index) const;
	void setValue(int index, int value);
	void display(int index) const;
};

Array::Array(int size) {
	this->size = size;
	array = new int[size];
}
Array::~Array() {
	delete[] array;
}

int Array::getSize() const {
	return size;
}

int Array::getValue(int index) const{
	return array[index];
}

void Array::setValue(int index, int value) {
	array[index] = value;
}

void Array::display(int index) const {
	cout << getValue(index) << ", ";
}

void display(const Array& array){
	for (size_t i = 0; i < array.getSize(); i++)
	{
		array.display(i);
	}
	cout << endl;
}

int main()
{
	cout << "Dynamic array" << endl;
	int size = 4;
	Array array(size);
	for (size_t i = 0; i < size; i++)
	{
		array.setValue(i, size - 1);
	}
	display(array);

	cout << "!!!!!!!!" << endl;

	display(5);

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
