#include "../header/vector_class2.h"
vector_class2::vector_class2() {
	//std::cout << "enter" << std::endl;
	for (size_t i = 0; i < 1024; i++) {
		this->vector[i] = 0;
	}
}

vector_class2::vector_class2(uint32_t new_size) {

	this->v_size = new_size;
	for (size_t i = 0; i < new_size; i++) {
		this->vector[i] = 0;
	}
}

void vector_class2::push_back(int element) {
	this->vector[this->v_size] = element;
	this->v_size += 1;
}

void vector_class2::pop_back() {
	this->vector[this->v_size] = 0;
	this->v_size -= 1;
}

int& vector_class2::operator[](uint32_t idx)
{
	if (idx >= this->v_size) {
		std::cerr << "out of index" << std::endl;
		exit(1);
	}
	return vector[idx];
}

void vector_class2::print()
{
	std::cout << "[" << " ";
	for (uint32_t i = 0; i < this->v_size; i++) {
		if (i != this->v_size - 1) {
			std::cout << this->vector[i] << ", ";
		}

		else {
			std::cout << this->vector[i] << "]" << std::endl;
		}
	}

}

int* vector_class2::begin()
{
	return &this->vector[0];
}

int vector_class2::back()
{
	if (this->v_size==0) {
		std::cerr << "the vector is empty and doesn't have back" << std::endl;
		exit(1);
	}
	return this->vector[this->v_size-1];
}

int* vector_class2::end()
{
	return &this->vector[this->v_size];
}

uint32_t vector_class2::size() {
	return this->v_size;
}

void vector_class2::sort()
{
	std::sort(this->begin(), this->end());
}

void vector_class2::sort(bool(*func)(int, int))
{
	std::sort(this->begin(), this->end(), func);
}
