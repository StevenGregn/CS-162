/******************************************************************************
 * Program Filename: 2Assignment
 * Author: Stryder Garrett
 * Date: 04/02/2022
 * Descition: College Day Simulator 
 * Input: Home Price, Down Payment, Length of Loan, Annual Interest Rate
 * Outup: Estmiated Mothly Payment, Total Paid, Pirncipal Paid, Interest Paid
 * ****************************************************************************/
#include <unistd.h>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{

    
    //Intro Phase
    cout << "Hello Welcome to the College Day Simulator" << "\n";
    string response;
    cout << "Ready to Play? Say 'Yes' or 'No':" << response << "\n";
    cin >> response;
    string name;
    if(response == "Yes" || response == "yes")
    {

        cout << "Great! Let's get started then!" << "\n";
        cout << "Enter your first name here: " << name << "\n";
        cin >> name;

    }
    else if(response == "No" || response == "no")
    {

        cout << "Awww, maybe next time then. See ya!" << "\n";
        cout << "Game Over. Try Again?" << "\n";
        return 0;

    }
    else
    {

        cout << "Game Over. You didn't follow directions." << "\n";
        return 1;

    }

    //Wake Up and First Choice Set
    srand(time(NULL));
    int wake = rand() % 2;
    /*This is where the magic happens. Each run is in embedded in each if statament until finish.*/
    int randomp1 = rand() % 2;
    double kd = rand() % 2;
    double cracked = (rand() % 6 - 2) + 2.0;

    //Woke Up Late
    if(wake == 1)
    {

        cout << "Oh no " << name << ", you woke up late! What do you wanna do today?" << "\n";
        int c1;
        //Prompt Options
        cout << "1) Eh. I'll go back to sleep, who needs school anyways." << "\n";
        cout << "2) Ohmigod! I can't miss ENG 103, I need to rush to get ready now!" << "\n";
        cout << "3) Silly game, it's my day off, I can do whatever I want!" << "\n";
        cin >> c1;

        //Chooses sleep
        if(c1 == 1)
        {
            //Wake for dinner option
            cout << "You go back to sleep happily, without a care in the world. Will you wake up for dinner " << name << "?" << "\n";
            string dinner;
            cout << "Yes or No" << dinner << "\n";
            cin >> dinner;

            //Chooses to eat dinner
            if(dinner == "Yes" || dinner == "yes")
            {
                //Where to eat
                cout << "Great! At least you're doing something useful today " << name << " no offense of course. What do I know. Anyways, what did you wanna eat?" << "\n";
                cout << "1) Calabaloos" << "\n";
                cout << "2) East Side Eats" << "\n";
                cout << "3) La Salle" << "\n";
                int eat;
                cin >> eat;
                if(eat == 1 || eat == 2 || eat == 3)
                {

                    int full = rand() % 2;
                    //Good food route
                    if(full == 1)
                    {

                        cout << "What great food provided by Oregon State University Housing and Dining! You left the dining hall feeling satisfied and ready to go back to sleep. Will you shower before you sleep?" << "\n";
                        string shower;
                        //Shower prompt
                        cout << "Yes or No?" << shower << "\n";
                        cin >> shower;
                        //Taking shower
                        if(shower == "yes" || shower == "Yes")
                        {
                            //Before Bed 
                            cout << "Good job " << name << ", I was worried at first because you didn't go to class, but it seems like you have your head on straight. Anything else you wanna do before you go to bed?" << "\n";
                            string bb;
                            cout << "Yes or No?" << bb << "\n";
                            cin >> bb;
                            if(bb == "yes" || bb =="Yes")
                            {
                                //Options if the user wants to do something before bed
                                cout << "Geez fine, what did you wanna do then?" << "\n";
                                cout << "1) Video Games" << "\n";
                                cout << "2) Read" << "\n";
                                cout << "3) Homework" << "\n";
                                int bb2;
                                cin >> bb2;

                                //Chooses homework
                                if(bb2 == 3)
                                {

                                    if(randomp1 != 1)
                                    {

                                        cout << "Good news, " << name << " like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 3;

                                    }
                                    else
                                    {

                                        cout << "Bad news," << name << "your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                        cout << "Game Over. Play Again?" << "\n"; 
                                        return 4;
                                    } 

                                }
                                //Chooses games
                                else if(bb2 == 1)
                                {

                                    cout << "Ahhh we got ourselves a gamer. Alright, pick your poison " << name << "." << "\n";
                                    cout << "1) Tetris" << "\n";
                                    cout << "2) Destiny 2" << "\n";
                                    cout << "3) Valorant" << "\n";
                                    cout << "4) Some other, lamer, video game. Probably something like Genshin Impact" << "\n";
                                    int game;
                                    cin >> game;
                                    if(game == 1 || game == 2 || game == 3 || game == 4)
                                    {

                                        if(randomp1 == 1)
                                        {

                                            cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 5;

                                        }
                                        else
                                        {

                                            cout << "Dang " << name << "today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 6;

                                        }
                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow the directions." << "\n";
                                        return 7;

                                    }

                                }
                                //Chooses Reading
                                else if(bb2 == 2)
                                {

                                    cout << "Lol are you a nerd " << name << " who reads these days? Whatever. What do you want to read?" << "\n";
                                    cout << "1) Coding for Dummies" << "\n";
                                    cout << "2) Surrounded by Idiots" << "\n";
                                    cout << "3) The book collecting dust on your shelf" << "\n";
                                    int book;
                                    cin >> book;
                                    if(book == 1 || book == 2 || book == 3)
                                    {

                                        if(randomp1 == 1)
                                        {

                                            cout << "You fall asleep happily after reading a good amount." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 8;
                                        }
                                        else if(randomp1 == 0)
                                        {

                                            cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 9;

                                        }

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 10;

                                    }

                                }
                                else 
                                {

                                cout << "Game Over. You didn't follow directions.";
                                return 49;

                                }

                            }
                            //No Dinner = Sleep
                            else if(bb == "No" || bb == "no")
                            {

                                cout << "Alright then, goodnight!" << "\n";
                                cout << "Game Over. Play Again?" << "\n";
                                return 11;

                            }
                            else
                            {

                                cout << "Game Over. You don't know how to follow directions";
                                return 12;

                            }


                        }

                    }
                    else
                    {
                        //Feel Sick After Dinner Route
                        cout << "As per usual, you feel sick! That's just great isn't it. Will you go to the bathroom or shower first?" << "\n";
                        string sick;
                        cout << "Bathroom or Shower?" << sick << "\n";
                        cin >> sick;
                        // Bathroom Route
                        if(sick == "bathroom" || sick == "Bathroom")
                        {

                            if(randomp1 > 0)
                            {
                                // Didn't poop yourself
                                cout << "Congrats " << name << ", you made it to the bathroom safe and sound. After a nice relaxing shower you head back to the room." <<"\n";
                                string bba;
                                cout << "Anything else you want to do before bed?" << "\n";
                                cout << "Yes or No" << "\n";
                                cin >> bba;
                                // Chooses to do somethng after showering
                                if(bba == "yes" || bba == "Yes")
                                {

                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) Video Games" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    int bb2;
                                    cin >> bb2;
                                    //Chooses Homework
                                    if(bb2 == 3)
                                    {
                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news, " << name << " like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 22;

                                        }
                                        else
                                        {
                                        cout << "Bad news," << name << "your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                        cout << "Game Over. Play Again?" << "\n"; 
                                        return 23;
                                        }
                                    }
                                    //Chooses Games
                                    else if(bb2 == 1)
                                    {

                                        cout << "Ahhh we got ourselves a gamer. Alright, pick your poison " << name << "." << "\n";
                                        cout << "1) Tetris" << "\n";
                                        cout << "2) Destiny 2" << "\n";
                                        cout << "3) Valorant" << "\n";
                                        cout << "4) Some other, lamer, video game. Probably something like Genshin Impact" << "\n";
                                        int game;
                                        cin >> game;
                                        if(game == 1 || game == 2 || game == 3 || game == 4)
                                        {

                                            if(randomp1 == 1)
                                            {
                                                //High KD
                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 24;

                                            }
                                            else
                                            {
                                                //Low KD
                                                cout << "Dang " << name << "today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 25;
                                                
                                            }
                                        }
                                        else
                                        {

                                            cout << "Game Over. You didn't follow the directions." << "\n";
                                            return 26;
                                        }
                                    }
                                    // Chooses to read
                                    else if(bb2 == 2)
                                    {

                                        cout << "Lol are you a nerd " << name << " who reads these days? Whatever. What do you want to read?" << "\n";
                                        cout << "1) Coding for Dummies" << "\n";
                                        cout << "2) Surrounded by Idiots" << "\n";
                                        cout << "3) The book collecting dust on your shelf" << "\n";
                                        int book;
                                        cin >> book;
                                        if(book == 1 || book == 2 || book == 3)
                                        {

                                            if(randomp1 == 1)
                                            {

                                                cout << "You fall asleep happily after reading a good amount." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 27;

                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 28;

                                            }
                                        }    
                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 29;

                                    }
                                }

                            }
                            // Pooped 
                            else
                            {

                                cout << "Bad news " << name << ", you pooped yourself lol. You feverishly wipe yourself before taking a shower of shame." << "\n";
                                cout << "Will you end this embarassing day or continue on and do something else?" << "\n";
                                string bb3;
                                cout << "Done or Continue?" << bb3 << "\n";
                                cin >> bb3;
                                // Stay Up Route
                                if(bb3 == "Continue" || bb3 == "continue")
                                {

                                    int bb2;
                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) Video Games" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    cin >> bb2;
                                    // Homework
                                    if(bb2 == 3)
                                    {

                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news, " << name << " like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 22;

                                        }      
                                        else
                                        {

                                            cout << "Bad news," << name << "your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 23;

                                        } 
                                    }
                                    // Video Games
                                    else if(bb2 == 1)
                                    {

                                        cout << "Ahhh we got ourselves a gamer. Alright, pick your poison " << name << "." << "\n";
                                        cout << "1) Tetris" << "\n";
                                        cout << "2) Destiny 2" << "\n";
                                        cout << "3) Valorant" << "\n";
                                        cout << "4) Some other, lamer, video game. Probably something like Genshin Impact" << "\n";
                                        int game;
                                        cin >> game;
                                        if(game == 1 || game == 2 || game == 3 || game == 4)
                                        {

                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 24;

                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "Dang " << name << "today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 25;

                                            }
                                            else
                                            {

                                                cout << "Game Over. You didn't follow the directions." << "\n";
                                                return 26;
                                            }
                                        }   
                                    }
                                    // Reading Option 
                                    else if(bb2 == 2)
                                    {
                                        cout << "Lol are you a nerd " << name << " who reads these days? Whatever. What do you want to read?" << "\n";
                                        cout << "1) Coding for Dummies" << "\n";
                                        cout << "2) Surrounded by Idiots" << "\n";
                                        cout << "3) The book collecting dust on your shelf" << "\n";
                                        int book;
                                        cin >> book;
                                        if(book == 1 || book == 2 || book == 3)
                                        {

                                            if(randomp1 == 1)
                                    
                                            {

                                                cout << "You fall asleep happily after reading a good amount." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 27;

                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 28;

                                            }
                                            else
                                            {
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 29;
                                            }

                                        }

                                    }
                                    else 
                                    {

                                        cout << "Game Over. You didn't follow directions.";
                                        return 49;

                                    }
                                
                                }
                                else
                                {

                                    cout << "Alright then, goodnight!" << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 18;

                                }

                                

                            }
                        }
                        else if(sick == "shower" || sick == "Shower")
                        {

                            if(randomp1 == 1)
                            {

                                cout << "You had a good shower with no problems. Luckily you didn't throw up! Do you want to do anything before you go to bed?" << "\n";
                                string bb;
                                cout <<  "Yes or No?" << "\n";
                                cin >> bb;
                                if(bb == "Yes" || bb == "yes")
                                {
                                    int bb2;
                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) Video Games" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    cin >> bb2;
                                    // Homework
                                    if(bb2 == 3)
                                    {

                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news, " << name << " like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 22;

                                        }      
                                        else
                                        {

                                            cout << "Bad news," << name << "your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 23;

                                        } 
                                    }
                                    // Video Games
                                    else if(bb2 == 1)
                                    {

                                        cout << "Ahhh we got ourselves a gamer. Alright, pick your poison " << name << "." << "\n";
                                        cout << "1) Tetris" << "\n";
                                        cout << "2) Destiny 2" << "\n";
                                        cout << "3) Valorant" << "\n";
                                        cout << "4) Some other, lamer, video game. Probably something like Genshin Impact" << "\n";
                                        int game;
                                        cin >> game;
                                        if(game == 1 || game == 2 || game == 3 || game == 4)
                                        {

                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 24;

                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "Dang " << name << "today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 25;

                                            }
                                            else
                                            {

                                                cout << "Game Over. You didn't follow the directions." << "\n";
                                                return 26;
                                            }
                                        }   
                                    }
                                    // Reading Option 
                                    else if(bb2 == 2)
                                    {
                                        cout << "Lol are you a nerd " << name << " who reads these days? Whatever. What do you want to read?" << "\n";
                                        cout << "1) Coding for Dummies" << "\n";
                                        cout << "2) Surrounded by Idiots" << "\n";
                                        cout << "3) The book collecting dust on your shelf" << "\n";
                                        int book;
                                        cin >> book;
                                        if(book == 1 || book == 2 || book == 3)
                                        {

                                            if(randomp1 == 1)
                                    
                                            {

                                                cout << "You fall asleep happily after reading a good amount." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 27;

                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 28;

                                            }
                                            else
                                            {
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 29;
                                            }

                                        }

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 49;

                                    }


                                }
                                else
                                {

                                    cout << "Game over. You didn't follow directions." << "\n";

                                }
                                

                            }
                            else if(randomp1 == 0)
                            {

                                cout << "Bad news " << name << " you threw up in the shower. After quickly cleaning it up you get back to your room. Will you go to sleep to hide your shame?" << "\n";
                                string bb;
                                cout << "Yes or No" << "\n";
                                cin >> bb;
                                if(bb == "Yes" || bb == "yes")
                                {

                                    cout << "You go to sleep embarassed and sad." <<  "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 43;
                                }
                                else if(bb == "No" || bb == "no")
                                {
                                    
                                    int bb2;
                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) Video Games" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    cin >> bb2;
                                    // Homework
                                    if(bb2 == 3)
                                    {

                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news, " << name << " like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 22;

                                        }      
                                        else
                                        {

                                            cout << "Bad news," << name << "your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 23;

                                        } 
                                    }
                                    // Video Games
                                    else if(bb2 == 1)
                                    {

                                        cout << "Ahhh we got ourselves a gamer. Alright, pick your poison " << name << "." << "\n";
                                        cout << "1) Tetris" << "\n";
                                        cout << "2) Destiny 2" << "\n";
                                        cout << "3) Valorant" << "\n";
                                        cout << "4) Some other, lamer, video game. Probably something like Genshin Impact" << "\n";
                                        int game;
                                        cin >> game;
                                        if(game == 1 || game == 2 || game == 3 || game == 4)
                                        {

                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 24;

                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "Dang " << name << "today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 25;

                                            }
                                            else
                                            {

                                                cout << "Game Over. You didn't follow the directions." << "\n";
                                                return 26;
                                            }
                                        }   
                                    }
                                    // Reading Option 
                                    else if(bb2 == 2)
                                    {
                                        cout << "Lol are you a nerd " << name << " who reads these days? Whatever. What do you want to read?" << "\n";
                                        cout << "1) Coding for Dummies" << "\n";
                                        cout << "2) Surrounded by Idiots" << "\n";
                                        cout << "3) The book collecting dust on your shelf" << "\n";
                                        int book;
                                        cin >> book;
                                        if(book == 1 || book == 2 || book == 3)
                                        {

                                            if(randomp1 == 1)
                                    
                                            {

                                                cout << "You fall asleep happily after reading a good amount." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 27;

                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 28;

                                            }
                                            else
                                            {
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 29;
                                            }

                                        }
                                    }
                                    else 
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 45;

                                    }



                                }
                                else
                                {

                                    cout << "Game over. You didn't follow directions." << "\n";
                                    return 46;
                                    
                                }

                            }

                        }
                        else
                        {

                            cout << "Game Over. You didn't follow directions." << "\n";
                            return 40;

                        }

                    }

                }
                else 
                {

                    cout << "Game Over. You didn't follow directions." << "\n";
                    return 19;

                }

            }
            else if(dinner == "No" || dinner == "no")
            {

                cout << "Arlight then, goodnight!" << "\n";
                cout << "Game Over. Play Again?" << "\n";
                return 20;

            }
            else
            {

                cout << "Game Over. You didn't follow directions." << "\n";
                return 21;

            }

        }
        //Chooses to Go to Class
        else if(c1 == 2)
        {
           if(randomp1 == 1)
           {
                // Late   
                cout << "Bad news " << name << " you are late to clss! What a bummer. After class finishes do you wanna eat dinner? This is your only chance to do so." << "\n";
                string dindin;
                cout << "Yes or No" << "\n";
                cin >> dindin;
                // Eats
                if(dindin == "yes" || dindin == "Yes")
                {
                    //Where to eat
                    cout << "1) Calabaloos" << "\n";
                    cout << "2) East Side Eats" << "\n";
                    cout << "3) La Salle" << "\n";
                    int eat;
                    cin >> eat;
                    // Random Eat Option
                    if(eat == 1 || eat == 2 || eat == 3)
                    {

                        int full = rand() % 3;

                        if(full == 1)
                        {
                            // Good Food
                            cout << "What great food provided by Oregon State University Housing and Dining! You left the dining hall feeling satisfied and ready to go back to sleep. Will you shower before you sleep?" << "\n";
                            string shower;
                            cout << "Yes or No?" << shower << "\n";
                            cin >> shower;
                            if(shower == "yes" || shower == "Yes")
                            {
                                // Gonna shower
                                cout << "Good job " << name << ", I was worried at first because you got to class late, but it seems like you have your head on straight. Anything else you wanna do before you go to bed?" << "\n";
                                string bb;
                                cout << "Yes or No?" << bb << "\n";
                                cin >> bb;
                                // Do more stuff
                                if(bb == "yes" || bb =="Yes")
                                {

                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) Video Games" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    int bb2;
                                    cin >> bb2;
                                    // Homework
                                    if(bb2 == 3)
                                    {

                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news, " << name << " like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 22;

                                        }
                                        else
                                        {

                                            cout << "Bad news," << name << "your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 23;

                                        } 

                                    }
                                    // Video Games
                                    else if(bb2 == 1)
                                    {

                                        cout << "Ahhh we got ourselves a gamer. Alright, pick your poison " << name << "." << "\n";
                                        cout << "1) Tetris" << "\n";
                                        cout << "2) Destiny 2" << "\n";
                                        cout << "3) Valorant" << "\n";
                                        cout << "4) Some other, lamer, video game. Probably something like Genshin Impact" << "\n";
                                        int game;
                                        cin >> game;
                                        if(game == 1 || game == 2 || game == 3 || game == 4)
                                        {

                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 24;

                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "Dang " << name << "today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 25;

                                            }
                                            else
                                            {
                                                cout << "Game Over. You didn't follow the directions." << "\n";
                                                return 26;
                                            }
                                        }
                                    }
                                
                                    // Reading
                                    else if(bb2 == 2)
                                    {

                                        cout << "Lol are you a nerd " << name << " who reads these days? Whatever. What do you want to read?" << "\n";
                                        cout << "1) Coding for Dummies" << "\n";
                                        cout << "2) Surrounded by Idiots" << "\n";
                                        cout << "3) The book collecting dust on your shelf" << "\n";
                                        int book;
                                        cin >> book;
                                        if(book == 1 || book == 2 || book == 3)
                                        {

                                            if(randomp1 == 1)
                                            {

                                                cout << "You fall asleep happily after reading a good amount." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 27;

                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 28;

                                            }
                                        }
                                        else
                                        {
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 29;
                                        }
                                    }
                                else
                                {

                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 45;

                                }

                            }
                            // Doesn't wanna do stuff after
                            else if(bb == "No" || bb == "no")
                            {

                                cout << "Alright then, goodnight!" << "\n";
                                cout << "Game Over. Play Again?" << "\n";
                                return 30;

                            }
                            else
                            {

                                cout << "Game Over. You don't know how to follow directions";
                                return 31;

                            }

                        cout << "As per usual, you feel sick! That's just great isn't it. Will you go to the bathroom or shower first?" << "\n";
                        string sick;
                        cout << "Bathroom or Shower?" << sick << "\n";
                        cin >> sick;
                        // Bathroom
                        if(sick == "bathroom" || sick == "Bathroom")
                        {

                            if(randomp1 > 0)
                            {
                                // Didn't poop yourself
                                cout << "Congrats " << name << ", you made it to the bathroom safe and sound. After a nice relaxing shower you head back to the room." <<"\n";
                                string bba;
                                cout << "Anything else you want to do before bed?" << "\n";
                                cout << "Yes or No" << "\n";
                                // Choose to do something after
                                if(bba == "yes" || bba == "Yes")
                                {

                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) Video Games" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    int bb2;
                                    cin >> bb2;
                        
                                    // Homework
                                    if(bb2 == 3)
                                    {

                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news, " << name << " like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 32;

                                        }
                                        else
                                        {

                                            cout << "Bad news," << name << " your high school work habits continue you to haunt you, and you literally finish zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 33;

                                        } 

                                    }
                                    // Video Games
                                    else if(bb2 == 1)
                                    {

                                        cout << "Ahhh we got ourselves a gamer. Alright, pick your poison " << name << "." << "\n";
                                        cout << "1) Tetris" << "\n";
                                        cout << "2) Destiny 2" << "\n";
                                        cout << "3) Valorant" << "\n";
                                        cout << "4) Some other, lamer, video game. Probably something like Genshin Impact" << "\n";
                                        int game;
                                        cin >> game;
                                        if(game == 1 || game == 2 || game == 3 || game == 4)
                                        {

                                            if(randomp1 == 1)
                                            {

                                            cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 24;

                                            }
                                        
                                            else if(randomp1 == 0)
                                            {

                                                cout << "Dang " << name << "today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 25;

                                            }
                                            else
                                            {

                                            cout << "Game Over. You didn't follow the directions." << "\n";
                                            return 26;
                                        
                                            }
                                        }
                                    }
                                    // Reading
                                    else if(bb2 == 2)
                                    {

                                        cout << "Lol are you a nerd " << name << " who reads these days? Whatever. What do you want to read?" << "\n";
                                        cout << "1) Coding for Dummies" << "\n";
                                        cout << "2) Surrounded by Idiots" << "\n";
                                        cout << "3) The book collecting dust on your shelf" << "\n";
                                        int book;
                                        cin >> book;
                                        if(book == 1 || book == 2 || book == 3)
                                        {

                                            if(randomp1 == 1)
                                            {

                                                cout << "You fall asleep happily after reading a good amount." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 27;

                                            }
                                        }
                                        else if(randomp1 == 0)
                                        {

                                            cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 28;

                                        }

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 29;

                                    }

                                }

                            }
                            else
                            {
                                // Pooped Yourself
                                cout << "Bad news " << name << ", you pooped yourself lol. You feverishly wipe yourself before taking a shower of shame." << "\n";
                                cout << "Will you end this embarassing day or continue on and do something else?" << "\n";
                                string bb3;
                                cout << "Done or Continue?" << bb3 << "\n";
                                // Chooses to continue
                                if(bb3 == "Continue" || bb3 == "continue")
                                {

                                    int bb2;
                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) Video Games" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    cin >> bb2;

                                    // Homework
                                    if(bb2 == 3)
                                    {

                                        if(randomp1 == 1 )
                                        {

                                            cout << "Good news, " << name << " like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 35;

                                        }
                                        else
                                        {

                                            cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 36;

                                        } 

                                    }
                                     // Video Games
                                    else if(bb2 == 1)
                                    {

                                        cout << "Ahhh we got ourselves a gamer. Alright, pick your poison " << name << "." << "\n";
                                        cout << "1) Tetris" << "\n";
                                        cout << "2) Destiny 2" << "\n";
                                        cout << "3) Valorant" << "\n";
                                        cout << "4) Some other, lamer, video game. Probably something like Genshin Impact" << "\n";
                                        int game;
                                        cin >> game;
                                        if(game == 1 || game == 2 || game == 3 || game == 4)
                                        {

                                            if(randomp1 == 1)
                                            {

                                            cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 24;

                                            }
                                        
                                            else if(randomp1 == 0)
                                            {

                                                cout << "Dang " << name << "today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 25;

                                            }
                                            else
                                            {

                                            cout << "Game Over. You didn't follow the directions." << "\n";
                                            return 26;
                                        
                                            }
                                        }
                                    }
                                    // Reading
                                    else if(bb2 == 2)
                                    {

                                        cout << "Lol are you a nerd " << name << " who reads these days? Whatever. What do you want to read?" << "\n";
                                        cout << "1) Coding for Dummies" << "\n";
                                        cout << "2) Surrounded by Idiots" << "\n";
                                        cout << "3) The book collecting dust on your shelf" << "\n";
                                        int book;
                                        cin >> book;
                                        if(book == 1 || book == 2 || book == 3)
                                        {

                                            if(randomp1 == 1)
                                            {

                                                cout << "You fall asleep happily after reading a good amount." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 27;

                                            }
                                        }
                                        else if(randomp1 == 0)
                                        {

                                            cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 28;

                                        }

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 29;

                                    }

                                }
                                else if(bb3 == "Done" || bb3 == "done")
                                {

                                    cout << "Alright then, goodnight!" << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 37;

                                }
                                else{

                                 cout << "Game Over. You didn't follow directions." << "\n";
                                 return 38;  

                                }

                            }

                        }
                        else if(sick == "shower" || sick == "Shower")
                        {

                            if(randomp1 == 1)
                            {

                                cout << "You had a good shower with no problems. Luckily you didn't throw up! Do you want to do anything before you go to bed?" << "\n";
                                string bb;
                                cout <<  "Yes or No?" << "\n";
                                cin >> bb;
                                if(bb == "Yes" || bb == "yes")
                                {
                                    int bb2;
                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) Video Games" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    cin >> bb2;
                                    // Homework
                                    if(bb2 == 3)
                                    {

                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news, " << name << " like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 22;

                                        }      
                                        else
                                        {

                                            cout << "Bad news," << name << "your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 23;

                                        } 
                                    }
                                    // Video Games
                                    else if(bb2 == 1)
                                    {

                                        cout << "Ahhh we got ourselves a gamer. Alright, pick your poison " << name << "." << "\n";
                                        cout << "1) Tetris" << "\n";
                                        cout << "2) Destiny 2" << "\n";
                                        cout << "3) Valorant" << "\n";
                                        cout << "4) Some other, lamer, video game. Probably something like Genshin Impact" << "\n";
                                        int game;
                                        cin >> game;
                                        if(game == 1 || game == 2 || game == 3 || game == 4)
                                        {

                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 24;

                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "Dang " << name << "today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 25;

                                            }
                                            else
                                            {

                                                cout << "Game Over. You didn't follow the directions." << "\n";
                                                return 26;
                                            }
                                        }   
                                    }
                                    // Reading Option 
                                    else if(bb2 == 2)
                                    {
                                        cout << "Lol are you a nerd " << name << " who reads these days? Whatever. What do you want to read?" << "\n";
                                        cout << "1) Coding for Dummies" << "\n";
                                        cout << "2) Surrounded by Idiots" << "\n";
                                        cout << "3) The book collecting dust on your shelf" << "\n";
                                        int book;
                                        cin >> book;
                                        if(book == 1 || book == 2 || book == 3)
                                        {

                                            if(randomp1 == 1)
                                    
                                            {

                                                cout << "You fall asleep happily after reading a good amount." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 27;

                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 28;

                                            }
                                            else
                                            {
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 29;
                                            }

                                        }

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";

                                    }


                                }
                                else
                                {

                                    cout << "Game over. You didn't follow directions." << "\n";

                                }
                                

                            }
                            else if(randomp1 == 0)
                            {

                                cout << "Bad news " << name << " you threw up in the shower. After quickly cleaning it up you get back to your room. Will you go to sleep to hide your shame?" << "\n";
                                string bb;
                                cout << "Yes or No" << "\n";
                                cin >> bb;
                                if(bb == "Yes" || bb == "yes")
                                {

                                    cout << "You go to sleep embarassed and sad." <<  "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 43;
                                }
                                else if(bb == "No" || bb == "no")
                                {
                                    
                                    int bb2;
                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) Video Games" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    cin >> bb2;
                                    // Homework
                                    if(bb2 == 3)
                                    {

                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news, " << name << " like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 22;

                                        }      
                                        else
                                        {

                                            cout << "Bad news," << name << "your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 23;

                                        } 
                                    }
                                    // Video Games
                                    else if(bb2 == 1)
                                    {

                                        cout << "Ahhh we got ourselves a gamer. Alright, pick your poison " << name << "." << "\n";
                                        cout << "1) Tetris" << "\n";
                                        cout << "2) Destiny 2" << "\n";
                                        cout << "3) Valorant" << "\n";
                                        cout << "4) Some other, lamer, video game. Probably something like Genshin Impact" << "\n";
                                        int game;
                                        cin >> game;
                                        if(game == 1 || game == 2 || game == 3 || game == 4)
                                        {

                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 24;

                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "Dang " << name << "today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 25;

                                            }
                                            else
                                            {

                                                cout << "Game Over. You didn't follow the directions." << "\n";
                                                return 26;
                                            }
                                        }   
                                    }
                                    // Reading Option 
                                    else if(bb2 == 2)
                                    {
                                        cout << "Lol are you a nerd " << name << " who reads these days? Whatever. What do you want to read?" << "\n";
                                        cout << "1) Coding for Dummies" << "\n";
                                        cout << "2) Surrounded by Idiots" << "\n";
                                        cout << "3) The book collecting dust on your shelf" << "\n";
                                        int book;
                                        cin >> book;
                                        if(book == 1 || book == 2 || book == 3)
                                        {

                                            if(randomp1 == 1)
                                    
                                            {

                                                cout << "You fall asleep happily after reading a good amount." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 27;

                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 28;

                                            }
                                            else
                                            {
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 29;
                                            }

                                        }
                                    }
                                    else 
                                    {

                                        cout << "Game Over. You didn't follow the directions" << "\n";
                                        return 49;

                                    }



                                }
                                else
                                {

                                    cout << "Game over. You didn't follow directions." << "\n";
                                    return 46;

                                }

                            }

                        }

                    }

                }
                else
                {

                    cout << "Game Over. You don't know how to follow directions." << "\n";
                    return 38;
                }

            }
            else if(randomp1 == 0)
            {

                cout << "Good news, you made it to class on time? Do you wannna eat dinner after that successful class? This will be your only chance to do so." << "\n";
                string dindin;
                cout << "Yes or No" << "\n";
                cin >> dindin;
                // Eats
                if(dindin == "yes" || dindin == "Yes")
                {
                    //Where to eat
                    cout << "1) Calabaloos" << "\n";
                    cout << "2) East Side Eats" << "\n";
                    cout << "3) La Salle" << "\n";
                    int eat;
                    cin >> eat;
                    // Random Eat Option
                    if(eat == 1 || eat == 2 || eat == 3)
                    {

                        int full = rand() % 3;

                        if(full == 1)
                        {
                            // Good Food
                            cout << "What great food provided by Oregon State University Housing and Dining! You left the dining hall feeling satisfied and ready to go back to sleep. Will you shower before you sleep?" << "\n";
                            string shower;
                            cout << "Yes or No?" << shower << "\n";
                            cin >> shower;
                            if(shower == "yes" || shower == "Yes")
                            {
                            // Gonna shower
                            cout << "Good job " << name << ", you clearly have your head on straight. Anything else you wanna do before you go to bed?" << "\n";
                            string bb;
                            cout << "Yes or No?" << bb << "\n";
                            cin >> bb;
                            // Do more stuff
                            if(bb == "yes" || bb =="Yes")
                            {

                                cout << "Geez fine, what did you wanna do then?" << "\n";
                                cout << "1) Video Games" << "\n";
                                cout << "2) Read" << "\n";
                                cout << "3) Homework" << "\n";
                                int bb2;
                                cin >> bb2;
                                // Homework
                                if(bb2 == 3)
                                {

                                    if(randomp1 != 1)
                                    {

                                        cout << "Good news, " << name << " like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 22;

                                    }
                                    else
                                    {

                                        cout << "Bad news," << name << "your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                        cout << "Game Over. Play Again?" << "\n"; 
                                        return 23;

                                    } 

                                }
                                // Video Games
                                else if(bb2 == 1)
                                {

                                    cout << "Ahhh we got ourselves a gamer. Alright, pick your poison " << name << "." << "\n";
                                    cout << "1) Tetris" << "\n";
                                    cout << "2) Destiny 2" << "\n";
                                    cout << "3) Valorant" << "\n";
                                    cout << "4) Some other, lamer, video game. Probably something like Genshin Impact" << "\n";
                                    int game;
                                    cin >> game;
                                    if(game == 1 || game == 2 || game == 3 || game == 4)
                                    {

                                        if(randomp1 == 1)
                                        {

                                            cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 24;

                                        }
                                        else if(randomp1 == 0)
                                        {

                                            cout << "Dang " << name << "today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 25;

                                        }
                                        else
                                        {
                                        cout << "Game Over. You didn't follow the directions." << "\n";
                                        return 26;
                                        }
                                    }

                                }
                                // Reading
                                else if(bb2 == 2)
                                {

                                    cout << "Lol are you a nerd " << name << " who reads these days? Whatever. What do you want to read?" << "\n";
                                    cout << "1) Coding for Dummies" << "\n";
                                    cout << "2) Surrounded by Idiots" << "\n";
                                    cout << "3) The book collecting dust on your shelf" << "\n";
                                    int book;
                                    cin >> book;
                                    if(book == 1 || book == 2 || book == 3)
                                    {

                                        if(randomp1 == 1)
                                        {

                                            cout << "You fall asleep happily after reading a good amount." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 27;

                                        }
                                        else if(randomp1 == 0)
                                        {

                                            cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 28;

                                        }

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 29;

                                    }

                                }
                                else
                                {

                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 45;

                                }

                            }
                            // Doesn't wanna do stuff after
                            else if(bb == "No" || bb == "no")
                            {

                                cout << "Alright then, goodnight!" << "\n";
                                cout << "Game Over. Play Again?" << "\n";
                                return 30;

                            }
                            else
                            {

                                cout << "Game Over. You don't know how to follow directions";
                                return 31;

                            }


                        }
                        
                        }
                        else
                        {
                        
                        }

                        cout << "As per usual, you feel sick! That's just great isn't it. Will you go to the bathroom or shower first?" << "\n";
                        string sick;
                        cout << "Bathroom or Shower?" << sick << "\n";
                        cin >> sick;
                        // Bathroom
                        if(sick == "bathroom" || sick == "Bathroom")
                        {

                            if(randomp1 > 0)
                            {
                                // Didn't poop yourself
                                cout << "Congrats " << name << ", you made it to the bathroom safe and sound. After a nice relaxing shower you head back to the room." <<"\n";
                                string bba;
                                cout << "Anything else you want to do before bed?" << "\n";
                                cout << "Yes or No" << "\n";
                                // Choose to do something after
                                if(bba == "yes" || bba == "Yes")
                                {

                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) Video Games" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    int bb2;
                                    cin >> bb2;
                        
                                    // Homework
                                    if(bb2 == 3)
                                    {

                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news, " << name << " like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 32;

                                        }
                                        else
                                        {

                                            cout << "Bad news," << name << " your high school work habits continue you to haunt you, and you literally finish zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 33;

                                        } 

                                    }
                                    // Video Games
                                    else if(bb2 == 1)
                                    {

                                        cout << "Ahhh we got ourselves a gamer. Alright, pick your poison " << name << "." << "\n";
                                        cout << "1) Tetris" << "\n";
                                        cout << "2) Destiny 2" << "\n";
                                        cout << "3) Valorant" << "\n";
                                        cout << "4) Some other, lamer, video game. Probably something like Genshin Impact" << "\n";
                                        int game;
                                        cin >> game;
                                        if(game == 1 || game == 2 || game == 3 || game == 4)
                                        {

                                            if(randomp1 == 1)
                                            {

                                            cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 24;

                                            }
                                        
                                            else if(randomp1 == 0)
                                            {

                                                cout << "Dang " << name << "today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 25;

                                            }
                                            else
                                            {

                                            cout << "Game Over. You didn't follow the directions." << "\n";
                                            return 26;
                                        
                                            }
                                        }
                                    }
                                    // Reading
                                    else if(bb2 == 2)
                                    {

                                        cout << "Lol are you a nerd " << name << " who reads these days? Whatever. What do you want to read?" << "\n";
                                        cout << "1) Coding for Dummies" << "\n";
                                        cout << "2) Surrounded by Idiots" << "\n";
                                        cout << "3) The book collecting dust on your shelf" << "\n";
                                        int book;
                                        cin >> book;
                                        if(book == 1 || book == 2 || book == 3)
                                        {

                                            if(randomp1 == 1)
                                            {

                                                cout << "You fall asleep happily after reading a good amount." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 27;

                                            }
                                        }
                                        else if(randomp1 == 0)
                                        {

                                            cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 28;

                                        }

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 29;

                                    }

                                }

                            }
                            else
                            {
                                // Pooped Yourself
                                cout << "Bad news " << name << ", you pooped yourself lol. You feverishly wipe yourself before taking a shower of shame." << "\n";
                                cout << "Will you end this embarassing day or continue on and do something else?" << "\n";
                                string bb3;
                                cout << "Done or Continue?" << bb3 << "\n";
                                // Chooses to continue
                                if(bb3 == "Continue" || bb3 == "continue")
                                {

                                    int bb2;
                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) Video Games" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    cin >> bb2;

                                    // Homework
                                    if(bb2 == 3)
                                    {

                                        if(randomp1 == 1 )
                                        {

                                            cout << "Good news, " << name << " like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 35;

                                        }
                                        else
                                        {

                                            cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 36;

                                        } 

                                    }
                                     // Video Games
                                    else if(bb2 == 1)
                                    {

                                        cout << "Ahhh we got ourselves a gamer. Alright, pick your poison " << name << "." << "\n";
                                        cout << "1) Tetris" << "\n";
                                        cout << "2) Destiny 2" << "\n";
                                        cout << "3) Valorant" << "\n";
                                        cout << "4) Some other, lamer, video game. Probably something like Genshin Impact" << "\n";
                                        int game;
                                        cin >> game;
                                        if(game == 1 || game == 2 || game == 3 || game == 4)
                                        {

                                            if(randomp1 == 1)
                                            {

                                            cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 24;

                                            }
                                        
                                            else if(randomp1 == 0)
                                            {

                                                cout << "Dang " << name << "today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 25;

                                            }
                                            else
                                            {

                                            cout << "Game Over. You didn't follow the directions." << "\n";
                                            return 26;
                                        
                                            }
                                        }
                                    }
                                    // Reading
                                    else if(bb2 == 2)
                                    {

                                        cout << "Lol are you a nerd " << name << " who reads these days? Whatever. What do you want to read?" << "\n";
                                        cout << "1) Coding for Dummies" << "\n";
                                        cout << "2) Surrounded by Idiots" << "\n";
                                        cout << "3) The book collecting dust on your shelf" << "\n";
                                        int book;
                                        cin >> book;
                                        if(book == 1 || book == 2 || book == 3)
                                        {

                                            if(randomp1 == 1)
                                            {

                                                cout << "You fall asleep happily after reading a good amount." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 27;

                                            }
                                        }
                                        else if(randomp1 == 0)
                                        {

                                            cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 28;

                                        }

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 29;

                                    }

                                }
                                else if(bb3 == "Done" || bb3 == "done")
                                {

                                    cout << "Alright then, goodnight!" << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 37;

                                }
                                else{

                                 cout << "Game Over. You didn't follow directions." << "\n";
                                 return 38;  

                                }

                            }

                        }
                        else if(sick == "shower" || sick == "Shower")
                        {

                            if(randomp1 == 1)
                            {

                                cout << "You had a good shower with no problems. Luckily you didn't throw up! Do you want to do anything before you go to bed?" << "\n";
                                string bb;
                                cout <<  "Yes or No?" << "\n";
                                cin >> bb;
                                if(bb == "Yes" || bb == "yes")
                                {
                                    int bb2;
                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) Video Games" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    cin >> bb2;
                                    // Homework
                                    if(bb2 == 3)
                                    {

                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news, " << name << " like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 22;

                                        }      
                                        else
                                        {

                                            cout << "Bad news," << name << "your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 23;

                                        } 
                                    }
                                    // Video Games
                                    else if(bb2 == 1)
                                    {

                                        cout << "Ahhh we got ourselves a gamer. Alright, pick your poison " << name << "." << "\n";
                                        cout << "1) Tetris" << "\n";
                                        cout << "2) Destiny 2" << "\n";
                                        cout << "3) Valorant" << "\n";
                                        cout << "4) Some other, lamer, video game. Probably something like Genshin Impact" << "\n";
                                        int game;
                                        cin >> game;
                                        if(game == 1 || game == 2 || game == 3 || game == 4)
                                        {

                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 24;

                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "Dang " << name << "today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 25;

                                            }
                                            else
                                            {

                                                cout << "Game Over. You didn't follow the directions." << "\n";
                                                return 26;
                                            }
                                        }   
                                    }
                                    // Reading Option 
                                    else if(bb2 == 2)
                                    {
                                        cout << "Lol are you a nerd " << name << " who reads these days? Whatever. What do you want to read?" << "\n";
                                        cout << "1) Coding for Dummies" << "\n";
                                        cout << "2) Surrounded by Idiots" << "\n";
                                        cout << "3) The book collecting dust on your shelf" << "\n";
                                        int book;
                                        cin >> book;
                                        if(book == 1 || book == 2 || book == 3)
                                        {

                                            if(randomp1 == 1)
                                    
                                            {

                                                cout << "You fall asleep happily after reading a good amount." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 27;

                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 28;

                                            }
                                            else
                                            {
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 29;
                                            }

                                        }

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";

                                    }


                                }
                                else
                                {

                                    cout << "Game over. You didn't follow directions." << "\n";

                                }
                                

                            }
                            else if(randomp1 == 0)
                            {

                                cout << "Bad news " << name << " you threw up in the shower. After quickly cleaning it up you get back to your room. Will you go to sleep to hide your shame?" << "\n";
                                string bb;
                                cout << "Yes or No" << "\n";
                                cin >> bb;
                                if(bb == "Yes" || bb == "yes")
                                {

                                    cout << "You go to sleep embarassed and sad." <<  "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 43;
                                }
                                else if(bb == "No" || bb == "no")
                                {
                                    
                                    int bb2;
                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) Video Games" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    cin >> bb2;
                                    // Homework
                                    if(bb2 == 3)
                                    {

                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news, " << name << " like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 22;

                                        }      
                                        else
                                        {

                                            cout << "Bad news," << name << "your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 23;

                                        } 
                                    }
                                    // Video Games
                                    else if(bb2 == 1)
                                    {

                                        cout << "Ahhh we got ourselves a gamer. Alright, pick your poison " << name << "." << "\n";
                                        cout << "1) Tetris" << "\n";
                                        cout << "2) Destiny 2" << "\n";
                                        cout << "3) Valorant" << "\n";
                                        cout << "4) Some other, lamer, video game. Probably something like Genshin Impact" << "\n";
                                        int game;
                                        cin >> game;
                                        if(game == 1 || game == 2 || game == 3 || game == 4)
                                        {

                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 24;

                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "Dang " << name << "today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 25;

                                            }
                                            else
                                            {

                                                cout << "Game Over. You didn't follow the directions." << "\n";
                                                return 26;
                                            }
                                        }   
                                    }
                                    // Reading Option 
                                    else if(bb2 == 2)
                                    {
                                        cout << "Lol are you a nerd " << name << " who reads these days? Whatever. What do you want to read?" << "\n";
                                        cout << "1) Coding for Dummies" << "\n";
                                        cout << "2) Surrounded by Idiots" << "\n";
                                        cout << "3) The book collecting dust on your shelf" << "\n";
                                        int book;
                                        cin >> book;
                                        if(book == 1 || book == 2 || book == 3)
                                        {

                                            if(randomp1 == 1)
                                    
                                            {

                                                cout << "You fall asleep happily after reading a good amount." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 27;

                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 28;

                                            }
                                            else
                                            {
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 29;
                                            }

                                        }
                                    }
                                    else 
                                    {

                                        cout << "Game Over. You didn't follow the directions" << "\n";
                                        return 49;

                                    }



                                }
                                else
                                {

                                    cout << "Game over. You didn't follow directions." << "\n";
                                    return 46;

                                }

                            }

                        }

                    }

                }
                else
                {

                    cout << "Game Over. You don't know how to follow directions." << "\n";
                    return 38;
                }
                

            }
            else
            {

                cout << "Game Over. You didn't follow directions." << "\n";
                return 39;
            }    
        }
           
    }
    //Woke Up Early
    else
    {

        cout << "Good news " << name << ", you woke up early! What do you wanna do today?" << "\n";  

    }
}
