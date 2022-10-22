#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <cctype>
#include "Assignment_Functions1.h"
using namespace std;

const int GAME_SIZE = 22;
const int FINAL_SIZE = 10;

/******************************************************************************
 * Function: rand_r1
 * Description: Prompts the user if they want to play again
 * Parameters: None
 * Pre-Conditions: User must be finished with the game
 * Post-Conditions: User will play again or not
 * ****************************************************************************/
int rand_41(int score)
{
    // subtract max number of rand possible, ten, by the previous score of the player
    int initial = 11;
    initial = initial - score;
    
    srand(time(NULL));

    // roll with new number 
    int outcome = rand() % initial;
    // int outcome = rand() % 1 + 10;
    return outcome;

}

/******************************************************************************
 * Function: play_again
 * Description: Prompts the user if they want to play again
 * Parameters: None
 * Pre-Conditions: User must be finished with the game
 * Post-Conditions: User will play again or not
 * ****************************************************************************/
string play_again()
{

    string again;

    // Ask the user if they want to play again, until they enter one of the required answers
    cout << "Do you want to play again? yes(y), no(n)" << endl;
    cin >> again;
    while (!(again == "Y" || again == "yes" || again == "Yes" || again == "y"||again == "N" || again == "no" || again == "No" || again == "n"))
    {

        cout << "Error. Do you want to play again? yes(y), no(n)" << endl;
        cin >> again;

    } 
    cin.ignore();
    // return the player answer
    return again;


}

/******************************************************************************
 * Function: erase_mem
 * Description: Erases dynamically allocated memory
 * Parameters: int **&w, int **&x, string *&y
 * Pre-Conditions: Two multi-dimensional int arrays, or double int pointers, must exsist, as well as a string pointer
 * Post-Conditions: The dynamically allocated memory will be deleted
 * ****************************************************************************/
void erase_mem(int **&w, int **&x, string *&y, int b, int **&g)
{
    // for the number of players, rows, in the 2D Array, delete each row
    for(int o = 0; o < b; o++)
    {
        delete[] w[o];
        delete[] x[o];
        delete[] g[o];
        
    }

    // delete reamaining heap data 
    delete[] y;
    delete[] w;
    delete[] x;
    delete[] g;
    

    // set pointers to null
    w = NULL;
    x = NULL;
    y = NULL;
    g = NULL;
}

/******************************************************************************
 * Function: top_part
 * Description: Prints out the top part of the scorecard
 * Parameters: string *&x
 * Pre-Conditions: One 2d multi-dimensional string array must exsist
 * Post-Conditions: The top part of the scorecard will be printed
 * ****************************************************************************/
void top_part(string *&x)
{
    
    int r_count[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0};
    cout << endl;

    // make a space counter and print "Name"
    int s_count = 0;
    cout << x[0];

    // print number 1 then print other numbers
    int num = 1;
    int s_1 = 5;
    spaces(s_1);
    cout << r_count[0] << " |";
    top_part2(s_count, r_count, num);

    cout << "Total|" << endl;
    cout << "--------------------------------------------------------" << endl;

}

/******************************************************************************
 * Function: top_part2
 * Description: Prints out the top part of the scorecard
 * Parameters: int s_count, int r_count[], int num
 * Pre-Conditions: two ints and one int array must exsist outside of the function
 * Post-Conditions: The top part of the scorecard will be printed
 * ****************************************************************************/
void top_part2(int s_count, int r_count[], int num)
{
    for(int i = 0; i < 25; i++)
    {
        // once there are a total of three spaces print out r_count starting at r_count[1]
        if(s_count == 1)
        {

            if(r_count[num] == 10)
            {

                cout << r_count[num] << "  |";
                break;

            }
            cout << r_count[num] << " |";
            num ++;
            s_count = 0;

        }        
            
        cout << " ";
        s_count ++;
    }
}

// /******************************************************************************
//  * Function: the_final_dance
//  * Description: Prints out the entire scorecard
//  * Parameters: string *&x, int y, int **&z, int **&w,int **&g, int round_10[]
//  * Pre-Conditions: One string pointer, two multidimensional int arrays, one int, and one in array must exsist
//  * Post-Conditions: the entire scorecard will be printed
//  * ****************************************************************************/
void the_final_dance(string *&x, int y, int **&z, int **&w, int **&g, int round_10[])
{
    // Prints top and bottom of the scorecard
    top_part(x);
    total_bottom_print(x, y, z, w, g, round_10);
}

/******************************************************************************
 * Function: total_bottom_print
 * Description: Prints the remainder of the scorecard 
 * Parameters: string *&x, int y, int **&z, int **&w
 * Pre-Conditions: Three multi-dimensional int arrays, or double int pointers, a string pointer, and an int must exsist
 * Post-Conditions: The remainder of the scorecard will be printed 
 * ****************************************************************************/
void total_bottom_print(string *&x, int y, int **&z, int **&w, int **&s_s_o, int round_10[])
{
    // since i starts at 1, run a for loop for +1 of the player to print all the player info
    int s = 2;
    int count = 0;
    int p_counter = 0;
    int temp_score;
    for(int i = 1; i < y + 1; i++)
    {
        // Gather Round 1-10 Data
        round1_9(x, y, z, w, s_s_o, round_10, p_counter);
        round_ten(x, y, z, w, s_s_o, round_10, p_counter);
        
        // Print Player Name
        cout << x[i]  << " ";
        // Print Player Data
        score_print(x, y, z, w, s_s_o, round_10, p_counter, count);
        
        // Go to newline, print scores, go to next player
        cout << endl;
        total_scores(x, y, z, w, p_counter, s_s_o);
        p_counter++;
    }     
}

