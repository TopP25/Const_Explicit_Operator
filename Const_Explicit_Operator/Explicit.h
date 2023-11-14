#pragma once
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
	int& operator[](int index);
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

int Array::getValue(int index) const {
	return array[index];
}

void Array::setValue(int index, int value) {
	array[index] = value;
}

void Array::display(int index) const {
	cout << getValue(index) << ", ";
}


void display(const Array& array) {
	for (size_t i = 0; i < array.getSize(); i++)
	{
		array.display(i);
	}
	cout << endl;
}

int& Array::operator[](int index) {
	return array[index];
}