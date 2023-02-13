// my_vector.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>


#include "vector_class.h"
//#include "vector_class.cpp"



//#include<vector>
int main()
{
    std::cout << "Hello World!\n";
    
    vector_class <char>v(10);
    std::cout << v.size() << std::endl;
    
    int arr[5] = { 1, 2, 3, 4, 5 };
    Array<int> a(arr, 5);
    a.print();
    
    vector_class2 v2(12);
    std::cout << v2.size() << std::endl;
    for (uint32_t i = 0; i < v2.size(); i+=2) {
        v2[i / 2] = i;
    }
    v2.print();
    v2.pop_back();
    v2.print();
    v2.push_back(3);
    v2.print();
    /*
    Student s("XiaoLi", 10);

    std::cout << s.getAge() << std::endl;
    */
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
