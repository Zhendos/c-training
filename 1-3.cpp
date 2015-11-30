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

	int note;

	/*
	*
	*Actual code
	*
	*/

	cout << "Enter the note you have received" << endl;
	cin >> note;

	if (note > 0 && note < 59)
	{
		cout << "Your note is a " << note << ", which means a F" << endl;
	}

	else if (note > 59 && note <= 69)
	{
		cout << "Your note is a " << note << ", which means an D" << endl;
	}

	else if (note > 69 && note <= 79)
	{
		cout << "Your note is a " << note << ", which means a C" << endl;
	}

	else if (note > 79 && note <= 89)
	{
		cout << "Your note is a " << note << ", which means a B" << endl;
	}

	else if (note > 89 && note <= 100)
	{
		cout << "Your note is a " << note << ", which means an A" << endl;
	}

	
	return 0;
}