/******************************************************************************
 * Function: round1_9
 * Description: Store player scores for frames 1-9
 * Parameters: string *&x, int y, int **&z, int **&w, int **&s_s_o, int round_10[], int p_counter
 * Pre-Conditions: Three multi-dimensional int arrays, a string pointer, two ints, and an int array must exsist
 * Post-Conditions: The scoring data for frames 1-9 for all players will be stored
 * ****************************************************************************/
void round1_9(string *&x, int y, int **&z, int **&w, int **&s_s_o, int round_10[], int p_counter)
{
    for(int v = 0; v < 9; v++)
    {
        // Rounds 1-9 
        if(s_s_o[p_counter][v] == 0 && v <= 9)
        gutter_ball(z, w, p_counter, v);   
        else if(s_s_o[p_counter][v] == 1 && v <= 9)
        {
            if(spare(z, w, p_counter, v, round_10, s_s_o) == 1)
            continue;

        }   
        else if(s_s_o[p_counter][v] == 2 && v <= 9)
        {
            if(strike(z, w, p_counter, v, round_10, s_s_o) == 1)
            continue;
        }
    }
}

/******************************************************************************
 * Function: gutter_ball
 * Description: Determines what to do with gutterball
 * Parameters: int **&z, int **&w, int p_counter, int v
 * Pre-Conditions: Two multi-dimensional int arrays, or double int pointers, and two ints must exsist
 * Post-Conditions: The code will have determined if there was a gutterball and what to do with it
 * ****************************************************************************/
void gutter_ball(int **&z, int **&w, int p_counter, int v)
{
    //special conditinal for first roll    
    if(v == 0)
    {
        w[p_counter][v] = z[p_counter][v*2] + z[p_counter][(v*2)+1];
        z[p_counter][21] = w[p_counter][v];
    }
    // else store gutterball accordingly
    else
    {
        w[p_counter][v] = z[p_counter][v*2] + z[p_counter][(v*2)+1] + w[p_counter][v -1];
        z[p_counter][21] = w[p_counter][v];
    }
    
}

/******************************************************************************
 * Function: spare
 * Description: Determines what to do with spare
 * Parameters: int **&z, int **&w, int p_counter, int v, int round_10[], int **&s_s_o
 * Pre-Conditions: Three multi-dimensional int arrays, or double int pointers, two ints, and an int array must exsist
 * Post-Conditions: The code will have determined if there was a spare and what to do with it
 * ****************************************************************************/
int spare(int **&z, int **&w, int p_counter, int v, int round_10[], int **&s_s_o)
{
    // Justification: Needed to use special logic to help frame 10 kinda work(the v==8 stuff) - without that it is just short enough

    // special conditionals to have hopefully have proper total when entering frame 10 with a spare in frame 9
    if(v == 8 && round_10[0] != -1)
    {
        if(round_10[0] == 0)
        w[p_counter][v] = w[p_counter][7] + z[p_counter][18];
        else if(round_10[0] == 2)
        w[p_counter][v] = w[p_counter][7] + 20;

    }
    // if next roll is -1
    else if(z[p_counter][(v+1)*2] == -1)
    return 1;
    // if next roll a strike
    else if(s_s_o[p_counter][v+1] == 2)
    {
        if(v == 0)
        {
            w[p_counter][v] = 20;
            z[p_counter][21] = w[p_counter][v];
        }
        else
        {
            w[p_counter][v] = w[p_counter][v-1] + 20;
            z[p_counter][21] = w[p_counter][v];
        }
                    
    }
    // if next roll open 
    else
    {
        if(v == 0)
        {
            w[p_counter][v] = 10 + z[p_counter][(v+1)*2];
            z[p_counter][21] = w[p_counter][v];
        }
        else
        {
            w[p_counter][v] = w[p_counter][v-1] + 10 + z[p_counter][(v+1)*2];
            z[p_counter][21] = w[p_counter][v];
        }
    }
}

/******************************************************************************
 * Function: strike
 * Description: Prints the remainder of the scorecard 
 * Parameters: int **&z, int **&w, int p_counter, int v, int round_10[], int **&s_s_o
 * Pre-Conditions: Three multi-dimensional int arrays, or double int pointers, two ints, and an int array must exsist
 * Post-Conditions: The remainder of the scorecard will be printed 
 * ****************************************************************************/
