#include <iostream>
using namespace std;

int main()
{
	int *ptr, a[10]={1,2,3,4,5,6,7,8,9,10};
	int *b = new int[10];

	/* address of a[0] is assigned to ptr */
	ptr = &a[0];   

	// I want to copy the values in a into b; since i've declared b
    // as a dynamically allocated array,
	// I can now do pointer magic!!
	b = ptr;

	cout << "Value of first element in b " << b[0] << endl; 
	cout << "Value of second element in b " << b[1] << endl; 

	a[1] = 42;
	cout << "Value of second element in b " << b[1] << endl;

	return 0;
}

/*

I believe this is wrong as:

- ptr = &a[0] is referencing the location of a[0]
- when you let b = ptr, b is actually pointing at address of the array's first element (a[0])
- this means b isn't actually getting copied and thus, the program is not doing what it was made to do