#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <cctype>
#include "5Assignment_Functions.h"
using namespace std;

Basics user;

/******************************************************************************
 * Function: open_fout
 * Description: Ensure that f_out can open
 * Parameters: string file_name, ofstream &fout, struct Basics &user
 * Pre-Conditions: string for file name must
 * Post-Conditions: skills from ifstream will be stored in Exp struct array
 * ****************************************************************************/
bool open_fout(ofstream &fout, struct Basics &user)
{
    char full_fout[64];
    char l_name[68] = ".txt";
    strcpy(full_fout, user.lname);
    strcat(full_fout, l_name);
    fout.open(full_fout, ios::trunc);

    // if file doesn't exist
    if(!fout.is_open())
    {

        cout << "Error Opening File" << endl;
        return false;

    }
    else
    return true;

}
/******************************************************************************
 * Function: build_resume
 * Description: Builds resume after taking in all the data
 * Parameters: ofstream& f, Basics b, Exp ex[], int ex_size, string sk[], int sk_size
 * Pre-Conditions: ofstream must be open, Basic b must exsist, Exp ex[] must exsist, there must be two int (ex_size and sk_size), and string sk[]
 * Post-Conditions: Resume will outputted as .txt - be sure to cat in terminal for full experience!
 * ****************************************************************************/
void build_resume(ofstream& f, Basics b, Exp ex[], int ex_size, string sk[], int sk_size)
{
    f << "\n" << endl;
    make_intro(f, b);
    make_statement_of_intent(f);
    make_education(f, b);
    make_experience(f, ex, ex_size);
    make_skills(f, sk, sk_size);

}

void make_skills(ofstream& f, string sk[], int sk_size)
{

    f << "\n" << "\e[1m" << "\e[4m" << "Skills" << "\e[22m" << "\e[24m" << "\n" << endl;
    for(int i=0; i < sk_size; i++)
    {

        f << sk[i] << " ";

    }
    f << "\n";

}

void make_experience(ofstream& f, Exp ex[], int ex_size)
{

    f << "\n" << "\e[1m" << "\e[4m" << "Experience" << "\e[22m" << "\e[24m" << "\n" << endl;
    for(int i=0; i < ex_size; i++)
    {

        f << "Company:" << "\e[1m" << "\e[3m" << ex[i].company << "\e[22m" << "\e[23m" << endl;
        f << "\e[3m" << ex[i].start_date << " to " <<  ex[i].end_date << "\e[23m" << endl;
        f << " - " << ex[i].des << "\n" << endl;

    }

}
/******************************************************************************
 * Function: make_education
 * Description: Builds resume after taking in all the data
 * Parameters: ofstream& f, Basics b
 * Pre-Conditions: ofstream must be open, Basic b must exsist
 * Post-Conditions: Education information will be outputted of ofstream f
 * ****************************************************************************/
void make_education(ofstream& f, Basics b)
{

    f << "\n" << "\e[1m" << "\e[4m" << "Education" << "\e[22m" << "\e[24m" << "\n" << endl;
    f << "Major:" << "\e[1m" << "\e[3m" <<  b.edu.major << " " << b.edu.graduate_year << "\e[22m" << "\e[23m" << endl;
    f << "University:" << b.edu.univ << " GPA: " << b.edu.GPA << endl;

}
/******************************************************************************
 * Function: make_statement_of_intent
 * Description: Builds resume after taking in all the data
 * Parameters: ofstream& f
 * Pre-Conditions: ofstream must be open
 * Post-Conditions: Inputs statement of intent into ofstream f
 * ****************************************************************************/
void make_statement_of_intent(ofstream& f)
{

    f << "\n" << "\n" << "\e[4m" << "\e[1m" << "Statement of Intent" << "\e[22m" << "\e[24m" << "\n" << endl;
    f << "High achieving, goal-oriented individual searching for an internship position. I am" << endl; 
    f << "aiming to expand my knowledge in the field in hopes to make improvements to the" << endl;
    f << "business' profits. I am confident in my ability to adapt and overcome any" << endl;
    f << "challenge that I may face in the field and believe that I am more than capable " << endl;
    f << "of filling any gaps that may exist." << endl;

}
/******************************************************************************
 * Function: make_intro
 * Description: Make Intro of Resume
 * Parameters: ofstream& f, Basics &b
 * Pre-Conditions: ofstream must be open, Basic b must exsist
 * Post-Conditions: Passes intro to build_resume function
 * ****************************************************************************/
void make_intro(ofstream& f, Basics &b)
{

    char esc_char = 27;
    f << "\e[1m" << b.fname << endl;
    f << b.lname << "\e[0m" << "\n" << endl;
    f << b.email << endl;

}