int strike(int **&z, int **&w, int p_counter, int v, int round_10[], int **&s_s_o)
{

    // Justification: Needed to use special logic to help frame 10 kinda work(the v==8 stuff) - without that it is just short enough

    // special conditionals to have hopefully have proper total when entering frame 10 with a strike in frame 9
    if(v == 8 && round_10[1] != -1)
    {
        if(round_10[1] == 0)
        w[p_counter][v] = z[p_counter][19] + z[p_counter][18] + 10 + w[p_counter][7];
        else if(round_10[1] == 2)
        w[p_counter][v] = w[p_counter][7];
    }
    // is next two rolls are -1
    if(z[p_counter][((v+1)*2) + 1] == -1 && s_s_o[p_counter][v+1] != 2)
    return 1;
    // if next frame roll is a strike
    if(s_s_o[p_counter][v+1] == 2)
    {
        // makes it store once there are two strikes or open frame
        if(s_s_o[p_counter][v+2] == 2)
        {
            w[p_counter][v] = w[p_counter][v-1] + 30;
            z[p_counter][21] = w[p_counter][v];
        }
        else if(z[p_counter][((v+2)*2) + 1] != -1)
        {
            w[p_counter][v] = w[p_counter][v-1] + z[p_counter][((v+2)*2) + 1] + 20;
            z[p_counter][21] = w[p_counter][v];
        }
        else
        return 1;  
    }
    else
    {
        // special conditonal for frame 0
        if(v == 0)
        {
            w[p_counter][v] = 10 + (z[p_counter][(v+1)*2] + z[p_counter][((v+1)*2)+1]);
            z[p_counter][21] = w[p_counter][v];
        }
        // standard storing for the next frame being open
        else
        {
            w[p_counter][v] = 10 + (z[p_counter][(v+1)*2] + z[p_counter][((v+1)*2)+1]) + w[p_counter][v - 1];
            z[p_counter][21] = w[p_counter][v];
        }
    }
}

/******************************************************************************
 * Function: round_ten
 * Description: Stores data for round 10(broken)
 * Parameters: string *&x, int y, int **&z, int **&w, int **&s_s_o, int round_10[], int p_counter
 * Pre-Conditions: Three multi-dimensional int arrays, or double int pointers, a string pointer, and an int must exsist
 * Post-Conditions: Data will be gathered on round 10 scores
 * ****************************************************************************/
void round_ten(string *&x, int y, int **&z, int **&w, int **&s_s_o, int round_10[], int p_counter)
{
    // Justification: I am one line over due to needing to use speical conditionals to get the continue and breaks to work

    // Round 10
    for(int v = 0; v < 3; v++)
    {
                
        if(round_10[v] == 0)
        {
            if(ten_gutterball(z, w, s_s_o, round_10, p_counter) == 1)
            continue;
            else if(ten_gutterball(z, w, s_s_o, round_10, p_counter) == 2)
            break;
        }
        else if(round_10[v] == 1)
        {
            if(ten_spare(z, w, s_s_o, round_10, p_counter, v) == 1)
            continue;
            else if(ten_spare(z, w, s_s_o, round_10, p_counter, v) == 2)
            break;
        }
        else if(round_10[v] == 2)
        {
            if(ten_strike(z, w, s_s_o, round_10, p_counter, v) == 1)
            continue;
            else if(ten_strike(z, w, s_s_o, round_10, p_counter, v) == 2)
            break;
        }
    }
}

/******************************************************************************
 * Function: ten_gutterball
 * Description: Determine what to do if player got a gutterball
 * Parameters: int **&z, int **&w, int **&s_s_o, int round_10[], int p_counter
 * Pre-Conditions: Three multi-dimensional int arrays, or double int pointers, an int array, and an int must exsist
 * Post-Conditions: Data will be changed depneding on gutterball conditionals
 * ****************************************************************************/
int ten_gutterball(int **&z, int **&w, int **&s_s_o, int round_10[], int p_counter)
{

    // if frame ten is open then take the sum otherwise continue onward
    if(s_s_o[p_counter][19] == 0)
    {
        w[p_counter][9] = z[p_counter][9*2] + z[p_counter][(9*2)+1] + w[p_counter][7] + z[p_counter][8*2] + z[p_counter][(8*2)+1] ;
        z[p_counter][21] = w[p_counter][9];
        return 2;
    }
    return 1;
}

/******************************************************************************
 * Function: ten_spare
 * Description: Determine what to do if player got a spare
 * Parameters: int **&z, int **&w, int **&s_s_o, int round_10[], int p_counter, int v
 * Pre-Conditions: Three multi-dimensional int arrays, or double int pointers, an int array, and two ints must exsist
 * Post-Conditions: Data will be changed depneding on spare conditionals
 * ****************************************************************************/
int ten_spare(int **&z, int **&w, int **&s_s_o, int round_10[], int p_counter, int v)
{
    // if the next roll is a strike
    if(round_10[v + 1] == 2)
    {

        w[p_counter][9] = 20 + w[p_counter][7];
        z[p_counter][21] = w[p_counter][9];
        return 2;

    }
    // if next roll is open
    else if(round_10[v + 1] == 0)
    {
        w[p_counter][9] = 10 + z[p_counter][20] + w[p_counter][7];
        z[p_counter][21] = w[p_counter][9];
        return 2;
    }
    return 1;
}

/******************************************************************************
 * Function: ten_strike
 * Description: Determine what to do if player got a spare
 * Parameters: int **&z, int **&w, int **&s_s_o, int round_10[], int p_counter, int v
 * Pre-Conditions: Three multi-dimensional int arrays, or double int pointers, an int array, and two ints must exsist
 * Post-Conditions: Data will be changed depneding on strike conditionals
 * ****************************************************************************/
