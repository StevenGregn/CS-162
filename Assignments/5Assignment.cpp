/******************************************************************************
 * Program Filename: 5Assignment
 * Author: Stryder Garrett
 * Date: 05/08/2022
 * Description: Resume Builder
 * Input: User pre-made .txt file, work experience, basic information, skills, educational information
 * Outup: Resume
 * ****************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <cctype>
#include "5Assignment_Functions.h"
using namespace std;

/*Allowed built in functons: atoi(), atof(), isdigit(), itoa(), 
and functions under <string>, and 
<cstring> library*/

int main()
{
    // Due to the error handling and how I built the program that is the reason that the program is over 20.
    ifstream fin;
    ofstream fout;
    Basics user;
    int num = 0;
    int num_s = 0;
    string file_name = "";
    do
    {

        cout << "Enter file name, including .txt for Resume Conversion" << endl;
        cin >> file_name;

    }while(!check_file(file_name, fin));
    get_basics(user, fin);
    if(!get_job_count(fin, num))
    {

        cout << "Error gathering number of years worked. Fix file and try again." << endl;
        return 1;

    }
    Exp experi[num];
    get_exp(experi, num, fin);
    if(!(get_skill_count(fin, num_s)))
    {

        cout << "Error gathering number of years worked. Fix file and try again." << endl;
        return 1;

    }
    string skills[num_s];
    get_skills(skills, num_s, fin);
    fin.close();
    if(!open_fout(fout, user))
    {

        cout << "Program Failure. Try Again" << endl;
        return 1;

    }
    
    build_resume(fout, user, experi, num, skills, num_s); 
    fout.close();

    return 0;
     
}
