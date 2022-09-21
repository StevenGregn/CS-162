/******************************************************************************
 * Program Filename: Assignment 1
 * Author: Stryder Garrett
 * Date: 04/02/2022
 * Descition: Mortgage Calculator 
 * Input: Home Price, Down Payment, Length of Loan, Annual Interest Rate
 * Outup: Estmiated Mothly Payment, Total Paid, Pirncipal Paid, Interest Paid
 * ****************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    cout << fixed;

    //Determine User's Inputs
    cout << "Hello and welcome to the mortgage calculator!\n";
    cout << "Enter the home price, in dollars:";
        double hp;
        cin >> hp;
    cout << "Enter the down payment, in dollars:";
        double P;
        cin >> P;
    cout << "Enter the length of the loan, in years:";
        double n;
        cin >> n;
        n = n * 12;   
    cout << "Enter the Annual Interest Rate, in percentage:";
        double i;
        cin >> i;
        i = (i / 100) / 12;
    
    // Calculate Information Based on Inputs
    double principal = hp - P;
    double m = ((principal) * (i * pow(1 + i, n)) / (pow(1 + i, n) - 1));
    double total = n * m; 
    double interest = total - principal;

    // Display Outputs Based on Calcualtions
    cout << "Your estimated monthly payment is: $" << setprecision(2) << m << "\n";
    cout << "Total paid: $" << setprecision(2) << total << "\n";
    cout << "Principal paid: $" << setprecision(2) << principal << "\n";
    cout << "Interest paid: $" << setprecision(2) << interest << "\n";
    cout << "Thank you for using the mortgage calculator\n";
 return 0;
}