int ten_strike(int **&z, int **&w, int **&s_s_o, int round_10[], int p_counter, int v)
{

    // Justification: Needed to use extra conditionals to try and help the frame 10 setup if the player got a strike or two previously, also a spare

    // if its the first roll look back to the previous roll to try and gather the proper score to prepare proper total
    if(v == 0)
    {
        if(s_s_o[p_counter][8] == 2 && s_s_o[p_counter][7] == 2)
        {
            w[p_counter][7] = w[p_counter][6] + 30;
            z[p_counter][21] = w[p_counter][7];
            return 1;
        }         
    }
    // if next next roll is a strike (3 in a row)
    else if(round_10[v + 2] = 2)
    {
        w[p_counter][9] = 60 + w[p_counter][7];
        z[p_counter][21] = w[p_counter][9];
        return 2;
    }
    // next next roll is a spare
    else if(round_10[v + 2] = 1)
    {

        w[p_counter][9] = 20 + w[p_counter][9-1];
        z[p_counter][21] = w[p_counter][9];
        return 2;

    }
    // next next roll is open
    else if(round_10[v + 2] = 0)
    {

        w[p_counter][9] = z[p_counter][20] + z[p_counter][19] + w[p_counter][9-1];
        z[p_counter][21] = w[p_counter][9];
        return 2;

    }
    return 1;
}

/******************************************************************************
 * Function: score_print
 * Description: Prints the remainder of the scorecard 
 * Parameters: string *&x, int y, int **&z, int **&w, int **&s_s_o, int round_10[], int p_counter, int count
 * Pre-Conditions: Two multi-dimensional int arrays, or double int pointers, a string pointer, and an int must exsist
 * Post-Conditions: The remainder of the scorecard will be printed 
 * ****************************************************************************/
void score_print(string *&x, int y, int **&z, int **&w, int **&s_s_o, int round_10[], int p_counter, int count)
{

    // Run for loop to cycle through each frame
    for(int h = 0; h < GAME_SIZE; h++)
    {
        // start roll counter
        count++;

        if(z[p_counter][h] == 10 && h % 2 == 0 && h != 21 || z[p_counter][h] == 10 && h != 21 )
        score_print1(count);
        else if(z[p_counter][h] == 0 && h != 21)
        score_print2(count, h);
        else if(z[p_counter][h] + z[p_counter][h - 1] == 10 && h % 2 == 1 && h != 21)
        score_print3(count, h);
        else if(z[p_counter][h] == -1)
        score_print4(count, h);
        else
        score_print5(count, h, z, p_counter);
    }

}

/******************************************************************************
 * Function: score_print1
 * Description: Prints a strike
 * Parameters: int &count
 * Pre-Conditions: An int address must exsist outside of the scope of the function
 * Post-Conditions: Strike will be printed
 * ****************************************************************************/
int score_print1(int &count)
{
    cout << "X ";
    
}

/******************************************************************************
 * Function: score_print2
 * Description: Prints a gutterball
 * Parameters: int &count, int h
 * Pre-Conditions: An int pointer address must exsist outside of the scope of the function, as well as an int
 * Post-Conditions: Gutterball or gutterball with a dash will be printed
 * ****************************************************************************/
void score_print2(int &count, int h)
{
    // if it has been two turns and the round doesn't equal 18
    if(count == 2 && h != 18)
    {
        cout << "-|";
        count = 0;
    }
    else
    cout << "- ";
}

/******************************************************************************
 * Function: score_print3
 * Description: Prints a spare
 * Parameters: int &count, int h
 * Pre-Conditions: An int pointer address must exsist outside of the scope of the function, as well as an int
 * Post-Conditions: Spare or spare with a dash will be printed
 * ****************************************************************************/
void score_print3(int &count, int h)
{
    if(count == 2 && h != 18)
    {
        count = 0;
        cout << "/|";
    }
    else
    cout << "/ ";
}

/******************************************************************************
 * Function: score_print4
 * Description: Prints special brackets for frame 10 and total
 * Parameters: int &count, int h
 * Pre-Conditions: An int pointer address must exsist outside of the scope of the function, as well as an int
 * Post-Conditions: Special dashes will be printed for round 10 and totals 
 * ****************************************************************************/
void score_print4(int &count, int h)
{
    if(count == 2)
    {
        if(h == 19)
        {
            cout << "   |";
            count = 0;
        }
        else if(h == 21)
        {
            cout << "   |";
            count = 0;
        }
        else
        {
            count = 0;
            cout << " |";    
        }
    }
    else
    cout << "  ";
}

/******************************************************************************
 * Function: score_print5
 * Description: Special printing for frame 10 depending on the numbers as well as regular printing
 * Parameters: int &count, int h, int **&z, int p_counter
 * Pre-Conditions: An int pointer address must exsist outside of the scope of the function, as well as two ints, and a dynamic int array
 * Post-Conditions: Special dashes will be printed for round 10 and totals, as well as dashes for other frames 
 * ****************************************************************************/
int score_print5(int &count, int h, int **&z, int p_counter)
{

    
    // if spaces equal two print each respective roll plus a set amount of spaces or a bracket
    if(count == 2 )
    {
        if(h == 19)
        {
            cout << z[p_counter][19] << " ";
            count = 1;
        }
        else if(h == 20)
        {

            cout << z[p_counter][20] << "|";
            count = 0;

        }
        else if(h == 21)
        score_print5_2(count, z, p_counter);                
        else
        {
            count = 0;
            cout << z[p_counter][h] << "|";   
        }             
    }
    else
    cout << z[p_counter][h] << " ";

}

/******************************************************************************
 * Function: score_print5_2
 * Description: Special printing for total depending on the numbers
 * Parameters: int &count, int **&z, int p_counter
 * Pre-Conditions: An int pointer address must exsist outside of the scope of the function, as well as two ints, and a dynamic int array
 * Post-Conditions: Special dashes will be printed for round 10 and totals 
 * ****************************************************************************/
