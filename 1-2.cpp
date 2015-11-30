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

	if (note > 90  & note < 100)
	{
		cout << "Your note is a " << note << ", well known as an A!" << endl;

	}

	Sleep(5000);

	return 0;
}
