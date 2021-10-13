#include <iostream>
#include <cmath>
using namespace std;
int main()
 {
	double P, S;
	int k, i;
	P = 0;
	i = 1;
	while (i <= 10)
	{
		S = 1;
		k = 1;
		while (k <= i)
		{

			S *= k / i;
			k++;

		}
		P += (1 + S) / i*i;
		i++;
	}
	cout << P << endl;
	P = 0;
	i = 1;
	do
	{
		S = 1;
		k = 1;
		do
		{
			S *= k / i;
			k++;
		} while (k <= i);
		P += (1 + S) / i*i;
		i++;
	} while (i <= 10);
	cout << P << endl;
	P = 0;
	for (i = 1; i <= 10; i++)
	{
		S = 1;
		for (k = 1; k <= i; k++)
		{
			S *= k / i;

		}
		P += (1 + S) / i*i;
	}
	cout << P << endl;
	P = 0;
	for (i = 10; i >= 1; i--)
	{
		S = 1;
		for (k = i; k >= 1; k--)
		{
		  S *= k / i;
		}
		P += (1 + S) / i*i;
	}
	cout << P << endl;
	return 0;
}
