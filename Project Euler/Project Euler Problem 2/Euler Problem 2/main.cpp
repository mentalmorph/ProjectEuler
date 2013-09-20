/*  James Clark

	Euler Problem #2:
		Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

		1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

		By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include <iostream>
#include <string>

using namespace std;

const string PROBLEM_DESCRIPTION =
	"Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:\n\n"
	"1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...\n"
	"By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.";

//==============================================================================

void doPause ()
{
	cout << "Press [ENTER] to exit." << endl;
	cin.clear();
	cin.ignore();
}

//==============================================================================

int main (int argc, const char* argv[])
{
	long current_even = 2;
	long previous_even = 0;
	long sum = 0;

	// This loop will pick out even terms of a Fibbonacci sequence based on
	// previous even terms
	while (current_even <= 4000000)
	{ 
		sum += current_even;
		long next_even = (current_even * 4) + previous_even;
		previous_even = current_even;
		current_even = next_even;
	}

	cout << PROBLEM_DESCRIPTION << "\n" << endl;

	cout << "[SOLUTION] " << sum << endl;

	doPause();

	return 0;
}