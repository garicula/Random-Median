// Garrick Morley
// CPSC 200 Practice
// This program finds the middle of three random lines (average number between 0 and 1)

#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;

main()
{	
	//decalre variables
	double a;
	double b;
	double line1;
	double line2;
	double line3;
	int count;
	double accumulator;
	double product;
	
	
	const int TRIALS = 10;
	srand(4545);
	
	for (count = 0; count < TRIALS; count++)
	{
	
	    cout << rand() << endl;
		a = double(rand())/RAND_MAX;
		b = double(rand())/RAND_MAX;
		
		if (a >= b)
		{
			line1 = 1 - a;
			line2 = a - b;
			line3 = b;
		}
		else
		{
			line1 = 1 - b;
			line2 = b - a;
			line3 = a;
		}
		
		if (line1 >= line2 && line1 >= line3)
			accumulator += line1;
		else if (line2 >= line1 && line2 >= line3)
			accumulator += line2;
		else if (line3 >= line1 && line3 >= line2)
			accumulator += line3;
		else
			cout << "ERROR!!!";	
	}
	
	product = accumulator / TRIALS;
	cout << product;
		
}