/******************************************************************************
 * Function: get_skill_count
 * Description: Get number of skills for user
 * Parameters: ifstream &fin, int &num
 * Pre-Conditions: struct Exp must exsist, some int must exsist, and ifstream must be open
 * Post-Conditions: skills from ifstream will be stored in Exp struct array
 * ****************************************************************************/
bool get_skill_count(ifstream &fin, int &num)
{

    string x,y;
    fin >> x;
    fin >> y;
    // confirm correct header
    if(check_header(x))
    {

        if(is_int(y))
        {

            num = atoi(y.c_str());
            num = num + (num - 1);
            return true;

        }
        else
        {

            cout << "Enter a number for amount of skills." << endl;
            return false;

        }
        


    }
    else
    {

        cout << "Error for skill amount header." << endl;
        return false;

    }

}

/******************************************************************************
 * Function: get_skills
 * Description: Gets skills from user
 * Parameters: string sk[], int sk_size, ifstream &fin
 * Pre-Conditions: struct Exp must exsist, some int must exsist, and ifstream must be open
 * Post-Conditions: skills from ifstream will be stored in Exp struct array
 * ****************************************************************************/
void get_skills(string sk[], int sk_size, ifstream &fin)
{

    string x,y;
    fin >> x;
    if(check_header(x))
    {

        for(int i = 0; i < sk_size; i++)
        {

            fin >> y;
            if(is_word(y))
            sk[i] = y;    
            else
            {

                cout << "Enter a word for skills" << endl;
                exit(0);

            }

        }

    }
    else
    {

        cout << "Error with skills header." << endl;
        exit(0);

    }
    

}

/******************************************************************************
 * Function: get_exp
 * Description: Gets experience
 * Parameters: struct Exp ex[], int ex_size, ifstream &fin
 * Pre-Conditions: struct Exp must exsist, some int must exsist, and ifstream must be open
 * Post-Conditions: experience from ifstream will be stored in Exp struct array
 * ****************************************************************************/
void get_exp(struct Exp ex[], int ex_size, ifstream &fin)
{

    string a, b, c, d, e, f, g, h, p, j, start_date, end_date;
    for(int i=0; i < ex_size; i++)
    {

        // Due to the order I couldn't combine them all into one. That's why it's over 20.
        fin >> a;
        getline(fin, b);
        fin >> c >> d >> e >> f >> g >> h >> p;
        getline(fin, j);
        
        if(check_header(a) && check_header(c) && check_header(f) && check_header(p))
        {
            strcpy(ex[i].company, b.c_str());
            if(correct_upper(d))
            {

                start_date = d + " " + e;
                strcpy(ex[i].start_date, start_date.c_str());
                if(correct_upper(g))
                {

                    end_date = g + " " + h;
                    strcpy(ex[i].end_date, end_date.c_str());
                    strcpy(ex[i].des, j.c_str());

                }
                else
                {

                    cout << "Error with end date." << endl;
                    exit(0);

                }

            }
            else
            {

                cout << "Error with start date." << endl;
                exit(0);

            }

        }
        else
        {

            cout << "Error with experience headers" << endl;
            exit(0);

        } 
        
    }

}

/******************************************************************************
 * Function: get_job_count
 * Description: Gets amount of jobs worked
 * Parameters: ifstream &fin, int &num
 * Pre-Conditions: ifstream must be open and some int must exsist
 * Post-Conditions: job count will be stored in num from ifstream information or will not (true or false)
 * ****************************************************************************/
bool get_job_count(ifstream &fin, int &num)
{

    string x,y;
    fin >> x;
    fin >> y;
    // confirm correct header
    if(check_header(x))
    {

        if(is_int(y))
        {

            num = atoi(y.c_str());
            return true;

        }
        else
        {

            cout << "Enter a number for amount of years worked." << endl;
            return false;

        }
        


    }
    else
    {

        cout << "Error for job amount header." << endl;
        return false;

    }

}

/******************************************************************************
 * Function: get_basics
 * Description: Gets datd for basic information
 * Parameters: struct Basics &user, ifstream &fin
 * Pre-Conditions: 
 * Post-Conditions: struct Basics must exist and declared elsewhere, file must be open
 * ****************************************************************************/
