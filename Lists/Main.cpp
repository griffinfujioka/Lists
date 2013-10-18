#include <iostream>
#include <list>
using namespace std; 

// Given a list of integers, swap the elements of the list pairwise
// I.e., swap elements 1&2, 3&4, 5&6, etc. 

void PrintList(list<int> myList)
{
	list<int>::iterator it1 = myList.begin(); 
	while(it1 != myList.end())
	{
		cout << *it1 << ' '; 
		it1++; 
	}

	
	cout << endl; 
}

void SwapPairwise(list<int> myList)
{
	list<int>::iterator it1 = myList.begin(); 
	list<int>::iterator it2 = myList.begin();
	it2++;

	while(it2 != myList.end())
	{
		int temp = *it1; 
		*it1 = *it2; 
		*it2 = temp; 

		advance(it1, 2);
		advance(it2, 2); 
	}


	PrintList(myList); 
	
}

int main()
{
	int myInts[] = {1, 2, 3, 4, 5, 6, 7}; 
	list<int> myList(myInts, myInts + sizeof(myInts) / sizeof(int));

	cout << "Initial list: ";
	PrintList(myList); 

	cout << "Final list: "; 
	SwapPairwise(myList); 

	cout << "\nPress any key to exit...";
	char ch = getchar(); 
	return 0; 
}