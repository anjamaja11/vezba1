#include <stdio.h>

int main ()
{
	int Calculation (int a, int b)
	{
		if(a > b)
			return a - b;
		else
			return b - a;
	}

	return 0;
}