void get_basics(struct Basics &user, ifstream &fin)
{

    if(!(check_name(user, fin)))
    {

        cout << "Error gathering name information. Fix file and try again." << endl;
        exit(0);

    }

    if(!(check_email(user, fin)))
    {

        // check email and error messages
        cout << "Error gathering email information. Fix the file and try again." << endl;
        exit(0);

    }

    if(!(check_university(user, fin)))
    {

        // check university and error messages
        cout << "Error gathering university information. Fix the file and try again." << endl;
        exit(0);

    }

    if(!(get_major(user, fin)))
    {

        // check major and error messages
        cout << "Error gathering major information. Fix the file and try again." << endl;
        exit(0);

    }

    if(!(check_grad_date(user, fin)))
    {

        // check graduate date
        cout << "Error gathering graduate date information. Fix the file and try agian." << endl;
        exit(0);

    }

    // Justification: I needed to put this to take in the GPA information
    if(!(get_gpa(user, fin)))
    {

        // check GPA informatin
        cout << "Error gathering GPA information. Fix file and try again" << endl;
        exit(0);

    }
   
}

bool check_name(struct Basics &user, ifstream &fin)
{

    string x, y, z, w;
    fin >> x >> y >> z;
    // check if header is correct as well as the name is correct
    if(check_header(x) && (is_word(y) && correct_upper(y)) && (is_word(z) && correct_upper(z)))
    {

        // input values into struct values
        strcpy(user.fname, y.c_str());
        strcpy(user.lname, z.c_str());
        return true;

    }
    else
    {

        // check header
        cout << "Error with Name." << endl;
        exit(0);

    }

}

/******************************************************************************
 * Function: check_email
 * Description: Checks if email is good an inputs email if so
 * Parameters: struct Basics &user, ifstream &fin
 * Pre-Conditions: struct must exist and file must be open
 * Post-Conditions: email will either be stored (true) or program will prompt error and tell to try again (false)
 * ****************************************************************************/
bool check_email(struct Basics &user, ifstream &fin)
{

    string x,y;
    fin >> x;
    fin >> y;
    int minus = y.length() - 4;
    string com = y.substr(minus, y.length());
    
    // check if email header is correct
    if(check_header(x))
    {

        // create @ counter
        int at_count = 0;
        for(int i = 0; i < y.length(); i++)
        {

            // @ can't be at beginning of email
            if(y[0] == '@')
            return false;

            // if @ increase count
            if(y[i] == '@')
            at_count++;

        }
        // must be one
        if(at_count > 1 || at_count < 1)
        {

            cout << "Email must have exactly one @" << endl;
            return false;

        }
        // check if email has proper ending
        if(com != ".com" && com != ".edu")
        {

            cout << "Please have email that ends with .com or.edu" << endl;
            return false;

        }

        // input email value and return true
        strcpy(user.email, y.c_str());
        return true;

    }
    else
    {

        // will fail if header isn't right
        cout << "Error with email header." << endl;
        return false;

    }

}

/******************************************************************************
 * Function: check_university
 * Description: Checks if university information is correct
 * Parameters: struct Basics &user, ifstream &fin
 * Pre-Conditions: struct must exist and file must be open
 * Post-Conditions: university will either be stored (true) or program will prompt error and tell to try again (false)
 * ****************************************************************************/
bool check_university(struct Basics &user, ifstream &fin)
{

    // get info from file
    string x, y;
    string z[5] = {"University", "College", "Institue", "Academy", "State"};
    fin >> x;
    getline(fin, y);
    if(check_header(x))
    {
        for(int i = 0; i < 5; i++)
        {
            // ensure that common words are in university name
            size_t common_words = y.find(z[i]);
            if(common_words != string::npos)
            {

                if(is_word(y))
                {

                    strcpy(user.edu.univ, y.c_str());
                    return true;

                }
                else
                {

                    cout << "Enter a word without numbers for university ." << endl;
                    return false;

                }
                

            }

        }
        return false;
       

    }
    else
    {

        // Return with Error to point user in direction of problem.
        cout << "Error with University Header" << endl;
        return false;

    }

}

/******************************************************************************
 * Function: get_major
 * Description: Checks if major information is correct
 * Parameters: struct Basics &user, ifstream &fin
 * Pre-Conditions: struct must exist and file must be open
 * Post-Conditions: major will either be stored (true) or program will prompt error and tell to try again (false)
 * ****************************************************************************/
bool get_major(struct Basics &user, ifstream &fin)
{

    string x, y;
    fin >> x;
    getline(fin, y);
    if(check_header(x))
    {

        if(is_word(y))
        {

            strcpy(user.edu.major, y.c_str());
            return true;

        }
        else
        {

            cout << "Enter a word without numbers for major ." << endl;
            return false;

        }


    }
    else
    {

        cout << "Error with major header." << endl;
        return false;

    }


}

