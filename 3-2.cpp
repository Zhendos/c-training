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

	int tries = 0;


	/*
	*
	*Actual code
	*
	*/

	cout << "Welcome to the number guess game!" << endl;

	while (current != dont && tries < 11)
	{
		cout << "Enter any number!";
		cin >> current;

		tries++;

		if (current == dont) {
			cout << "You are not supposed to press this number!";
			Sleep(1000);

			break;
		}

		if (tries == 10)
		{
			cout << "Wow, you're more patient then I am, you win.";
			Sleep(1000);

			break;
		}

	}

	return 0;
}
