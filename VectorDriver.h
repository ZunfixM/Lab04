/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Rafe Cooley
 * Date: October 1, 2017 (the future)
 *
 */

// VectorDriver.h
// COSC 2030
// Trevor Dine
// 8 October 2018

typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

// TODO: implement add_numbers

// Adds 10 random numbers to an empty vector, when run more than once it produces the same values.
void add_numbers(vector<short> &data)
{
	// random numbers dependent on time
	srand((int)time(0));
	for (ulong i = 0; i < 10; i++)
	{
		data.at(i) = rand() % 1000 + 1;
	}
}

// TODO: implement print_even

// Prints all of the elements of the vector at even indexes using a simple for loop.
void print_even(const vector<short> &data)
{
	if (data.empty()) 
	{
		cout << "<empty>";
	}
	else 
	{
		cout << "<" << data.at(0);
		for (ulong i = 1; i<data.size(); i++) 
		{
			if (i % 2 == 0)
			{
				cout << ", " << data.at(i);
			}
		}
		cout << ">";
	}
}
// TODO: implement is_present

// Determines if a given value is present in the given vector and returns true if it is and false if not using an iterator.
bool is_present(const vector<short> &data, short value)
{
	std::vector<short>::const_iterator iter = data.begin();

	bool present = false;
	while (iter != data.end()) 
	{
		if (*iter == value)
		{
			present = true;
		}
		iter++;
	}

	return present;
}
// TODO: implement std::sort function
// std::sort function implemented in main of VectorDriver.cpp.
