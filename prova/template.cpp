#include <iostream>
#include <string>
using namespace std;

int main()
{
	float numberOne, numberTwo;
	char operation;
	string resume;
	do
	{
		system("cls");
		cout << "Inserisci il tuo calcolo: ";
		cin >> numberOne >> operation >> numberTwo;
		switch (operation)
		{
		case '-': cout << numberOne << operation << numberTwo << "=" << numberOne - numberTwo << endl; break;
		case '+': cout << numberOne << operation << numberTwo << "=" << numberOne + numberTwo << endl; break;
		case '*': cout << numberOne << operation << numberTwo << "=" << numberOne * numberTwo << endl; break;
		case '/': cout << numberOne << operation << numberTwo << "=" << numberOne / numberTwo << endl; break;
		case '%': 
			bool isNumberOneInt, isNumberTwoInt;
			isNumberOneInt = (int)numberOne == numberOne;
			isNumberTwoInt = (int)numberTwo == numberTwo;

			if (isNumberOneInt && isNumberTwoInt) {
				cout << numberOne << operation << numberTwo << "=" << (int)numberOne % (int)numberTwo << endl;
			}
			else {
				cout << "Uno dei due numeri inseriti sono numeri con una virgola, quindi non si può calcolare" << endl;
			}
			break;
			
		default: cout << "Operazione non valida" << endl;
		}

		cout << "Voui fare un altro calcolo?(y/n) ";
		cin >> resume;
		
	} while (resume == "y");

	if (resume == "n") {
		cout << "grazie per avere usato la mia calocatrice";
	}

	system("pause>0");
}