int score_print5_2(int &count, int **&z, int p_counter)
{
    // if the size of total is less than 10
    if(z[p_counter][21] < 10)
    {
        cout << z[p_counter][21] << "  |";
        count = 0;
    }
    // 10 - 99
    else if(z[p_counter][21] >= 10 && z[p_counter][21] <= 99)
    {
        cout << z[p_counter][21] << " |";
        count = 0;
    }
    // 100+
    else
    {
        cout << z[p_counter][21] << "|";
        count = 0;
    } 
}

/******************************************************************************
 * Function: total_scores
 * Description: Prints total scores of scoreboard
 * Parameters: string *&x, int y, int **&z, int **&w, int p_counter, int **&s_s_o
 * Pre-Conditions: Three multi-dimensional int arrays, or double int pointers, a string pointer, and two ints must exsist
 * Post-Conditions: The totals of the scorecard will be printed
 * ****************************************************************************/
void total_scores(string *&x, int y, int **&z, int **&w, int p_counter, int **&s_s_o)
{

    if(s_s_o[p_counter][0] == 0)
    w[p_counter][0];

    if(w[p_counter][0] > 10)
    cout << "        " << w[p_counter][0];
    else
    {   
        cout << "         ";
        if(w[p_counter][0] == -1)
        cout << " ";
        else
        cout << w[p_counter][0];
    }
    for(int v = 1; v < 10; v++)
    total_scores2(w, v, p_counter);
    cout << endl;
    cout << "--------------------------------------------------------" << endl;

}

/******************************************************************************
 * Function: total_scores2
 * Description: Prints total scores of scoreboard
 * Parameters: int **&w, int v, int p_counter
 * Pre-Conditions: One multi-dimensional int arrays, or double int pointers,  and two ints must exsist
 * Post-Conditions: The totals of the scorecard will be printed
 * ****************************************************************************/
void total_scores2(int **&w, int v, int p_counter)
{

    // if the total score is 10-99
    if(w[p_counter][v] >= 10 && w[p_counter][v] <= 99)
    {
        cout << "  ";
        cout << w[p_counter][v];
    }
    // 100 +
    else if(w[p_counter][v] > 99)
    {

        cout << " ";
        cout << w[p_counter][v];

    }
    // deals with beginning of the game, all equal negative 1
    else
    {
        cout << "   ";
        if(w[p_counter][v] == -1)
        cout << " ";
        else
        cout << w[p_counter][v];
    }

}


/******************************************************************************
 * Function: score_time
 * Description: Determine what roll the player will get, frame logic, and how many rolls per frame
 * Parameters: int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[]
 * Pre-Conditions: Three multi-dimensional int arrays, or double int pointers, a string pointer, an int must exsist, and an int array
 * Post-Conditions: The rolls for the player in a specific frame will have been determined
 * ****************************************************************************/
void score_time(int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[])
{

    // logic variables
    int player_roll_frame;
    int round_c = 1;
    int frame_score = 0;
    int roll_count = 0;
    bool run;

    // make a for loop to iterate through each frame
    for(int i = 0; i < 10; i++)
    {
        // print frame and determine what roll each player is on according to frame
        cout << "Frame " << i + 1 << endl;            
        score_time2(p_score, p_total_score, p_amount, p_count, s_s_o, round_10, player_roll_frame, i);
        
    }
}

/******************************************************************************
 * Function: score_time2
 * Description: Determine what roll the player will get, frame logic, and how many rolls per frame
 * Parameters: int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int i
 * Pre-Conditions: Three multi-dimensional int arrays, or double int pointers, a string pointer, an int must exsist, and an int array
 * Post-Conditions: The rolls for the player in a specific frame will have been determined
 * ****************************************************************************/
void score_time2(int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int i)
{
    // for loop to iterate through number of players
    for(int j = 0; j < p_count; j++)
    {
        // logic to determine frame 
        player_roll_frame = i * 2;
            
        // Display which player is going next   
        cout << "Player" << j + 1 << "'s " << "turn." << endl;

        // intialize special round 10 array
        for(int z = 0; z < 3; z ++)
        round_10[z] = -1;

        // // special conditonal for round 10 - practically the same as the other with some differences
        if(i == 9)
        score_time3(p_score, p_total_score, p_amount, p_count, s_s_o, round_10, player_roll_frame, i, j);
        else
        score_time4(p_score, p_total_score, p_amount, p_count, s_s_o, round_10, player_roll_frame, i, j);             
    }
}

/******************************************************************************
 * Function: score_time3
 * Description: Determine what roll the player will get, frame logic, and how many rolls per frame (specifically for frame 10)
 * Parameters: int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int i, int j
 * Pre-Conditions: Three multi-dimensional int arrays, or double int pointers, a string pointer, four ints, and an int array
 * Post-Conditions: Rolls for each player for frame 10 will be determined (allegedly)
 * ****************************************************************************/
