#include <iostream>
#define SIZE 20

/*

Home ex. 8.2:
Ret dit program fra Home ex. 8.1 således, at programmet ikke lukkes ned ved fejl,
men at brugeren får mulighed for at indtaste en ny tekststreng. Dette skal gentages
indtil tekststrengen har det ønskede format (4 først karakterer er tal og første
karakter er ikke 0 og den 5. karakter er et space).

*/

int main()
{
	using namespace std;

	char postnummer_by[SIZE];
	char* byPtr;
	unsigned long int postnummer;
	int error;

	do
	{
		error = 0;

		cout << "indtast postnummer og by:" << endl;
		fgets(postnummer_by, SIZE, stdin);


		if (postnummer_by[0] == '0')
		{
			cout << "you entered a non-valid zip code, program will be terminated" << endl;
			error = 1;
		}

		for (size_t i = 0; i < 4; i++)
		{
			if (!isdigit(postnummer_by[i]))
			{
				cout << "you did not enter 4 digits in the first 4 charachters, program will be terminated";
				error = 1;
			}
		}

		if (postnummer_by[4] != ' ')
		{
			cout << "you entered a non-valid zip code, no white space in 5th character, program will be terminated" << endl;
			error = 1;
		}
		if (error == 1)
		cout << "you entered something wrong please try again." << endl;

	} while (error == 1);

	cout << "dit postnummer og by er lig: " << endl;
	for (size_t i = 0; i < SIZE; i++)
	{
		if (postnummer_by[i] == '\0')			//printer vores array indtil den når '\0'
			break;

		cout << postnummer_by[i];
	}


	postnummer = strtoul(postnummer_by, &byPtr, 10);
	cout << "dit postnummer er: " << postnummer << " " << endl;
	cout << "din by hedder: " << " " << byPtr << endl;


	return 0;
}