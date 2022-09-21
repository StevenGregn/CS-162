// C++ program to find GCD of two numbers
#include <iostream>
#include <string>
using namespace std;


// Driver program to test above function
int main()
{
	string test = "Stryder";
	int n = test.length();
    char check[n+1];
    strcpy(check, test.c_str());
	for(int i = 0; i < strlen(check); i++)
    {

        if(check[0] == ' ')
        continue;

        cout << check[0] << endl;

        if(isupper(check[0]) == false)
        {

            cout << "false" << endl;
            

        }
        cout << "true" << endl;

        if(isupper(check[i]))
        cout << "false" << endl;
            
    }
    cout << "true" << endl;
}
