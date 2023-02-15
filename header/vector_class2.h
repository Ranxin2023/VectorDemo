#pragma once
#ifndef VECTOR_CLASS2_H_INCLUDE
#define VECTOR_CLASS2_H_INCLUDE
#include<iostream>
#include<algorithm>

class vector_class2 {
private:
	uint32_t v_size = 0;
	int vector[1024];
	
public:
	vector_class2();
	vector_class2(uint32_t);
	void push_back(int);
	void pop_back();
	int& operator[](uint32_t);
	void print();
	int* begin();
	int back();
	int* end();
	uint32_t size();
	void sort();
	void sort(bool (*func)(int, int));
};
#endif