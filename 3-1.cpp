#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	/*
	 *
	 *Declared variables.
	 *
	 */

	int dont = 5;
	int current = 0;


	/*
	*
	*Actual code
	*
	*/

	cout << "Welcome to the number guess game!" << endl;

	while (current != dont)
	{
		cout << "Enter any number!";
		cin >> current;

		if (current == dont) {
			cout << "You are not supposed to press this number!";
			Sleep(1000);

			break;
		}

	}

	return 0;
}
