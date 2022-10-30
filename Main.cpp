//// Array declaration by initializing elements
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[] = { 10, 20, 30, 40 };
//
//	for (int i = 0; i < 4; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
//	// Compiler creates an array of size 4.
//	// above is same as "int arr[4] = {10, 20, 30, 40}"
//}


// C++ program to demonstrate that array elements
// are stored contiguous locations

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// an array of 10 integers.
//	// If arr[0] is stored at
//	// address x, then arr[1] is
//	// stored at x + sizeof(int)
//	// arr[2] is stored at x +
//	// sizeof(int) + sizeof(int)
//	// and so on.
//	int arr[5], i;
//
//	cout << "Size of integer in this compiler is "
//		<< sizeof(int) << "\n";
//
//	for (i = 0; i < 5; i++)
//		// The use of '&' before a variable name, yields
//		// address of variable.
//		cout << "Address arr[" << i << "] is " << &arr[i]
//		<< "\n";
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[6] = { 11,12,13,14,15,16 };
//	// Way 1
//	for (int i = 0; i < 6; i++)
//		cout << arr[i] << " ";
//
//	cout << endl;
//	// Way 2
//	cout << "By Other Method:" << endl;
//	for (int i = 0; i < 6; i++)
//		cout << i[arr] << " ";
//
//	cout << endl;
//
//	return 0;
//}
//
//// Contributed by Akshay Pawar ( Username - akshaypawar4)


//// C++ Program to print the elements of a
//// Two-Dimensional array
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	// an array with 3 rows and 2 columns.
//	int x[3][2] = { {0,1}, {2,3}, {4,5} };
//
//	// output each array element's value
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			cout << "Element at x[" << i
//				<< "][" << j << "]: ";
//			cout << x[i][j] << endl;
//		}
//	}
//
//	return 0;
//}

// C++ program to print elements of Three-Dimensional
// Array
#include <iostream>
using namespace std;

int main()
{
	// initializing the 3-dimensional array
	int x[2][3][2] = { { { 0, 1 }, { 2, 3 }, { 4, 5 } },
					{ { 6, 7 }, { 8, 9 }, { 10, 11 } } };

	// output each element's value
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 2; ++k) {
				cout << "Element at x[" << i << "][" << j
					<< "][" << k << "] = " << x[i][j][k]
					<< endl;
			}
		}
	}
	return 0;
}

