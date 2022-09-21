#ifndef HELPER_FUNCTIONS_H
#define HELPER_FUNCTIONS_H
#include <iostream>
#include <string>
using namespace std;

bool check_range(int, int, int);
int  equality_test(int, int);
bool is_int(string);
bool is_float(string);
void string_to_int(string, int&);
void swap(int&, int&);
int word_count(string);

#endif