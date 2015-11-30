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

	int choise_made;

	int cola = 1;
	int water = 2;
	int sprite = 3;
	int milk = 4;
	int redbull = 5;

	/*
	*
	*Actual code
	*
	*/

	cout << "Welcome to the drink machine " << endl;
	cout << "Here is our list." << endl;
	
	cout << "1. cola" << endl;
	cout << "2. water" << endl;
	cout << "3. sprite" << endl;
	cout << "4. milk" << endl;
	cout << "5. redbull" << endl;

	cout << "Choose your option.";
	cin >> choise_made;

	switch (choise_made)
	{
	case 1:
		cout << "That will be $1,49 please" << endl;
		cout << "Enjoy your Coke!" << endl;
		break;

	case 2:
		cout << "That will be $0,99 please" << endl;
		cout << "Enjoy your fresh water!" << endl;
		break;

	case 3:
		cout << "That will be $1,99 please" << endl;
		cout << "Take that Sprite mate!" << endl;
		break;

	case 4:
		cout << "That will be $1,50 please" << endl;
		cout << "The cows will be happy!" << endl;
		break;

	case 5:
		cout << "That will be $2,50 please" << endl;
		cout << "Get that energy!" << endl;
		break;
	}

	Sleep(1000);

	
	return 0;
}
