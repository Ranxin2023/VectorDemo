#pragma once
#ifndef VECTOR_CLASS_H_INCLUDE
#define VECTOR_CLASS_H_INCLUDE

#include<iostream>

template <typename T>
class Array {
private:
	T* ptr;
	int size;
public:
	
	Array(T arr[], int s);
	
	void print();
};

template<typename T>
class vector_class {
private:
	uint32_t v_size;
	T* vector;
public:
	vector_class();
	vector_class(uint32_t);
	void push_back(T);
	uint32_t size();
};

class vector_class2 {
private:
	uint32_t v_size=0;
	int vector[1024];
public:
	vector_class2();
	vector_class2(uint32_t);
	void push_back(int);
	void pop_back();
	int& operator[](int);
	void print();
	uint32_t size();
};

/*
class Student {
private:
	std::string name;
	int age;
public:
	Student();
	Student(std::string, int);
	int getAge();
};
*/
//#include "vector_class.cpp"

template <typename T>
Array<T>::Array(T arr[], int s) {
	ptr = new T[s];
	size = s;
	for (int i = 0; i < size; i++)
		ptr[i] = arr[i];
}

template <typename T>
void Array<T>::print() {
	for (int i = 0; i < size; i++)
		std::cout << " " << *(ptr + i);
	std::cout << std::endl;
}



template<typename T>
vector_class<T>::vector_class() {
	//std::cout << "enter" << std::endl;
	this->v_size = 0;
}
template<typename T>
vector_class<T>::vector_class(uint32_t new_size) {
	this->vector = new T[new_size];
	this->v_size = new_size;
}
template<typename T>
void vector_class<T>::push_back(T element) {
	int a = 1;
}
template<typename T>
uint32_t vector_class<T>::size() {
	return this->v_size;
}
#endif