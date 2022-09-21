#ifndef HELPER_FUNCTIONS_H
#define HELPER_FUNCTIONS_H
#include <iostream>
#include <string>
using namespace std;

void get_basics(struct Basics &user, ifstream &fin);
bool check_name(struct Basics &user, ifstream &fin);
bool check_file(string file_name, ifstream &fin);
bool is_word(string &input);
bool correct_upper(string &input);
bool check_header(string &input);
bool check_email(struct Basics &user ,ifstream &fin);
void get_email(struct Basics &user, string &input);
bool check_university(struct Basics &user, ifstream &fin);
bool check_grad_date(struct Basics &user, ifstream &fin);
bool is_int(string &num);
bool get_major(struct Basics &user, ifstream &fin);
bool is_float(string &num);
bool get_gpa(struct Basics &user, ifstream &fin);
bool get_job_count(ifstream &fin, int &num);
void get_skills(string sk[], int sk_size, ifstream &fin);
void get_exp(struct Exp ex[], int ex_size, ifstream &fin);
bool get_skill_count(ifstream &fin, int &num);
void build_resume(ofstream& f, Basics b, Exp ex[], int ex_size, string sk[], int sk_size);
bool open_fout(ofstream &fout, struct Basics &user);
void make_intro(ofstream& f, Basics &b);
void make_statement_of_intent(ofstream& f);
void make_education(ofstream& f, Basics b);
void make_experience(ofstream& f, Exp ex[], int ex_size);
void make_skills(ofstream& f, string sk[], int sk_size);
// struct for educational background
struct Edu
{

    char univ[128];
    char major[64];
    int graduate_year;
    float GPA;

};

// struct for basic information
struct Basics
{

    char fname[64];
    char lname[64];
    char email[64];
    Edu edu;

};

// struct for work experience
struct Exp
{

    char company[64];
    char start_date[64];
    char end_date[64];
    char des[1024];

};

#endif