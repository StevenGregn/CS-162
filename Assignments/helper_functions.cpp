#include <iostream>
#include <string>
#include "helper_functions.h"
using namespace std;
/*******************************************************************
** Function: check_range()
** Description: Indicates if the test_value is in specified range (inclusive)
** Parameters: int lower_bound, int upper_bound, int test_value
** Pre-conditions: take three integer values
** Post-conditions: return true if test_value is in range and false if not
*******************************************************************/
bool check_range(int lower_bound, int upper_bound, int test_value){
	// Checks if true
	if(test_value >= lower_bound && test_value <= upper_bound)
	{

		return true;

	}
	// if it doesn't clear:
	return false;
}
/*******************************************************************
** Function: equality_test()
** Description: Indicates if two integers are equal 
** Parameters: int num1, int num2
** Pre-conditions: take two integer values
** Post-conditions: returns -1 if num1 < num2, 1 if num1> num2, and 0 if num1 == num2
*******************************************************************/
int  equality_test(int num1, int num2){
	if(num1 < num2)
	{

		return -1;

	}
	else if(num1 > num2)
	{

		return 1;

	}
	// if none of those hold then must be equal
	return 0;
}
/*******************************************************************
** Function: is_int()
** Description: Indicates if the string num is an integer
** Parameters: string num
** Pre-conditions: takes string value
** Post-conditions: return true if num is integer and fale if not
*******************************************************************/
bool is_int(string num){
	for (int i = 0; i < num.length(); i++)
    {
        // check for negatives
		if ((num[i] == '-' && num.length() > 1) && i == 0)
		{

			continue;

		}
        if (num[i] <  '0' || num[i] > '9')
        {
            // Makes it return to main
            return false;

        } 
    }
    // if it doens't stop the string will clear 
    return true;
}
/*******************************************************************
** Function: is_float()
** Description: Indicates if the string num is a float
** Parameters: string num
** Pre-conditions: takes in string num 
** Post-conditions: return true if string num is a float and false if not
*******************************************************************/
bool is_float(string num){

	int dot_count = 0;
	if(num == "-.")
	return false;
	for (int i = 0; i < num.length(); i++)
    {
		
		if(num.length() == 1 && (num[i] == '.' || num[i] == '-'))
		return false;

		
		if(i != 0 && num[i] == '-')
		return false;
		else if((i == 0 && num[i] == '-') && (num[i + 1] != '.' || num[i + 1] != '-'))
		continue;

		if(num[i] == '.')
		{

			dot_count ++;
			continue;

		}
		
		if (num[i] < '0' || num[i] > '9')
		return false;
 
    }
    // checks the dot count for more than one 
	if (dot_count > 1)
	return false;
	// if nothing stops it will clear true
	return true;
}
/*******************************************************************
** Function: string_to_int()
** Description: converts a string value to an integer (negatives as well)
** Parameters: string num, int& value
** Pre-conditions: takes a string num and int& value 
** Post-conditions: prints out string as an integer
*******************************************************************/
void string_to_int(string num, int& value){
	value = 0;
	unsigned int sign = 1;
    for (int i=0; i < num.length(); i++)
    {
        if(num[i] == '-')
		{

			sign = -1;  
			continue;

		}
		int convert = num[i];
        value = value * 10 + (convert - 48);
		

    }
	if (sign != 1)
	{

		value = value * -1;

	}
    cout << "The integer is: " << value << endl;
}
/*******************************************************************
** Function: swap()
** Description: swaps the value of the two integer inputs
** Parameters: int& num1, int& num2)
** Pre-conditions: take two integer inputs (can change them in the function)
** Post-conditions: saves the new integer amount for eath variable (they are swapped)
*******************************************************************/
void swap(int& num1, int& num2){
	
	int num3, num4;
	num3 = num1;
    num4 = num2;
    num2 = num3;
    num1 = num4;
	return;
}
/*******************************************************************
** Function: word_count()
** Description: determines the amount of words in a string 
** Parameters: string sentence
** Pre-conditions: takes a string value sentence
** Post-conditions: return number of words in the string sentence
*******************************************************************/
int  word_count(string sentence){
	
	int count = 0;
	int num_o_words;
	for(int i = 0; i < sentence.length(); i++)
	{

		if(sentence[i] == ' ')
		{

			count++;

		}

	}
	if(count == 0)
	{

		return 1;

	}
	num_o_words = (sentence.length() / count) - 1;
	return num_o_words;

}