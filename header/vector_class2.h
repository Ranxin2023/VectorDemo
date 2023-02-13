#pragma once
#ifndef VECTOR_CLASS2_H_INCLUDE
#define VECTOR_CLASS2_H_INCLUDE
#include<iostream>
class vector_class2 {
private:
	uint32_t v_size = 0;
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
#endif