void score_time3(int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int i, int j)
{

    // Justification: ALl of the special conditionals for frame 10 required me to use break and continue. If I didn't need to use those, I likely would've only had 15 lines

    // run three times to simulate round 10
    for(int k = 0; k < 3; k++)
    {                   
        cout << "Press Enter to roll:";
        cin.ignore();

        score_time3_1(p_score, player_roll_frame, j, k);

        // if it's a strike 
        if(p_score[j][player_roll_frame] == 10 && (player_roll_frame == 19 || player_roll_frame == 20 || player_roll_frame == 18))
        {
            if(score_time3_2(p_score, p_total_score, p_amount, p_count, s_s_o, round_10, player_roll_frame, k) == 1)
            continue;
        }
        // if it's a spare
        else if(p_score[j][player_roll_frame] + p_score[j][player_roll_frame - 1] == 10 && player_roll_frame % 2 != 0)
        {
            if(score_time3_3(p_score, p_total_score, p_amount, p_count, s_s_o, round_10, player_roll_frame, k) == 1)
            continue;
        }
        // if it's a gutter ball
        else if(p_score[j][player_roll_frame] == 0)
        {
            if(score_time3_4(p_score, p_total_score, p_amount, p_count, s_s_o, round_10, player_roll_frame, k, j, i) == 2)
            break;
        }
        // if it's an open frame
        else
        {
            if(score_time3_5(p_score, p_total_score, p_amount, p_count, s_s_o, round_10, player_roll_frame, k, j, i) == 2)
            break;
        }
        // store total score and print totals
        p_score[j][21] = p_total_score[j][i] + p_score[j][21];
        top_part(p_amount);
        total_bottom_print(p_amount, p_count, p_score, p_total_score, s_s_o, round_10);

        player_roll_frame++;

        cout << endl;
    }
}

/******************************************************************************
 * Function: score_time3_1
 * Description: Ensure that player gets proper roll odds
 * Parameters: int **&p_score, int player_roll_frame, int j, int k
 * Pre-Conditions: One multi-dimensional int arrays, or double int pointers, three ints
 * Post-Conditions: Rolls for each player for frame 10 will be determined (allegedly)
 * ****************************************************************************/
void score_time3_1(int **&p_score, int player_roll_frame, int j, int k)
{
    // ensure that the player either gets a fresh set of pins for a strike or spare(don't if not)
    if(k == 0)
    p_score[j][player_roll_frame] = rand_41(0);
    else if((p_score[j][player_roll_frame] == 10 || (p_score[j][player_roll_frame] + p_score[j][player_roll_frame - 1] == 10 && p_score[j][player_roll_frame] != 0)) && k == 1 || k == 2)
    p_score[j][player_roll_frame] = rand_41(0);
    else
    p_score[j][player_roll_frame] = rand_41(p_score[j][player_roll_frame - 1]);

}

/******************************************************************************
 * Function: score_time3_2
 * Description: Determine what to do once the player gets a strike
 * Parameters: int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int k
 * Pre-Conditions: Three multi-dimensional int arrays, or double int pointers, a string pointer, two ints, and an int array
 * Post-Conditions: Strike will be correctly stored for player (allegedly)
 * ****************************************************************************/
int score_time3_2(int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int k)
{
    // Print result, record strike, continue
    cout << "You got a strike! X" << endl;
    round_10[k] = 2;
    top_part(p_amount);
    total_bottom_print(p_amount, p_count, p_score, p_total_score, s_s_o, round_10);
    return 1;
}

/******************************************************************************
 * Function: score_time3_3
 * Description: Determine what to do once the player gets a spare
 * Parameters: int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int k
 * Pre-Conditions: Three multi-dimensional int arrays, or double int pointers, a string pointer, two ints, and an int array
 * Post-Conditions: Spares will be correctly stored for player (allegedly)
 * ****************************************************************************/
int score_time3_3(int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int k)
{
    // Print result, record spare, continue
    cout << "You got a spare! /" << endl;
    round_10[k] = 1;
    top_part(p_amount);
    total_bottom_print(p_amount, p_count, p_score, p_total_score, s_s_o, round_10);
    return 1;
}

/******************************************************************************
 * Function: score_time3_4
 * Description: Determine what to do once the player gets a gutterball 
 * Parameters: int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int k, int j, int i
 * Pre-Conditions: Three multi-dimensional int arrays, or double int pointers, a string pointer, four ints, and an int array
 * Post-Conditions: Gutters will be correctly stored for player (allegedly)
 * ****************************************************************************/
int score_time3_4(int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int k, int j, int i)
{
    // force user to end the game if they get a gutterball at roll 19(stop third roll)
    if(player_roll_frame == 19)
    {
        cout << "Bummer. You got a gutter ball! -" << endl;
        s_s_o[j][i] = 0;
        round_10[k] = 0;
        top_part(p_amount);
        total_bottom_print(p_amount, p_count, p_score, p_total_score, s_s_o, round_10);
        return 2;
    }
    // Print they got a gutterball and report it to array
    else
    cout << "Bummer. You got a gutter ball! -" << endl;
    round_10[k] = 0;
}

/******************************************************************************
 * Function: score_time3_5
 * Description: Determine what to do once the player gets a open roll 
 * Parameters: int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int k, int j, int i
 * Pre-Conditions: Three multi-dimensional int arrays, or double int pointers, a string pointer, four ints, and an int array
 * Post-Conditions: Open roll will be correctly stored for player (allegedly)
 * ****************************************************************************/
