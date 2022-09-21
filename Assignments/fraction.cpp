#include<iostream>
#include<cmath> 
#include "helper_functions2.h"
using namespace std;
int main()
{
    string again = " ";
    int value;
    do
    {
        // do numerator checks and inputs
        string noom = " ";
        cout << "Enter a numerator: " << endl;
        getline(cin, noom);
        is_int(noom);
        while(!(is_int(noom)))
        {

            cout << "Invalid Input. Enter a numerator: " << endl;
            getline(cin, noom);

        }
        string_to_int(noom, value);
        int num = value;

        // denominator checks and inputs
        string denom = " ";
        cout << "Enter a denominator: " << endl;
        getline(cin, denom);
        // ensures not zero or string
        while(!(is_int(denom)))
        {

            cout << "Invalid Input. Enter a denominator: " << endl;
            getline(cin, denom);

        }
        string_to_int(denom, value);
        int den = value;
        // ensures not string after initial check
        while(!(to_lowest_terms(num, den)))
        {

            getline(cin, denom);
            while(!(is_int(denom)))
            {

                cout << "Invalid Input. Enter a denominator: " << endl;
                getline(cin, denom);

            }
            string_to_int(denom, value);
            den = value;
        }
    // nice simplification stuff for how the fraction looks
    if(den < 1 && num > 1)
	{
			
        den = den * -1;
        num = num * -1;

    }
    else if(den < 1 && num < 1)
    {

        den = den * -1;
        num = num * -1;

    }
	if(den == 1)
    cout << "The lowest term of your fraction is: " << num << endl;
    else if(num == 0)
    cout << "The lowest term of your fraction is: " << num << endl;
    else
    cout << "The lowest term of your fraction is: " << num << "/" << den << endl;
	
        
        // Play Again
        cout << "Do you want to play again? n - no, y - yes" << endl;
        getline(cin, again);
        while(!(again == "y" || again == "n"))
        {

            cout << "Invalid Input. Do you want to play again?" << endl;
            getline(cin, again);

        }

    }while(again == "y");

    return 0;

}