/******************************************************************************
 * Function: check_grad_date
 * Description: Checks if graduate date information is correct
 * Parameters: struct Basics &user, ifstream &fin
 * Pre-Conditions: struct must exist and file must be open
 * Post-Conditions: graduate date will either be stored (true) or program will prompt error and tell to try again (false)
 * ****************************************************************************/
bool check_grad_date(struct Basics &user, ifstream &fin)
{

    string x;
    int z;
    getline(fin, x);
    string header = x.substr(0, 14);
    string number = x.substr(15,19);
    if(check_header(header))
    {
    
        if(is_int(number))
        {

            int z = atoi(number.c_str());
            user.edu.graduate_year = z;
            return true;

        }
        else
        {

            cout << "Enter a number for graduate year." << endl;
            return false;

        } 

    }
    else
    {

        cout << "Error with graduate date header." << endl;
        return false;

    }

}

/******************************************************************************
 * Function: get_gpa
 * Description: Checks if gpa information is correct
 * Parameters: struct Basics &user, ifstream &fin
 * Pre-Conditions: struct must exist and file must be open
 * Post-Conditions: gpa will either be stored (true) or program will prompt error and tell to try again (false)
 * ****************************************************************************/
bool get_gpa(struct Basics &user, ifstream &fin)
{

    string x, y;
    fin >> x;
    getline(fin, y);
    string number = y.substr(1,4);
    if(check_header(x))
    {

        if(is_float(number))
        {

            float num_float = atof(number.c_str());
            user.edu.GPA = num_float;
            return true;

        }
        else
        {

            cout << "Enter a float value for GPA" << endl;
            return false;

        }

    }
    else
    {

        cout << "Error with GPA header." << endl;

    }

}

/******************************************************************************
 * Function: check_file
 * Description: Checks if file is present in the directory
 * Parameters: string file_name, ifstream &fin
 * Pre-Conditions: Thing exists somewhere else in program and is string, file must be open
 * Post-Conditions: File will or will not exist (Return true or false depending)
 * ****************************************************************************/
bool check_file(string file_name, ifstream &fin)
{

    // try to open file
    fin.open(file_name.c_str());
    
    // if file doesn't exist
    if(!fin.is_open())
    {

        cout << "Error Opening File. Ensure Correct Spelling and that File is in Current Directory" << endl;
        return false;

    }
    else
    return true;

}

/******************************************************************************
 * Function: check_header
 * Description: Checks if first line is header
 * Parameters: string &input
 * Pre-Conditions: Thing exists somewhere else in program and is string
 * Post-Conditions: String will be header (True of False)
 * ****************************************************************************/
bool check_header(string &input)
{

    // make array of headers
    string headers[13] = {"Name:", "Email:", "University:", "Major:", "Graduate Year:", "GPA:", "Company:", "Start_Date:", "End_Date:", "Skills:", "Number_of_Jobs:", "Description:", "Number_of_Skills:"}; 
    for(int i = 0; i < 13; i++)
    {

        // ensure that proper headers are used
        if(input == headers[i])
        return true;

    }
    cout << "Check headers for correct spelling." << endl;
    return false;

}

/******************************************************************************
 * Function: is_word
 * Description: Checks if string is word (no #'s)
 * Parameters: string &input
 * Pre-Conditions: string from file
 * Post-Conditions: String will or will not be word (True of False)
 * ****************************************************************************/
bool is_word(string &input)
{

    // check if word doesn't have #'s
    for(int i = 0; i < input.length(); i ++)
    {

        if(std::string::npos != input.find_first_of("0123456789")) 
        return false;

        if(input[i] == ' ')
        continue;


    }
    return true;

}

/******************************************************************************
 * Function: get_upper
 * Description: Determines if first letter of word is uppecase
 * Parameters: string &input
 * Pre-Conditions: string value must exist in file
 * Post-Conditions: Determines if string is uppercase properly (True or False)
 * ****************************************************************************/
bool correct_upper(string &input)
{
    // Checks that the first letter is uppercase
    int n = input.length();
    char check[n+1];
    strcpy(check, input.c_str());
    for(int i = 0; i < strlen(check); i++)
    {
    
        if(i == 0 && isupper(check[i]))
        continue;
        else if(i == 0 && (!isupper(check[i])))
        return false;

        if(isupper(check[i]))
        return false;


    }
    return true;
    
}

/*******************************************************************
** Function: is_int()
** Description: Indicates if the string num is an integer
** Parameters: string num
** Pre-conditions: takes string value
** Post-conditions: return true if num is integer and fale if not
*******************************************************************/
bool is_int(string &num){
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
bool is_float(string &num)
{

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

