#ifndef HELPER_FUNCTIONS2_H
#define HELPER_FUNCTIONS2_H
#include <iostream>
#include <string>
using namespace std;


bool check_range(int, int, int);
int  equality_test(int, int);
bool is_int(string);
bool is_float(string);
int string_to_int(string, int&);
void swap(int&, int&);
int word_count(string);
int gcd(int num1, int num2);
int abs(int num);
bool to_lowest_terms(int &numerator, int &denominator);

#endif