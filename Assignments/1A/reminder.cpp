#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cmath>


using namespace std;
void change(int round[])
{
    
    for(int i; i < 3; i++)
    round[i] = -1;

}
main()
{

    int round[] = {3,3,3};
    // for(int i; i < 3; i++)
    // cout << round[i] << endl;
    cout << round[0];

    change(round);

    for(int i; i < 3; i++)
    cout << round[i] << endl;


}