int score_time3_5(int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int k, int j, int i)
{
    // Force player to stop if the roll is open for roll 19(stop third roll)
    if(player_roll_frame == 19)
    {
        cout << "You got a " << p_score[j][player_roll_frame] << endl;
        s_s_o[j][i] = 0;
        round_10[k] = 0;
        top_part(p_amount);
        total_bottom_print(p_amount, p_count, p_score, p_total_score, s_s_o, round_10);
        return 2;
    }
    // Print they got open and store it into array accordingly
    else
    cout << "You got a " << p_score[j][player_roll_frame] << endl;
    round_10[k] = 0;  
}

/******************************************************************************
 * Function: score_time4
 * Description: Determine scores for frames 1-9
 * Parameters: int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int i, int j
 * Pre-Conditions: Three multi-dimensional int arrays, or double int pointers, a string pointer, four ints, and an int array
 * Post-Conditions: Frame scores for 1-9 will be correctly determined for each player
 * ****************************************************************************/
void score_time4(int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int i, int j)
{
    // Justification: Had to use break conditions. Since I was so close, if I didn't need to use that I would've been within 15 lines

    // game scoring logic for frame 1-9
    for(int k = 0; k < 2; k++)
    {
        // Prompt user to roll then use random function to get random number. Change range of random number according to the players roll
        cout << "Press Enter to roll:";
        cin.ignore();
        score_time4_1(p_score, player_roll_frame, j, k);

        // if total score is 10 and the frame is even get a strike
        if(p_score[j][player_roll_frame] == 10 && player_roll_frame % 2 == 0)
        {

           if(score_time4_2(p_score, p_total_score, p_amount, p_count, s_s_o, round_10, player_roll_frame, i, j) == 2)
           break; 

        }
        // if total score is 10 and the frame is odd get a spare
        else if(p_score[j][player_roll_frame] + p_score[j][player_roll_frame-1] == 10 && player_roll_frame % 2 != 0)
        {

            if(score_time4_3(p_score, p_total_score, p_amount, p_count, s_s_o, round_10, player_roll_frame, i, j) == 2)
            break;

        }
        // if roll is zero
        else if(p_score[j][player_roll_frame] == 0)
        score_time4_4(s_s_o, k, j, i);
        // if nothing else...
        else
        score_time4_5(p_score, player_roll_frame, s_s_o, k, j, i); 

        // print totals if loop doesn't break
        top_part(p_amount);
        total_bottom_print(p_amount, p_count, p_score, p_total_score, s_s_o, round_10);
                    
        player_roll_frame++;

        cout << endl;
    }
}

/******************************************************************************
 * Function: score_time4_1
 * Description: Determine roll odds for frame 1-9
 * Parameters: int **&p_score, int player_roll_frame, int j, int k
 * Pre-Conditions: One multi-dimensional int arrays, or double int pointers, and three ints
 * Post-Conditions: Roll score for each frame will be determined for each player
 * ****************************************************************************/
void score_time4_1(int **&p_score, int player_roll_frame, int j, int k)
{

    if(k == 0)
    p_score[j][player_roll_frame] = rand_41(0);
    else
    p_score[j][player_roll_frame] = rand_41(p_score[j][player_roll_frame - 1]);


}

/******************************************************************************
 * Function: score_time4_2
 * Description: Determine what to do if player gets a strike
 * Parameters: int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int i, int j
 * Pre-Conditions: Three multi-dimensional int arrays, or double int pointers, a string pointer, four ints, and an int array
 * Post-Conditions: What to do after the strike will be determined for the player
 * ****************************************************************************/
int score_time4_2(int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int i, int j)
{
    // Ensure that total stays hidden if on frame - otherwise print, store that you got a strike, and continue
    cout << "You got a strike! X" << endl;
    if(i == 0)
    p_score[j][21] = -1;
    s_s_o[j][i] = 2;
    top_part(p_amount);
    total_bottom_print(p_amount, p_count, p_score, p_total_score, s_s_o, round_10);
    return 2;
}

/******************************************************************************
 * Function: score_time4_2
 * Description: Determine what to do if player gets a spare
 * Parameters: int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int i, int j
 * Pre-Conditions: Three multi-dimensional int arrays, or double int pointers, a string pointer, four ints, and an int array
 * Post-Conditions: What to do after the spare will be determined for the player
 * ****************************************************************************/
int score_time4_3(int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int i, int j)
{
    // Ensure that total stays hidden if on frame - otherwise print, store that you got a spare, and continue
    cout << "You got a spare! /" << endl;
    if(i == 0)
    p_score[j][21] == -1;
    top_part(p_amount);
    total_bottom_print(p_amount, p_count, p_score, p_total_score, s_s_o, round_10);
    s_s_o[j][i] = 1;
    return 2;
}

/******************************************************************************
 * Function: score_time4_2
 * Description: Determine what to do if player gets a gutterball
 * Parameters: int **&s_s_o, int k, int j, int i
 * Pre-Conditions: One multi-dimensional int arrays, or double int pointers, and three ints
 * Post-Conditions: What to do after the gutterball will be determined for the player
 * ****************************************************************************/
void score_time4_4(int **&s_s_o, int k, int j, int i)
{
    // Save that you got an open frame if on the second roll
    cout << "Bummer. You got a gutter ball! -" << endl;
    if(k == 1)
    s_s_o[j][i] = 0;
}

/******************************************************************************
 * Function: score_time4_2
 * Description: Determine what to do if player gets a open frame
 * Parameters: int **&s_s_o, int k, int j, int i
 * Pre-Conditions: Two multi-dimensional int arrays, or double int pointers, and four ints
 * Post-Conditions: What to do after the open frame will be determined for the player
 * ****************************************************************************/
