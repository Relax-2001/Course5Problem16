#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

void PrintAllCharectersPosipolities()
{

	string Letters = "";

	for (int i = 65; i <= 90; i++)
	{
		
		for (int j = 65; j <= 90; j++)
		{

			for (int k = 65; k <= 90; k++)
			{


				Letters = char(i);
				Letters += char(j);
				Letters += char(k);
				cout << Letters << "\n";

				Letters = "";


			}

			
		}

	}

}

int main()
{

	PrintAllCharectersPosipolities();

}
