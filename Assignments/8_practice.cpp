#include <iostream>
#include <string>
#include <cstdlib>
void string_to_int(string num, int& value);
using namespace std;

int main()
{
    string num = "-123";
    int value = 0;
    string_to_int("-123", value);

}

void string_to_int(string num, int& value){
    for (int i=0; i < num.length(); i++)
    {
        int convert = num[i];
        value = value * 10 + (convert - 48);

    }
    cout << "The integer is: " << value << endl;
}