void score_time4_5(int **&p_score, int player_roll_frame, int **&s_s_o, int k, int j, int i)
{
    // Save that you got an open frame if on the second roll
    cout << "You got a " << p_score[j][player_roll_frame] << endl;
    if(k == 1)
    s_s_o[j][i] = 0;
}

/******************************************************************************
 * Function: make_d_array
 * Description: Creates various dynamic arrays, either one dimensional or multi-dimensional
 * Parameters: int **&x, int **&y, string *&z, int c
 * Pre-Conditions: Two double int pointers, a string pointer, and an int must exsist
 * Post-Conditions: three dynamic arrays will be made
 * ****************************************************************************/
void make_d_array(int **&x, int **&y, string *&z, int c, int **&g)
{

    // intialize 2D dynamic array and string dynamic array for pointers that were passed
    x = new int*[c];
    y = new int*[c];
    z = new string[c + 1];
    g = new int*[c];

    // fill 2D Arrays with corresponding columns
    for(int i = 0; i < c; i++)
    x[i] = new int[GAME_SIZE];
    for(int i = 0; i < c; i++)
    {
        y[i] = new int[FINAL_SIZE];
        g[i] = new int[FINAL_SIZE];
    }
    
    // store values in 2D Arrays
    make_d_array_2(x, y, g, c);

    // Intilaize index of string dynamic array to "PLayer"n , being number of players
    for(int i = 1; i < c + 1; i++)
    z[i] = "Player" + to_string(i);

    // Make first index as name
    z[0] = "Name";

}

/******************************************************************************
 * Function: make_d_array_2
 * Description: Initializes dynamic array values
 * Parameters: int **&x, int **&y, int **&g, int c
 * Pre-Conditions: Three double int pointers, a string pointer, and an int must exsist
 * Post-Conditions: All dynamic array indexes will = -1
 * ****************************************************************************/
void make_d_array_2(int **&x, int **&y, int **&g, int c)
{

    // initialize all indexes of the 2D Dynamic Arrays to be 0
    int f = 0;
    for(int i = 0; i < c; i++)
    {

        for(int i = 0; i < GAME_SIZE; i++)
        x[f][i] = -1;

        for(int i = 0; i < FINAL_SIZE; i++)
        {
            y[f][i] = -1;
            g[f][i] = -1;
        }

        f++;

    }

}

/******************************************************************************
 * Function: intro_phase
 * Description: prompts the user for their name and determines player count
 * Parameters: int *x
 * Pre-Conditions: a pointer with data type int must exsist
 * Post-Conditions: the user's name will be displayed in ther terminal and the number of players will be knwon
 * ****************************************************************************/
int intro_phase()
{
    // Prompt user for name
    string name;
    int x;
    intro_phase2(name);
    intro_phase3(x, name);
    return x; 
}

/******************************************************************************
 * Function: intro_phase2
 * Description: Prompts User for name
 * Parameters: string &name
 * Pre-Conditions: a string address must exsist
 * Post-Conditions: Name of player will be stored
 * ****************************************************************************/
void intro_phase2(string &name)
{
    cout << "Enter your name: " << endl;
    getline(cin, name);
    while(!(is_name(name)))
    {
        cout << "Error. Enter your name." << endl;
        getline(cin, name);

    }
}

/******************************************************************************
 * Function: intro_phase3
 * Description: Prompts user to enter a number of players
 * Parameters: int &x, string name
 * Pre-Conditions: an int address and a string must exsist
 * Post-Conditions: the number of players will be stored
 * ****************************************************************************/
void intro_phase3(int &x, string name)
{
    // Justification: Error handling causes this program to go over 15 lines, if there wasn't as extensive handling then it wouldn't go over

    // Gretting plus get number of players
    cout << "Hello " << name << " it's time to bowl!" << endl;
    cout << "Enter number of players:" << endl;
    string num;
    cin >> num;
    cout << endl;
    // check if string enetered is a number and isn't zero
    while(!(is_int(num)))
    {
        cout << "Invalid Input. Please enter a number.";
        cin >> num;
        cout << endl;  
    }
    while(num == "0")
    {
        cout << "Enter number greater than 0 for player count:" << endl;
        cin >> num;
        while(!(is_int(num))) 
        {

            cout << "Invalid Input. Please enter a number." << endl;
            cin >> num;
            cout << endl;
        
        }
    }
    // if cleared pass to int pointer x 
    x = stoi(num);

}

/*******************************************************************
** Function: is_int()
** Description: Indicates if the string num is an integer
** Parameters: string num
** Pre-conditions: takes string value
** Post-conditions: return true if num is integer and fale if not
*******************************************************************/
bool is_name(string name)
{
    if(name == "" || name == " ")
    return false;
    char check[name.length() + 1];
    strcpy(check, name.c_str());
    for(int i = 0; i < name.length(); i ++)
    {
        if(isalpha(check[i]) == 0)
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
bool is_int(string num){
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

/******************************************************************************
 * Function: spaces
 * Description: makes a specified number of spacese
 * Parameters: int x
 * Pre-Conditions: an int must exsits
 * Post-Conditions: a specified number of spaces will be printed
 * ****************************************************************************/
void spaces(int x)
{

    // makes desired amount of spaces based on int input x
    string space = "";
    for(int i = 0; i < x; i++)
    space += " ";

    cout << space;

}



