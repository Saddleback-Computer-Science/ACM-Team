//Chris Baroni

#include <iostream>
#include <iomanip>
#include <Math.h>
using namespace std;

int main()
{
	int size = 10;
	double results[size];
	double input = 1;
	int count = 0;

	cin >> input;

	do
	{

		//extends array
		if(count == size)
		{
			double* tempor = results;


			size += 2;

			double results[size];

			for(int i = 0; i < size - 2; i++)
			{
				results[i] = tempor[i];
			}
		}

		results[count] = sqrt(input);
		count ++;

		cin >> input;

	}while(input > 0);

	cout << setprecision(4) << fixed;

	for(int i = count - 1; i >= 0; i--)
	{
		if(results[i] != NULL)
		{
			cout << results[i] << endl;
		}
	}


	return 0;
}


