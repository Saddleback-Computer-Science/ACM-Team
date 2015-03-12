#include <stdio.h>
#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;

struct Input {
				double value;
				Input *prev;
			 };

int main()
{
	Input *aux;
	Input *node;

	node = new Input;

	cin >> node->value;

	cout << setprecision(4) << fixed;

	node->prev = NULL;

	while(node->value >= 0)
	{
		aux = node;

		node = new Input;

		node->prev = aux;

		cin >> node->value;
	}

	node = node->prev;

	while(node->prev != NULL)
	{
		cout << sqrt(node->value) << endl;

		node = node->prev;
	}



	return 0;
}

