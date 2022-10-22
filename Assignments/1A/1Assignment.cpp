/******************************************************************************
 * Program Filename: 1Assignment
 * Author: Stryder Garrett
 * Date: 10/09/2022
 * Description: Go Bowling
 * Input: Number of Players, Player Name, Roll
 * Outup: Frame Scores, Total Score, Frame Number, Score Card
 * ****************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include "Assignment_Functions1.h"
using namespace std;

int main()
{
    string again;
    do{
        
        // make dynamic arrays
        int p_count;
        int **p_score;
        int **p_total_score;
        int **s_s_o;
        string *p_amount;
        int round_10[3] = {-1, -1, -1};
        // get name and number of players from user
        p_count = intro_phase();
        cin.ignore();

        // using that information make some dynamic arrays
        make_d_array(p_score, p_total_score, p_amount, p_count, s_s_o);
        score_time(p_score,p_total_score, p_amount, p_count, s_s_o, round_10);
        // // Print Player Totlals
        cout << "Player totals" << endl;
        the_final_dance(p_amount, p_count, p_score, p_total_score, s_s_o, round_10);
        // cout << endl;

        // Erase Dyanmic Memory and Ask if they want to play agian (need to fix)
        erase_mem(p_score, p_total_score, p_amount, p_count, s_s_o); 
        again = play_again();
        
    }while(again == "yes" || again == "y" || again == "Y");

}