#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 20

/*

Skriv et lille program (main) hvor i du gør følgende:
1. Brugeren skal indtaste et postnummer og by. Dette skal indlæses i EN
tekststreng (char-array). F.eks. ”8200 Aarhus N”.
2. Når tekststregen er indlæst undersøges om de første 4 karakterer er tal og
den første karakter ikke er 0 og den 5. karakter er et space. Hvis dette ikke er
opfyld udskrives en fejlmeddelelse of programmet afsluttes.
3. Ellers gemmes de 4 første karakterer i en unsigned long int variabel og de
resterende karakterer i en separat tekststreng.
4. Til slut udskrives postnummer og by i hver sin linje.
Hints: Opmærksomheden henledes på følgende C funktioner: fgets(), isdigit(),
strtoul() og exit().

*/

int main()
{
	using namespace std;

	char postnummer_by[SIZE];
	char* byPtr;
	unsigned long int postnummer;
	
	cout << "indtast postnummer og by:" << endl;
	fgets(postnummer_by, SIZE, stdin);


	if (postnummer_by[0] == '0')
	{
		cout << "you entered a non-valid zip code, program will be terminated" << endl;
		exit(1);
	}

	for (size_t i = 0; i<4; i++)
		{
		if (!isdigit(postnummer_by[i]))
			{
			cout << "you did not enter 4 digits in the first 4 charachters, program will be terminated";
			exit(1);
			}
		}

	if(postnummer_by[4] != ' ')
	{
		cout << "you entered a non-valid zip code, no white space in 5th character, program will be terminated" << endl;
		exit(1);
	}

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