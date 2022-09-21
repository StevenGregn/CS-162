/******************************************************************************
 * Program Filename: 3Assignment
 * Author: Stryder Garrett
 * Date: 05/08/2022
 * Description: Game of 21
 * Input: Want to play, # of players, Bank Amount, Difficulty, Game Decisions
 * Outup: Outcomes Based on Game Decisions and Difficulty, Final Bank Totals after playing
 * ****************************************************************************/
#include <iostream>
#include <cstdlib>
#include <string>
#include <stdlib.h> 
using namespace std;
bool isNumber(string s);
void print_a(int array[], int size);
int main()
{
    srand(time(NULL));
    int player_card = (rand() % 11) + 1; 
    cout << "Welcome to 21! Ready to play? n- no, y - yes" << endl;
    string play = "";
    string play1 = "";
    // Force User to Say Yes
    do 
    {
        cin >> play;
        // Goes to the next part
        if(play == "y")
        {

            cout << "Alright lets get started then!" << endl;
            break;

        }
        else if(play == "n")
        {

            cout << "Alright see you later then" << endl;
            return 0;

        }
        cout << "Invalid Input. Try Again" << endl;

    } while (play != "n" || play != "yes");
    // Get Player Count - Initialize at 0
    int pcount = 0;
    do
    {   
        string user_input = "";
        getline (cin, user_input);
        if (user_input.length() == 1)
        {

            // Ensure it's from 1-4
            if (user_input == "1" || user_input == "2" || user_input == "3" || user_input == "4")
            {
                // Go to next part 
                int p_count_input = atoi(user_input.c_str());
                pcount = p_count_input;
                cout << "Great! Let's continue on then." << endl;
                break;

            }
            // Reprompt if length is right 
            else
            {

                cout << "How many players do you want? 1-4" << endl;

            }
            
        }
        // Reprompt if length is wrong
        else
        {

            cout << "How many players do you want? 1-4" << endl;
            continue;
        } 

    } while (pcount == 0);
    // cout << pcount << endl;
    // const int B_Size = 4;
    int bank_totals[pcount];
    cout << "Lets do bank stuff!" << endl;
    int bank_input;
    string bank_amount = "";
    int i;
    
    for (i = 0; i < pcount; i ++)
    {
        do
        {   
            // Check if inputted string is int 
            cout << "Enter an integer bank amount for Player " << i + 1 << endl;
            getline (cin, bank_amount);
            // repeats false till true
            while(!(isNumber(bank_amount)))
            {

                // if wrong then do it again
                cout << "Invalid Input. Please enter an integer value Player " << i + 1 << endl;
                getline (cin, bank_amount);
                // make sure it's not 0 if it "clears"
                while (bank_amount == "0")
                {

                    cout << "Invalid Input. Integer must be greater than zero." << endl;
                    getline (cin, bank_amount);

                }
        
            }
            // ensure not zero other way around
            while (bank_amount == "0")
            {

                cout << "Invalid Input. Integer must be greater than zero." << endl;
                getline (cin, bank_amount);
                while(!(isNumber(bank_amount)))
                {

                    // if wrong then do it again
                    cout << "Invalid Input. Please enter an integer value Player " << i + 1 << endl;
                    getline (cin, bank_amount);

                }

            }
            bank_input = atoi(bank_amount.c_str());
            bank_totals[i] = bank_input;

        }while (bank_totals[i] == 0);
    }
    
    cout << "Here is each player's bank amounts:" << endl;
    print_a(bank_totals, pcount);
    string difficulty = "";
    cout << "Select your difficulty! (E - easy, M - medium, H - hard" << endl;
    do
    {
        getline(cin, difficulty);
        // Confirm it's proper length
        if(difficulty.length() == 1)
        {
            // Confirm it's correct letter
            if(difficulty == "e" || difficulty == "E" || difficulty == "M" || difficulty == "m"|| difficulty == "H" || difficulty == "h")
            {

                break;

            }
            else
            {
                // if wrong letter
                cout << "Select your difficulty! (E - easy, M - medium, H - hard" << endl;
            }
            

        }
        // if length is wrong
        else
        {

            cout << "Select your difficulty! (E - easy, M - medium, H - hard" << endl;
            continue; 

        }



    } while(difficulty != "e" || difficulty != "E" || difficulty != "M" || difficulty != "m"|| difficulty != "H" || difficulty != "h");
    cout << "Time to place your bets!" << endl;
    string bets = "";
    int bet_for_player;
    int player_bets[pcount];
    string again = "";
    int no_money = 0;
    int over_21 = 0;
    do
    {
    int over_21 = 0;
        do
        {
            int i;
            for (i = 0; i < pcount; i++)
            {
                // If player has no money
                if(bank_totals[i] <= 0)
                {
                    cout << "Skipping Player " << i + 1 << endl;
                    continue;
                }
                cout << "Once again, here is how much player " << i + 1 << " has: " << bank_totals[i] << endl;
                cout << "Alright player " << i + 1 << " place your bet!" << endl;
                getline (cin, bets);
                // need to fix this
                while(!(isNumber(bets)))
                {

                    // Make User reprompt if not integer
                    cout << "Invalid Input. Please enter an integer bet value for Player " << i + 1 << endl;
                    getline(cin, bets);
                    

                }
                // if it's right convert
                int bet_for_player = atoi(bets.c_str());
                // check that int isn't greater than array value stored for bank
                while(bet_for_player == 0)
                {

                    cout << "Your bet cannot be zero." << endl;
                    cout << "Please bet again player " << i + 1 << endl;
                    getline(cin, bets);
                    while(!(isNumber(bets)))
                    {

                        // Make User reprompt if not integer
                        cout << "Invalid Input. Please enter an integer bet value for Player " << i + 1 << endl;
                        getline(cin, bets);

                    }
                    bet_for_player = atoi(bets.c_str());

                }
                while(bet_for_player > bank_totals[i])
                {

                    cout << "Your bet cannot be greater than your bank value: " << bank_totals[i] << endl;
                    cout << "Please bet again player " << i + 1 << endl;
                    getline(cin, bets);
                    bet_for_player = atoi(bets.c_str());
                    if (bet_for_player == 0)
                    {

                        cout << "Your bet cannot be zero." << endl;
                        cout << "Please bet again player " << i + 1 << endl;
                        getline(cin, bets);
                        bet_for_player = atoi(bets.c_str());

                    }

                }
                player_bets[i] = bet_for_player;
                cout << "Player " << i + 1 << " bet:" << player_bets[i] << endl;  

            }
        }while(!(isNumber(bets)));
        cout << "Lets play! The difficulty you selected was: "  << difficulty << endl;
        cout << "---------------------------------------------" << endl;
        int i;
        int player_total_card_count[pcount];
        int dealer_card_nums[1];
        int dealer_total_card_count[1] = {0};
        if(difficulty == "e" || difficulty == "E")
        {

            for(i = 0; i < pcount; i++)
            {
                // If player has no money
                if (bank_totals[i] <= 0)
                {

                    continue;

                }
                int a = 0;
                a = (rand() % 11) + 1;
                cout << "Player " << i + 1 << " got the card: " << a << endl;
                cout << "Do you want another card player " << i + 1 << "? y - yes, n - no" << endl;
                player_total_card_count[i] = a;
                getline(cin, play1);
                do 
                {
                    // Wants a card
                    while(play1 == "y" && player_total_card_count[i] <= 21)
                    {
                        int p = 0;
                        cout << "Alright time for another card!" << endl;
                        p = (rand() % 11) + 1;
                        cout << "-------------------------" << endl;
                        cout << "Player " << i + 1 << " got the card: " << p << endl;
                        player_total_card_count[i] += p; 
                        cout << "Player " << i + 1 << " number total is: " << player_total_card_count[i] << endl;
                        cout << "-----------------------------" << endl;
                        if (player_total_card_count[i] > 21)
                        {
                            break;
                        }
                        else if (player_total_card_count[i] == 21)
                        {

                            break;

                        }
                        cout << "Do you want another card? y - yes, n - no" << endl;
                        getline(cin, play1);

                    }
                    // Goes over 21
                    if (player_total_card_count[i] > 21)
                    {

                        cout << "Player " << i + 1 << " went over 21." << endl;
                        cout << "----------------------" << endl;
                        player_total_card_count[i] = 0;
                        over_21 = over_21 + 1;
                        break;
 
                    }
                    else if (player_total_card_count[i] == 21)
                    {

                       cout << "You're lucky player " << i + 1 << " you got 21." << endl;
                       break; 

                    }
                    // Doesn't want more cards
                    if(play1 == "n")
                    {

                        cout << "Player " << i + 1 << "'s final number total is: " << player_total_card_count[i] << endl;
                        cout << "------------------------------------" << endl;
                        break;

                    }
                    cout << "Invalid Input. Try Again" << endl;
                    cout << "Do you want another card player " << i + 1 << "? y - yes, n - no" << endl;
                    getline(cin, play1);

                } while (play1 != "y" || play1 != "n");

            }
            // skip if everyone lost to the dealer
            if (pcount == over_21)
            {

                for (i = 0; i < pcount; i++)
                {

                    cout << "Player " << i + 1 << " has lost." << endl;
                    bank_totals[i] = bank_totals[i] - player_bets[i];
                    // if player has no money after losing add that to integer tally
                    if (bank_totals[i] == 0)
                    {
                        
                        no_money = no_money + 1;
                        

                    }
                    cout << "Player " << i + 1 << " new bank amount is " << bank_totals[i] << endl;
                    cout << "----------------------------" << endl; 


                }

            }
            else
            {
                // Dealer Goes
                cout << "------------------------------------" << endl;
                cout << "Dealer's Turn!" << endl;
                dealer_total_card_count[1] = 0;
                for (i = 0; i < 2; i++)
                {

                    int p = 0;
                    p = (rand() % 11) + 1;
                    dealer_card_nums[i] = p;
                    cout << "The dealer got the card " << dealer_card_nums[i] << endl;
                    dealer_total_card_count[1] += dealer_card_nums[i];
                    if (dealer_total_card_count[1] > 21)
                    {

                        break;

                    }

                }
            
                cout << "----------------------" << endl;
                cout << "The dealer's total is: " << dealer_total_card_count[1] << endl;
                if (dealer_total_card_count[1] > 21)
                {

                    dealer_total_card_count[1] == 0;
                    cout << "The dealer has busted!" << endl;

                }
                cout << "----------------------" << endl;
                for (i = 0; i < pcount; i++)
                {
                    // If player has no money
                    if (bank_totals[i] <= 0)
                    {

                        continue;

                    }
                    // Different outcomes
                    if(player_total_card_count[i] < dealer_total_card_count[1])
                    {

                        cout << "Player " << i + 1 << " has lost against the dealer." << endl;
                        bank_totals[i] = bank_totals[i] - player_bets[i];
                        // if player has no money after losing add that to integer tally
                        if (bank_totals[i] == 0)
                        {
                        
                            no_money = no_money + 1;
                        

                        }
                        cout << "Player " << i + 1 << " new bank amount is " << bank_totals[i] << endl;
                        cout << "----------------------------" << endl; 

                    }
                    else if(player_total_card_count[i] > dealer_total_card_count[1] || player_total_card_count[i] == 21)
                    {

                        cout << "Player " << i + 1 << " has won against the dealer." << endl;
                        bank_totals[i] = bank_totals[i] + player_bets[i];
                        cout << "Player " << i + 1 << " new bank amount is " << bank_totals[i] << endl; 
                        cout << "----------------------------" << endl;

                    }
                    else if(player_total_card_count[i] == dealer_total_card_count[1] && player_total_card_count[i] != 21)
                    {

                        cout << "Player " << i + 1 << " has tied against the dealer." << endl;
                        cout << "Player " << i + 1 << " new bank amount is " << bank_totals[i] << endl;
                        cout << "----------------------------" << endl;

                    }

                }
            }
            
        }
        else if(difficulty == "m" || difficulty == "M")
        {

            for(i = 0; i < pcount; i++)
            {
                // If player has no money
                if (bank_totals[i] <= 0)
                {

                    continue;

                }
                int a = 0;
                a = (rand() % 11) + 1;
                cout << "Player " << i + 1 << " got the card: " << a << endl;
                cout << "Do you want another card player " << i + 1 << "? y - yes, n - no" << endl;
                player_total_card_count[i] = a;
                getline(cin, play1);
                do 
                {
                    // Wants a card
                    while(play1 == "y" && player_total_card_count[i] <= 21)
                    {
                        int p = 0;
                        cout << "Alright time for another card!" << endl;
                        p = (rand() % 11) + 1;
                        cout << "-------------------------" << endl;
                        cout << "Player " << i + 1 << " got the card: " << p << endl;
                        player_total_card_count[i] += p; 
                        cout << "Player " << i + 1 << " number total is: " << player_total_card_count[i] << endl;
                        cout << "-----------------------------" << endl;
                        if (player_total_card_count[i] > 21)
                        {
                            break;
                        }
                        else if (player_total_card_count[i] == 21)
                        {

                            break;

                        }
                        cout << "Do you want another card? y - yes, n - no" << endl;
                        getline(cin, play1);

                    }
                    // Goes over 21
                    if (player_total_card_count[i] > 21)
                    {

                        cout << "Player " << i + 1 << " went over 21." << endl;
                        cout << "----------------------" << endl;
                        player_total_card_count[i] = 0;
                        over_21 = over_21 + 1;
                        break;
 
                    }
                    else if (player_total_card_count[i] == 21)
                    {

                       cout << "You're lucky player " << i + 1 << " you got 21." << endl;
                       break; 

                    }
                    // Doesn't want more cards
                    if(play1 == "n")
                    {

                        cout << "Player " << i + 1 << "'s final number total is: " << player_total_card_count[i] << endl;
                        cout << "------------------------------------" << endl;
                        break;

                    }
                    cout << "Invalid Input. Try Again" << endl;
                    cout << "Do you want another card player " << i + 1 << "? y - yes, n - no" << endl;
                    getline(cin, play1);

                } while (play1 != "y" || play1 != "n");

            }
            // skip if everyone lost to the dealer
            if (pcount == over_21)
            {

                for (i = 0; i < pcount; i++)
                {

                    cout << "Player " << i + 1 << " has lost." << endl;
                    bank_totals[i] = bank_totals[i] - player_bets[i];
                    // if player has no money after losing add that to integer tally
                    if (bank_totals[i] == 0)
                    {
                        
                        no_money = no_money + 1;
                        

                    }
                    cout << "Player " << i + 1 << " new bank amount is " << bank_totals[i] << endl;
                    cout << "----------------------------" << endl; 


                }

            }
            else
            {
                // Dealer Goes
                cout << "------------------------------------" << endl;
                cout << "Dealer's Turn!" << endl;
                dealer_total_card_count[1] = 0;
                int p = 0;
                for (i = 0; i < 4; i++)
                {
                    (rand() % 5) + 3;
                    p = (rand() % 5) + 3;
                    dealer_card_nums[i] = p;
                    cout << "The dealer got the card " << dealer_card_nums[i] << endl;
                    dealer_total_card_count[1] += dealer_card_nums[i];
                    if (dealer_total_card_count[1] >= 16 && dealer_total_card_count[1] <= 20)
                    {

                        break;

                    }
                    if (dealer_total_card_count[1] > 21)
                    {

                        break;

                    }

                }
                cout << "----------------------" << endl;
                cout << "The dealer's total is: " << dealer_total_card_count[1] << endl;
                if (dealer_total_card_count[1] > 21)
                {

                    dealer_total_card_count[1] == 0;
                    cout << "The dealer has busted!" << endl;

                }
                cout << "----------------------" << endl;
                for (i = 0; i < pcount; i++)
                {
                    // If player has no money
                    if (bank_totals[i] <= 0)
                    {

                        continue;

                    }
                    // Different outcomes
                    if(player_total_card_count[i] < dealer_total_card_count[1])
                    {

                        cout << "Player " << i + 1 << " has lost against the dealer." << endl;
                        bank_totals[i] = bank_totals[i] - player_bets[i];
                        // if player has no money after losing add that to integer tally
                        if (bank_totals[i] == 0)
                        {
                        
                            no_money = no_money + 1;
                        

                        }
                        cout << "Player " << i + 1 << " new bank amount is " << bank_totals[i] << endl;
                        cout << "----------------------------" << endl; 

                    }
                    else if(player_total_card_count[i] > dealer_total_card_count[1] || player_total_card_count[i] == 21)
                    {

                        cout << "Player " << i + 1 << " has won against the dealer." << endl;
                        bank_totals[i] = bank_totals[i] + player_bets[i];
                        cout << "Player " << i + 1 << " new bank amount is " << bank_totals[i] << endl; 
                        cout << "----------------------------" << endl;

                    }
                    else if(player_total_card_count[i] == dealer_total_card_count[1] && player_total_card_count[i] != 21)
                    {

                        cout << "Player " << i + 1 << " has tied against the dealer." << endl;
                        cout << "Player " << i + 1 << " new bank amount is " << bank_totals[i] << endl;
                        cout << "----------------------------" << endl;

                    }

                }
            }
            
        }
        else if(difficulty == "h" || difficulty == "H")
        {

            for(i = 0; i < pcount; i++)
            {
                // If player has no money
                if (bank_totals[i] <= 0)
                {

                    continue;

                }
                int a = 0;
                a = (rand() % 11) + 1;
                cout << "Player " << i + 1 << " got the card: " << a << endl;
                cout << "Do you want another card player " << i + 1 << "? y - yes, n - no" << endl;
                player_total_card_count[i] = a;
                getline(cin, play1);
                do 
                {
                    // Wants a card
                    while(play1 == "y" && player_total_card_count[i] <= 21)
                    {
                        int p = 0;
                        cout << "Alright time for another card!" << endl;
                        p = (rand() % 11) + 1;
                        cout << "-------------------------" << endl;
                        cout << "Player " << i + 1 << " got the card: " << p << endl;
                        player_total_card_count[i] += p; 
                        cout << "Player " << i + 1 << " number total is: " << player_total_card_count[i] << endl;
                        cout << "-----------------------------" << endl;
                        if (player_total_card_count[i] > 21)
                        {
                            break;
                        }
                        else if (player_total_card_count[i] == 21)
                        {

                            break;

                        }
                        cout << "Do you want another card? y - yes, n - no" << endl;
                        getline(cin, play1);

                    }
                    // Goes over 21
                    if (player_total_card_count[i] > 21)
                    {

                        cout << "Player " << i + 1 << " went over 21." << endl;
                        cout << "----------------------" << endl;
                        player_total_card_count[i] = 0;
                        over_21 = over_21 + 1;
                        break;
 
                    }
                    else if (player_total_card_count[i] == 21)
                    {

                       cout << "You're lucky player " << i + 1 << " you got 21." << endl;
                       break; 

                    }
                    // Doesn't want more cards
                    if(play1 == "n")
                    {

                        cout << "Player " << i + 1 << "'s final number total is: " << player_total_card_count[i] << endl;
                        cout << "------------------------------------" << endl;
                        break;

                    }
                    cout << "Invalid Input. Try Again" << endl;
                    cout << "Do you want another card player " << i + 1 << "? y - yes, n - no" << endl;
                    getline(cin, play1);

                } while (play1 != "y" || play1 != "n");

            }
            // skip if everyone lost to the dealer
            if (pcount == over_21)
            {

                for (i = 0; i < pcount; i++)
                {

                    cout << "Player " << i + 1 << " has lost." << endl;
                    bank_totals[i] = bank_totals[i] - player_bets[i];
                    // if player has no money after losing add that to integer tally
                    if (bank_totals[i] == 0)
                    {
                        
                        no_money = no_money + 1;
                        

                    }
                    cout << "Player " << i + 1 << " new bank amount is " << bank_totals[i] << endl;
                    cout << "----------------------------" << endl; 


                }

            }
            else
            {
                // Dealer Goes
                cout << "------------------------------------" << endl;
                cout << "Dealer's Turn!" << endl;
                int p = 10;
                dealer_total_card_count[1] = 0;
                for (i = 0; i < 11; i++)
                {

                    (rand() % 2) + 1;
                    p = (rand() % 2) + 2;
                    dealer_card_nums[i] = p;
                    cout << "The dealer got the card " << dealer_card_nums[i] << endl;
                    dealer_total_card_count[1] += dealer_card_nums[i];
                    if (dealer_total_card_count[1] >= 19 && dealer_total_card_count[1] <= 21)
                    {

                        break;

                    }
                    if (dealer_total_card_count[1] > 21)
                    {

                        break;

                    }

                }
                cout << "----------------------" << endl;
                cout << "The dealer's total is: " << dealer_total_card_count[1] << endl;
                if (dealer_total_card_count[1] > 21)
                {

                    dealer_total_card_count[1] == 0;
                    cout << "The dealer has busted!" << endl;

                }
                cout << "----------------------" << endl;
                for (i = 0; i < pcount; i++)
                {
                    // If player has no money
                    if (bank_totals[i] <= 0)
                    {

                        continue;

                    }
                    // Different outcomes
                    if(player_total_card_count[i] < dealer_total_card_count[1])
                    {

                        cout << "Player " << i + 1 << " has lost against the dealer." << endl;
                        bank_totals[i] = bank_totals[i] - player_bets[i];
                        // if player has no money after losing add that to integer tally
                        if (bank_totals[i] == 0)
                        {
                        
                            no_money = no_money + 1;
                        

                        }
                        cout << "Player " << i + 1 << " new bank amount is " << bank_totals[i] << endl;
                        cout << "----------------------------" << endl; 

                    }
                    else if(player_total_card_count[i] > dealer_total_card_count[1] || player_total_card_count[i] == 21)
                    {

                        cout << "Player " << i + 1 << " has won against the dealer." << endl;
                        bank_totals[i] = bank_totals[i] + player_bets[i];
                        cout << "Player " << i + 1 << " new bank amount is " << bank_totals[i] << endl; 
                        cout << "----------------------------" << endl;

                    }
                    else if(player_total_card_count[i] == dealer_total_card_count[1] && player_total_card_count[i] != 21)
                    {

                        cout << "Player " << i + 1 << " has tied against the dealer." << endl;
                        cout << "Player " << i + 1 << " new bank amount is " << bank_totals[i] << endl;
                        cout << "----------------------------" << endl;

                    }

                }
            }

        }
        // all users have no money
        if (no_money == pcount)
        {

            cout << "Game Over. All users have no money" << endl;
            return 0; 

        }
        // prompt to play again
        cout << "Do you want to play another round? n - no, y - yes " << endl;
        getline(cin, again);
        while (!(again == "Y" || again == "yes" || again == "Yes" || again == "y"||again == "N" || again == "no" || again == "No" || again == "n"))
        {

            cout << "Do you want to play another round? n - no, y - yes" << endl;
            getline(cin, again);

        }

    } while (again == "Y" || again == "yes" || again == "Yes" || again == "y");

}
/******************************************************************************
 * Function: SStringisNumber_Check
 * Description: Checks if String is an Integer
 * Parameters: s
 * Pre-Conditions: Thing entered is a string
 * Post-Conditions: String will or not be an integer (by returning true or false)
 * ****************************************************************************/
bool isNumber(string s)
{

    
    for (int i = 0; i < s.length(); i++)
    {
        // bool isNumber = false;
        if (s[i] <  '0' || s[i] > '9' )
        {
            // Makes it return to main
            return false;

        } 
    }
    // if it doens't stop the string will clear 
    return true;
}
/******************************************************************************
 * Function: print_a
 * Description: Prints Array
 * Parameters: array[], size
 * Pre-Conditions: array and size must be specified
 * Post-Conditions: N/A
 * ****************************************************************************/
void print_a(int array[], int size)
{

    for(int i = 0; i < size; i++)
    {

        cout << array[i] << "\t";

    }
    cout << endl;

}