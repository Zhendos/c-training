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

	int dont = 0;
	int current = 0;

	int tries = 0;


	/*
	*
	*Actual code
	*
	*/

	cout << "Welcome to the number guess game!" << endl;
	cout << "Enter any number except " << dont << endl;
	cin >> current;

	dont++;
	tries++;

	while (current != dont && tries < 11)
	{
		cout << "Enter any number except " << dont << endl;
		cin >> current;

		tries++;
		dont++;

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
