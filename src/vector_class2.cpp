#include "../header/vector_class2.h"
vector_class2::vector_class2() {
	//std::cout << "enter" << std::endl;
	this->vector = new int[this->capacity];
}

vector_class2::vector_class2(uint32_t new_size) {

	this->v_size = new_size;
	memset(this->vector, 0, sizeof(int)*this->v_size);
	
}

void vector_class2::push_back(int element) {
	if (this->v_size == this->capacity) {
		int new_capacity = static_cast<int>(this->capacity * 1.5);
		if (new_capacity <= this->capacity) { // In case of overflow or no increase
			new_capacity = this->capacity + 1;
		}

		// Allocate new memory
		int* new_vector = new int[new_capacity];

		// Copy old data to new array
		memcpy(new_vector, this->vector, this->v_size * sizeof(int));

		// Deallocate old memory and update pointers
		delete[] this->vector;
		this->vector = new_vector;
		this->capacity = new_capacity;
	}
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
