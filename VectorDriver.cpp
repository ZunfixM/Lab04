// VectorDriver.cpp
// COSC 2030
// Trevor Dine
// 8 Oct 2018

#include "VectorDriver.h"
#include <algorithm>

using std::sort;

int main()
{
	/*cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
	vector<short> sample_vector(5);

	cout << "new vector: ";
	print(sample_vector);
	cout << endl;

	fill_vector(sample_vector);

	cout << "filled vector: ";
	print(sample_vector);
	cout << endl;

	cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
	cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
	*/

	vector<short> test_vector(10);

	// Test for part 1: add_numbers
	cout << "Filling a vector with 10 random numbers" << endl;
	add_numbers(test_vector);
	cout << "Elements of the vector include:\n";
	print(test_vector);
	cout << endl;


	/*
	cout << "Trying to fill it again" << endl;
	add_numbers(test_vector);
	cout << "Elements of the vector include: ";
	for (int i = 0; i < 10; i++)
	{
		cout << " " << test_vector[i];
	}
	cout << endl;
	*/

	// Test for part 2: print_even
	cout << "\nPrinting the elements at even indexes:" << endl;
	print_even(test_vector);
	cout << endl;

	// Test for part 3: is_present
	short testVal = 5; // testVal can be changed to any short to test the function is_present
	vector<short> test_vector2 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "\nIs the value " << testVal << " present in the vector: "; 
	print(test_vector2);
	cout << "?" << endl;
	if (is_present(test_vector2, testVal))
	{
		cout << "Yes it is." << endl;
	}
	else
	{
		cout << "No it is not." << endl;
	}

	// Test for part 4: std::sort function
	vector<short> test_vector3 = { 15, 2, 90, 25, 6, 13 };

	cout << "\nTesting std::sort. \nStarting vector is:" << endl;
	print(test_vector3);
	sort(test_vector3.begin(), test_vector3.end());
	cout << "\nEnding vector after sort is:" << endl;
	print(test_vector3);
	cout << endl;
	


	system("pause");
	return 0;
}
