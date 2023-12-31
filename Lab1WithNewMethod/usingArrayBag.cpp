#include <iostream>
#include <string>
#include "ArrayBag.h"

using namespace std;


void bagTester(ArrayBag<int>& bag);

int main()
{
	// Array bag to hold integers
	ArrayBag<int> bag;
	// Array to hold initial values to put into the bag
	int items[] = {1, 33, 6, 9, 2, 65, 4, 29, 5, 8, 39, 88, 7, 25, 51, 3, 99, 14, 11, 10};
	
	// Add the initial values to the bag
	cout << "Adding positive integers to the bag: " << endl;
	for (int i = 0; i < 20; i++)
	{
		bag.add(items[i]);
	}  // end for
	
	// Call a funciton that exercises
	// some of the bag methods
	bagTester(bag);
	
	// Invoking the new method
	// added as an example
	bag.doSomething();

   return 0;
   
}  // end main

/****************************************************************/
/* Function:   bagTester
/* Inputs:     the array bag
/* Outputs:    none
/* Purpose:    This function exercises some of the bag methods
/****************************************************************/

void bagTester(ArrayBag<int>& bag)
{
	cout << "The bag is not empty; isEmpty: returns " << bag.isEmpty() << endl;

	cout << "About to clear the bag, ";
	bag.clear();
   
	cout << "isEmpty: returns " << bag.isEmpty() << endl;
}  // end bagTester



