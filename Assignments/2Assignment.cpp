/******************************************************************************
 * Program Filename: 2Assignment
 * Author: Stryder Garrett
 * Date: 04/24/2022
 * Description: College Day Simulator 
 * Input: Name, Various Path Decisions
 * Outup: Name, Outcomes Based on Decisions
 * ****************************************************************************/
#include <unistd.h>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{

    // Intro Phase
    cout << "Hello Welcome to the College Day Simulator" << "\n";
    string name;
    cout << "Enter your first name here: " << name << "\n";
    cin >> name;

    // Reoccuring Variables for Adventure
    srand(time(NULL));
    int wake = rand() % 1;
    int randomp1 = rand() % 2;
    double kd = rand() % 1 + rand() % 100 * 0.01;
    double cracked = (double)((rand() % 6) + 5.0) + rand() % 100 * 0.01;
    cout << cracked << endl;
    cout << cracked << endl;
    
    // Woke Up Late
    if(wake == 1)
    {

        cout << "Oh no " << name << ", you woke up late! What do you wanna do today?" << "\n";
        int c1;
        cout << "1) Eh. I'll go back to sleep, who needs school anyways." << "\n";
        cout << "2) Ohmigod! I can't miss ENG 103, I need to rush to get ready now!" << "\n";
        cin >> c1;

        // Chooses Sleep
        if(c1 ==1)
        {

           cout << "You go back to sleep happily, without a care in the world. Will you wake up for dinner " << name << "?" << "\n";
           string dinner;
           cout << "Yes or No" << dinner << "\n";
           cin >> dinner;

            //Chooses to eat dinner
            if(dinner == "Yes" || dinner == "yes")
            {

                // Eating Options
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

                            //Before Bed Prompt
                            cout << "Good job " << name << ", I was worried at first because you didn't go to class, but it seems like you have your head on straight. Anything else you wanna do before you go to bed?" << "\n";
                            string bb;
                            cout << "Yes or No?" << bb << "\n";
                            cin >> bb;

                            // Do Stuff Before Bed
                            if(bb == "yes" || bb =="Yes")
                            {

                                //Before Bed Options
                                cout << "Geez fine, what did you wanna do then?" << "\n";
                                cout << "1) VideoGames" << "\n";
                                cout << "2) Read" << "\n";
                                cout << "3) Homework" << "\n";
                                string bb2;
                                cin >> bb2;

                                // Chooses Video Games
                                if(bb2 == "VideoGames" || bb2 == "videogames" || bb2  == "Videogames" || bb2 == "videoGames")
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

                                        // Cracked Day
                                        if(randomp1 == 1)
                                        {

                                            cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        // Noob Day
                                        else
                                        {

                                            cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }

                                    }
                                    else
                                    {
                                        // Didn't Follow Directiosn
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1; 

                                    }

                                }
                                // Chooses to Read
                                else if(bb2 == "Read" || bb2 == "read")
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
                                            return 0;
                                        }
                                        else if(randomp1 == 0)
                                        {

                                            cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }

                                    }
                                    else
                                    {

                                       // Didn't Follow Directiosn
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;  

                                    }

                                }
                                // Chooses to do Homework
                                else if(bb2 == "Homework" || bb2 == "homework")
                                {
                                    // Good Homework
                                    if(randomp1 != 1)
                                    {

                                        cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }
                                    // Bad Homework
                                    else
                                    {

                                        cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                        cout << "Game Over. Play Again?" << "\n"; 
                                        return 0;
                                    } 

                                }
                                else
                                {
                                    // Didn't follow directions
                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1;

                                }


                            }
                            // No Stuff Before Bed
                            else if(bb == "No" || bb == "no")
                            {

                                cout << "Alright then, goodnight!" << "\n";
                                cout << "Game Over. Play Again?" << "\n";
                                return 0;

                            }
                            else
                            {
                                // Didn't follow directions
                                cout << "Game Over. You didn't follow directions." << "\n";
                                return 1;

                            }

                        }
                        else if(shower == "no" || shower == "No")
                        {

                            cout << "Ew that's kinda gross, but I won't judge I guess. Anything else you want to do before bed?" << "\n";
                            cout << "Yes or No?" << "\n";
                            string choice;
                            cin >> choice;

                            // Do Stuff Before Bed
                            if(choice == "Yes" || choice == "yes")
                            {

                                //Before Bed Options
                                cout << "Geez fine, what did you wanna do then?" << "\n";
                                cout << "1) VideoGames" << "\n";
                                cout << "2) Read" << "\n";
                                cout << "3) Homework" << "\n";
                                string bb2;
                                cin >> bb2;

                                // Chooses Video Games
                                if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                        // Cracked Day
                                        if(randomp1 == 1)
                                        {

                                            cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        // Noob Day
                                        else
                                        {

                                            cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }

                                    }
                                    else
                                    {
                                        // Didn't Follow Directiosn
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1; 

                                    }

                                }
                                // Chooses to Read
                                else if(bb2 == "Read" || bb2 == "read")
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
                                            return 0;
                                        }
                                        else if(randomp1 == 0)
                                        {

                                            cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }

                                    }
                                    else
                                    {

                                       // Didn't Follow Directiosn
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;  

                                    }

                                }
                                // Chooses to do Homework
                                else if(bb2 == "Homework" || bb2 == "homework")
                                {
                                    // Good Homework
                                    if(randomp1 != 1)
                                    {

                                        cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }
                                    // Bad Homework
                                    else
                                    {

                                        cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                        cout << "Game Over. Play Again?" << "\n"; 
                                        return 0;
                                    } 

                                }
                                else
                                {
                                    // Didn't follow directions
                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1;

                                }

                            }
                            else if(choice == "no" || choice == "No")
                            {

                                cout << "Alright then, goodnight!" << "\n";
                                cout << "Game Over. Play Again?" << "\n";
                                return 0;

                            }
                            else
                            {

                                // Didn't follow directions
                                cout << "Game Over. You didn't follow directions." << "\n";
                                return 1;

                            }

                        }
                        else
                        {

                            // Didn't follow directions
                            cout << "Game Over. You didn't follow directions." << "\n";
                            return 1;

                        }
                    }
                    // Bad Food Route
                    else if(full == 0)
                    {

                        cout << "As per usual, you feel sick! That's just great isn't it. Will you go to the bathroom or shower first?" << "\n";
                        string sick;
                        cout << "Bathroom or Shower?" << sick << "\n";
                        cin >> sick;

                        // Bathroom Route
                        if(sick == "bathroom" || sick == "Bathroom")
                        {
                            
                            // Poop or No Poop
                            if(randomp1 > 0)
                            {

                                // Didn't poop yourself
                                cout << "Congrats " << name << ", you made it to the bathroom safe and sound. After a nice relaxing shower you head back to the room." <<"\n";
                                string bb2;
                                cout << "Anything else you want to do before bed?" << "\n";
                                cout << "Yes or No" << "\n";
                                cin >> bb2;

                                // Chooses to do somethng after showering
                                if(bb2 == "yes" || bb2 == "Yes")
                                {

                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) VideoGames" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    string bb2;
                                    cin >> bb2;

                                    // Chooses Video Games
                                    if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                            // Cracked Day
                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Noob Day
                                            else
                                            {

                                                cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {
                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1; 

                                        }

                                    }
                                    // Chooses to Read
                                    else if(bb2 == "Read" || bb2 == "read")
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
                                                return 0;
                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {

                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;  

                                        }

                                    }
                                    // Chooses to do Homework
                                    else if(bb2 == "Homework" || bb2 == "homework")
                                    {
                                        // Good Homework
                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        // Bad Homework
                                        else
                                        {

                                            cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 0;
                                        } 

                                    }
                                    else
                                    {
                                        // Didn't follow directions
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;

                                    }
                                }
                                // Nothing After Shower
                                else if(bb2 == "No" || bb2 =="no")
                                {

                                    cout << "Alright then, goodnight!" << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }

                            }
                            // Pooped Yourself
                            else
                            {

                                cout << "Bad news " << name << ", you pooped yourself lol. You feverishly wipe yourself before taking a shower of shame." << "\n";
                                cout << "Will you end this embarassing day or continue on and do something else?" << "\n";
                                string bb3;
                                cout << "Done or Continue?" << bb3 << "\n";
                                cin >> bb3;

                                if(bb3 == "continue" || bb3 == "Continue")
                                {

                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) VideoGames" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    string bb2;
                                    cin >> bb2;

                                    // Chooses Video Games
                                    if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                            // Cracked Day
                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Noob Day
                                            else
                                            {

                                                cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {
                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1; 

                                        }

                                    }
                                    // Chooses to Read
                                    else if(bb2 == "Read" || bb2 == "read")
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
                                                return 0;
                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {

                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;  

                                        }

                                    }
                                    // Chooses to do Homework
                                    else if(bb2 == "Homework" || bb2 == "homework")
                                    {
                                        // Good Homework
                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        // Bad Homework
                                        else
                                        {

                                            cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 0;
                                        } 

                                    }
                                    else
                                    {
                                        // Didn't follow directions
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;

                                    }
                                }
                                else if(bb3 == "Done" || bb3 == "done")
                                {

                                    cout << "Alright then, goodnight!" << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }
                                else
                                {

                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1; 

                                } 
                            }
                        }
                        else if(sick == "Shower" || sick == "shower")
                        {

                            // Good Sick Shower
                            if(randomp1 == 1)
                            {

                                cout << "You had a good shower with no problems. Luckily you didn't throw up! Do you want to do anything before you go to bed?" << "\n";
                                string bb;
                                cout <<  "Yes or No?" << "\n";
                                cin >> bb;

                                    if(bb == "Yes" || bb == "yes")
                                    {

                                        cout << "Geez fine, what did you wanna do then?" << "\n";
                                        cout << "1) VideoGames" << "\n";
                                        cout << "2) Read" << "\n";
                                        cout << "3) Homework" << "\n";
                                        string bb2;
                                        cin >> bb2;

                                        // Chooses Video Games
                                        if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                            // Cracked Day
                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Noob Day
                                            else
                                            {

                                                cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {
                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1; 

                                        }

                                    }
                                    // Chooses to Read
                                    else if(bb2 == "Read" || bb2 == "read")
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
                                                return 0;
                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {

                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;  

                                        }

                                    }
                                    // Chooses to do Homework
                                    else if(bb2 == "Homework" || bb2 == "homework")
                                    {
                                        // Good Homework
                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        // Bad Homework
                                        else
                                        {

                                            cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 0;
                                        } 

                                    }
                                    else
                                    {
                                        // Didn't follow directions
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;

                                    }

                                }
                                else if(bb == "No" || bb == "no")
                                {

                                    cout << "Alright then, goodnight!" << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }
                                else
                                {

                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1; 

                                }

                            }
                            else
                            {
                                // Bad Sick Shower
                                cout << "Bad news " << name << " you threw up in the shower. After quickly cleaning it up you get back to your room. Will you go to sleep to hide your shame?" << "\n";
                                string bb;
                                cout << "Yes or No" << "\n";
                                cin >> bb;

                                if(bb == "Yes" || bb == "yes")
                                {

                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) VideoGames" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    string bb2;
                                    cin >> bb2;

                                    // Chooses Video Games
                                    if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                            // Cracked Day
                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Noob Day
                                            else
                                            {

                                                cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {
                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1; 

                                        }

                                    }
                                    // Chooses to Read
                                    else if(bb2 == "Read" || bb2 == "read")
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
                                                return 0;
                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {

                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;  

                                        }

                                    }
                                    // Chooses to do Homework
                                    else if(bb2 == "Homework" || bb2 == "homework")
                                    {
                                        // Good Homework
                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        // Bad Homework
                                        else
                                        {

                                            cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 0;
                                        } 

                                    }
                                    else
                                    {
                                        // Didn't follow directions
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;

                                    }

                                }
                                else if(bb == "No" || bb == "no")
                                {

                                    cout << "Alright then, goodnight!" << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }
                                else
                                {

                                   cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1;  

                                }

                            }

                        }
                        else
                        {

                            cout << "Game Over. You didn't follow directions." << "\n";
                            return 1; 


                        }

                    }
                    

                }
                else
                {

                    cout << "Game Over. You didn't follow directions." << "\n";
                    return 1; 

                }

            }
            // Doesn't want to eat dinner
            else if(dinner == "No" || dinner == "no")
            {

                cout << "Are you sure about that? The game will end if you say yes again." << "\n";
                string final;
                cin >> final;
                if(final == "yes" || final == "Yes")
                {

                    cout << "Game Over. Play Again?" << "\n";
                    return 0;

                }
                else if(final == "No" || final == "no")
                {

                    cout << "Alright good, keep playing then " << name << "." << "\n";
                    // Eating Options
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

                                //Before Bed Prompt
                                cout << "Good job " << name << ", I was worried at first because you didn't go to class, but it seems like you have your head on straight. Anything else you wanna do before you go to bed?" << "\n";
                                string bb;
                                cout << "Yes or No?" << bb << "\n";
                                cin >> bb;

                                // Do Stuff Before Bed
                                if(bb == "yes" || bb =="Yes")
                                {

                                    //Before Bed Options
                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) VideoGames" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    string bb2;
                                    cin >> bb2;

                                    // Chooses Video Games
                                    if(bb2 == "VideoGames" || bb2 == "videogames" || bb2  == "Videogames" || bb2 == "videoGames")
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

                                            // Cracked Day
                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Noob Day
                                            else
                                            {

                                                cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {
                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1; 

                                        }

                                    }
                                    // Chooses to Read
                                    else if(bb2 == "Read" || bb2 == "read")
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
                                                return 0;
                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {

                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;  

                                        }

                                    }
                                    // Chooses to do Homework
                                    else if(bb2 == "Homework" || bb2 == "homework")
                                    {
                                        // Good Homework
                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        // Bad Homework
                                        else
                                        {

                                            cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 0;
                                        } 

                                    }
                                    else
                                    {
                                        // Didn't follow directions
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;

                                    }


                                }
                                // No Stuff Before Bed
                                else if(bb == "No" || bb == "no")
                                {

                                    cout << "Alright then, goodnight!" << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }
                                else
                                {
                                    // Didn't follow directions
                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1;

                                }

                            }
                            else if(shower == "no" || shower == "No")
                            {

                                cout << "Ew that's kinda gross, but I won't judge I guess. Anything else you want to do before bed?" << "\n";
                                cout << "Yes or No?" << "\n";
                                string choice;
                                cin >> choice;

                                // Do Stuff Before Bed
                                if(choice == "Yes" || choice == "yes")
                                {

                                    //Before Bed Options
                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) VideoGames" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    string bb2;
                                    cin >> bb2;

                                    // Chooses Video Games
                                    if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                            // Cracked Day
                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Noob Day
                                            else
                                            {

                                                cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {
                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1; 

                                        }

                                    }
                                    // Chooses to Read
                                    else if(bb2 == "Read" || bb2 == "read")
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
                                                return 0;
                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {

                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;  

                                        }

                                    }
                                    // Chooses to do Homework
                                    else if(bb2 == "Homework" || bb2 == "homework")
                                    {
                                        // Good Homework
                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        // Bad Homework
                                        else
                                        {

                                            cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 0;
                                        } 

                                    }
                                    else
                                    {
                                        // Didn't follow directions
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;

                                    }

                                }
                                else if(choice == "no" || choice == "No")
                                {

                                    cout << "Alright then, goodnight!" << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }
                                else
                                {

                                    // Didn't follow directions
                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1;

                                }

                            }
                            else
                            {

                                // Didn't follow directions
                                cout << "Game Over. You didn't follow directions." << "\n";
                                return 1;

                            }
                        }
                        // Bad Food Route
                        else if(full == 0)
                        {

                            cout << "As per usual, you feel sick! That's just great isn't it. Will you go to the bathroom or shower first?" << "\n";
                            string sick;
                            cout << "Bathroom or Shower?" << sick << "\n";
                            cin >> sick;

                            // Bathroom Route
                            if(sick == "bathroom" || sick == "Bathroom")
                            {
                                
                                // Poop or No Poop
                                if(randomp1 > 0)
                                {

                                    // Didn't poop yourself
                                    cout << "Congrats " << name << ", you made it to the bathroom safe and sound. After a nice relaxing shower you head back to the room." <<"\n";
                                    string bb2;
                                    cout << "Anything else you want to do before bed?" << "\n";
                                    cout << "Yes or No" << "\n";
                                    cin >> bb2;

                                    // Chooses to do somethng after showering
                                    if(bb2 == "yes" || bb2 == "Yes")
                                    {

                                        cout << "Geez fine, what did you wanna do then?" << "\n";
                                        cout << "1) VideoGames" << "\n";
                                        cout << "2) Read" << "\n";
                                        cout << "3) Homework" << "\n";
                                        string bb2;
                                        cin >> bb2;

                                        // Chooses Video Games
                                        if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                                // Cracked Day
                                                if(randomp1 == 1)
                                                {

                                                    cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }
                                                // Noob Day
                                                else
                                                {

                                                    cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {
                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1; 

                                            }

                                        }
                                        // Chooses to Read
                                        else if(bb2 == "Read" || bb2 == "read")
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
                                                    return 0;
                                                }
                                                else if(randomp1 == 0)
                                                {

                                                    cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {   

                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1;  

                                            }

                                        }
                                        // Chooses to do Homework
                                        else if(bb2 == "Homework" || bb2 == "homework")
                                        {
                                            // Good Homework
                                            if(randomp1 != 1)
                                            {

                                                cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Bad Homework
                                            else
                                            {

                                                cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                                cout << "Game Over. Play Again?" << "\n"; 
                                                return 0;
                                            } 

                                        }
                                        else
                                        {
                                            // Didn't follow directions
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;

                                        }
                                    }
                                    // Nothing After Shower
                                    else if(bb2 == "No" || bb2 =="no")
                                    {

                                        cout << "Alright then, goodnight!" << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }

                                }
                                // Pooped Yourself
                                else
                                {

                                    cout << "Bad news " << name << ", you pooped yourself lol. You feverishly wipe yourself before taking a shower of shame." << "\n";
                                    cout << "Will you end this embarassing day or continue on and do something else?" << "\n";
                                    string bb3;
                                    cout << "Done or Continue?" << bb3 << "\n";
                                    cin >> bb3;

                                    if(bb3 == "continue" || bb3 == "Continue")
                                    {

                                        cout << "Geez fine, what did you wanna do then?" << "\n";
                                        cout << "1) VideoGames" << "\n";
                                        cout << "2) Read" << "\n";
                                        cout << "3) Homework" << "\n";
                                        string bb2;
                                        cin >> bb2;

                                        // Chooses Video Games
                                        if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                                // Cracked Day
                                                if(randomp1 == 1)
                                                {

                                                    cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }
                                                // Noob Day
                                                else
                                                {

                                                    cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {
                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1; 

                                            }

                                        }
                                        // Chooses to Read
                                        else if(bb2 == "Read" || bb2 == "read")
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
                                                    return 0;
                                                }
                                                else if(randomp1 == 0)
                                                {

                                                    cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {

                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1;  

                                            }

                                        }
                                        // Chooses to do Homework
                                        else if(bb2 == "Homework" || bb2 == "homework")
                                        {
                                            // Good Homework
                                            if(randomp1 != 1)
                                            {

                                                cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Bad Homework
                                            else
                                            {

                                                cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                                cout << "Game Over. Play Again?" << "\n"; 
                                                return 0;
                                            } 

                                        }
                                        else
                                        {
                                            // Didn't follow directions
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;

                                        }
                                    }
                                    else if(bb3 == "Done" || bb3 == "done")
                                    {

                                        cout << "Alright then, goodnight!" << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1; 

                                    } 
                                }
                            }
                            else if(sick == "Shower" || sick == "shower")
                            {

                                // Good Sick Shower
                                if(randomp1 == 1)
                                {

                                    cout << "You had a good shower with no problems. Luckily you didn't throw up! Do you want to do anything before you go to bed?" << "\n";
                                    string bb;
                                    cout <<  "Yes or No?" << "\n";
                                    cin >> bb;

                                        if(bb == "Yes" || bb == "yes")
                                        {

                                            cout << "Geez fine, what did you wanna do then?" << "\n";
                                            cout << "1) VideoGames" << "\n";
                                            cout << "2) Read" << "\n";
                                            cout << "3) Homework" << "\n";
                                            string bb2;
                                            cin >> bb2;

                                            // Chooses Video Games
                                            if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                                // Cracked Day
                                                if(randomp1 == 1)
                                                {

                                                    cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }
                                                // Noob Day
                                                else
                                                {

                                                    cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {
                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1; 

                                            }

                                        }
                                        // Chooses to Read
                                        else if(bb2 == "Read" || bb2 == "read")
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
                                                    return 0;
                                                }
                                                else if(randomp1 == 0)
                                                {

                                                    cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {

                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1;  

                                            }

                                        }
                                        // Chooses to do Homework
                                        else if(bb2 == "Homework" || bb2 == "homework")
                                        {
                                            // Good Homework
                                            if(randomp1 != 1)
                                            {

                                                cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Bad Homework
                                            else
                                            {

                                                cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                                cout << "Game Over. Play Again?" << "\n"; 
                                                return 0;
                                            } 

                                        }
                                        else
                                        {
                                            // Didn't follow directions
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;

                                        }

                                    }
                                    else if(bb == "No" || bb == "no")
                                    {

                                        cout << "Alright then, goodnight!" << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1; 

                                    }

                                }
                                else
                                {
                                    // Bad Sick Shower
                                    cout << "Bad news " << name << " you threw up in the shower. After quickly cleaning it up you get back to your room. Will you go to sleep to hide your shame?" << "\n";
                                    string bb;
                                    cout << "Yes or No" << "\n";
                                    cin >> bb;

                                    if(bb == "Yes" || bb == "yes")
                                    {

                                        cout << "Geez fine, what did you wanna do then?" << "\n";
                                        cout << "1) VideoGames" << "\n";
                                        cout << "2) Read" << "\n";
                                        cout << "3) Homework" << "\n";
                                        string bb2;
                                        cin >> bb2;

                                        // Chooses Video Games
                                        if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                                // Cracked Day
                                                if(randomp1 == 1)
                                                {

                                                    cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }
                                                // Noob Day
                                                else
                                                {

                                                    cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {
                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1; 

                                            }

                                        }
                                        // Chooses to Read
                                        else if(bb2 == "Read" || bb2 == "read")
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
                                                    return 0;
                                                }
                                                else if(randomp1 == 0)
                                                {

                                                    cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }   

                                            }
                                            else
                                            {

                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1;  

                                            }

                                        }
                                        // Chooses to do Homework
                                        else if(bb2 == "Homework" || bb2 == "homework")
                                        {
                                            // Good Homework
                                            if(randomp1 != 1)
                                            {

                                                cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Bad Homework
                                            else
                                            {

                                                cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                                cout << "Game Over. Play Again?" << "\n"; 
                                                return 0;
                                            } 

                                        }
                                        else
                                        {
                                            // Didn't follow directions
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;

                                        }

                                    }
                                    else if(bb == "No" || bb == "no")
                                    {

                                        cout << "Alright then, goodnight!" << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;  

                                    }

                                }

                            }
                            else
                            {

                                cout << "Game Over. You didn't follow directions." << "\n";
                                return 1; 


                            }

                        }
                    

                    }
                    else
                    {

                        cout << "Game Over. You didn't follow directions." << "\n";
                        return 1; 

                    }

                }
                else
                {

                    // Didn't follow directions
                    cout << "Game Over. You didn't follow directions." << "\n";
                    return 1;

                }
                

            }
            else
            {
                // Didn't follow directions
                cout << "Game Over. You didn't follow directions." << "\n";
                return 1;

            }


        }
        // Go to Class
        else if(c1 == 2)
        {
            
            // Late
            if(randomp1 == 1)
            {

                
                cout << "Bad news " << name << ", you are late to clss! What a bummer. After class finishes do you wanna eat dinner? This is your only chance to do so." << "\n";
                string dinner;
                cout << "Yes or No" << "\n";
                cin >> dinner;

                // Chooses to Eat
                if(dinner == "Yes" || dinner == "yes")
                {

                    // Where to Eat
                    cout << "Great! Time to turn this day around, " << name << ". What did you wanna eat?" << "\n";
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

                            // Good Food Route
                            cout << "What great food provided by Oregon State University Housing and Dining! You left the dining hall feeling satisfied and ready to go back to sleep. Will you shower before you sleep?" << "\n";
                            string shower;
                            //Shower prompt
                            cout << "Yes or No?" << shower << "\n";
                            cin >> shower;

                            //Taking shower
                            if(shower == "yes" || shower == "Yes")
                            {

                                //Before Bed Prompt
                                cout << "Good job " << name << ", you're really turning around your day. Anything else you wanna do before you go to bed?" << "\n";
                                string bb;
                                cout << "Yes or No?" << bb << "\n";
                                cin >> bb;

                                // Do Stuff Before Bed
                                if(bb == "yes" || bb =="Yes")
                                {

                                    //Before Bed Options
                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) VideoGames" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    string bb2;
                                    cin >> bb2;

                                    // Chooses Video Games
                                    if(bb2 == "VideoGames" || bb2 == "videogames" || bb2  == "Videogames" || bb2 == "videoGames")
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

                                            // Cracked Day
                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Noob Day
                                            else
                                            {

                                                cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {
                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1; 

                                        }   

                                    }
                                    // Chooses to Read
                                    else if(bb2 == "Read" || bb2 == "read")
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
                                                return 0;
                                            }
                                        }
                                        else if(randomp1 == 0)
                                        {

                                            cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        else
                                        {

                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;  

                                        }
                                    }
                                    // Chooses to do Homework
                                    else if(bb2 == "Homework" || bb2 == "homework")
                                    {
                                        // Good Homework
                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }   
                                        // Bad Homework
                                        else
                                        {

                                        cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                        cout << "Game Over. Play Again?" << "\n"; 
                                        return 0;
                                        } 

                                    }
                                    else
                                    {
                                        // Didn't follow directions
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;

                                    }

                                }
                                else if(bb == "No" || bb == "no")
                                {

                                    cout << "Alright then, goodnight!" << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }
                                else
                                {

                                   // Didn't follow directions
                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1; 

                                }


                            }
                            if(shower == "no" || shower == "No")
                            {

                                cout << "Ew that's kinda gross, but I won't judge I guess. Anything else you want to do before bed?" << "\n";
                                cout << "Yes or No?" << "\n";
                                string choice;
                                cin >> choice;

                                // Do Stuff Before Bed
                                if(choice == "Yes" || choice == "yes")
                                {

                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) VideoGames" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    string bb2;
                                    cin >> bb2;

                                    // Chooses Video Games
                                    if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                            // Cracked Day
                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Noob Day
                                            else
                                            {

                                                cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {
                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1; 

                                        }

                                    }
                                    // Chooses to Read
                                    else if(bb2 == "Read" || bb2 == "read")
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
                                                return 0;
                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {

                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;  

                                        }

                                    }
                                    // Chooses to do Homework
                                    else if(bb2 == "Homework" || bb2 == "homework")
                                    {
                                        // Good Homework
                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        // Bad Homework
                                        else
                                        {

                                            cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 0;
                                        } 

                                    }   
                                    else
                                    {
                                        // Didn't follow directions
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;

                                    }
                                        
                                }
                                else if(choice == "No" || choice == "no")
                                {

                                        
                                    cout << "Alright then, goodnight!" << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }
                                else
                                {

                                    // Didn't follow directions
                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1;

                                }

                            }
                            else
                            {

                                // Didn't follow directions
                                cout << "Game Over. You didn't follow directions." << "\n";
                                return 1;

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
                                    string bb2;
                                    cout << "Anything else you want to do before bed?" << "\n";
                                    cout << "Yes or No" << "\n";
                                    cin >> bb2;

                                    // Chooses to do somethng after showering
                                    if(bb2 == "yes" || bb2 == "Yes")
                                    {

                                        cout << "Geez fine, what did you wanna do then?" << "\n";
                                        cout << "1) VideoGames" << "\n";
                                        cout << "2) Read" << "\n";
                                        cout << "3) Homework" << "\n";
                                        string bb2;
                                        cin >> bb2;

                                        // Chooses Video Games
                                        if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                                // Cracked Day
                                                if(randomp1 == 1)
                                                {

                                                    cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }
                                                // Noob Day
                                                else
                                                {

                                                    cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {
                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1; 

                                            }

                                        }
                                        // Chooses to Read
                                        else if(bb2 == "Read" || bb2 == "read")
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
                                                    return 0;
                                                }
                                                else if(randomp1 == 0)
                                                {

                                                    cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {

                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1;  

                                            }

                                        }
                                        // Chooses to do Homework
                                        else if(bb2 == "Homework" || bb2 == "homework")
                                        {
                                            // Good Homework
                                            if(randomp1 != 1)
                                            {

                                                cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Bad Homework
                                            else
                                            {

                                                cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                                cout << "Game Over. Play Again?" << "\n"; 
                                                return 0;
                                            } 

                                        }   
                                        else
                                        {
                                            // Didn't follow directions
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;

                                        }
                                        
                                    }
                                    else if(bb2 == "No" || bb2 == "no")
                                    {

                                        
                                        cout << "Alright then, goodnight!" << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }
                                    else
                                    {

                                       // Didn't follow directions
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;
   

                                    }

                                }

                            }
                            else if(sick == "Shower" || sick == "shower")
                            {

                                // Good Sick Shower
                                if(randomp1 == 1)
                                {

                                    cout << "You had a good shower with no problems. Luckily you didn't throw up! Do you want to do anything before you go to bed?" << "\n";
                                    string bb;
                                    cout <<  "Yes or No?" << "\n";
                                    cin >> bb;

                                    if(bb == "Yes" || bb == "yes")
                                    {

                                        cout << "Geez fine, what did you wanna do then?" << "\n";
                                        cout << "1) VideoGames" << "\n";
                                        cout << "2) Read" << "\n";
                                        cout << "3) Homework" << "\n";
                                        string bb2;
                                        cin >> bb2;

                                        // Chooses Video Games
                                        if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                                // Cracked Day
                                                if(randomp1 == 1)
                                                {

                                                    cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }
                                                // Noob Day
                                                else
                                                {

                                                    cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {
                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1; 

                                            }

                                        }
                                        // Chooses to Read
                                        else if(bb2 == "Read" || bb2 == "read")
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
                                                    return 0;
                                                }
                                                else if(randomp1 == 0)
                                                {

                                                    cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {

                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1;  

                                            }

                                        }
                                        // Chooses to do Homework
                                        else if(bb2 == "Homework" || bb2 == "homework")
                                        {
                                            // Good Homework
                                            if(randomp1 != 1)
                                            {

                                                cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Bad Homework
                                            else
                                            {

                                                cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                                cout << "Game Over. Play Again?" << "\n"; 
                                                return 0;
                                            } 

                                        }
                                        else
                                        {
                                            // Didn't follow directions
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;

                                        }

                                    }
                                    else if(bb == "No" || bb == "no")
                                    {

                                        cout << "Alright then, goodnight!" << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1; 

                                    }

                                }
                                else
                                {
                                    // Bad Sick Shower
                                    cout << "Bad news " << name << " you threw up in the shower. After quickly cleaning it up you get back to your room. Will you go to sleep to hide your shame?" << "\n";
                                    string bb;
                                    cout << "Yes or No" << "\n";
                                    cin >> bb;

                                    if(bb == "Yes" || bb == "yes")
                                    {

                                        cout << "Geez fine, what did you wanna do then?" << "\n";
                                        cout << "1) VideoGames" << "\n";
                                        cout << "2) Read" << "\n";
                                        cout << "3) Homework" << "\n";
                                        string bb2;
                                        cin >> bb2;

                                        // Chooses Video Games
                                        if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                                // Cracked Day
                                                if(randomp1 == 1)
                                                {

                                                    cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }
                                                // Noob Day
                                                else
                                                {

                                                    cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {
                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1; 

                                            }

                                        }
                                        // Chooses to Read
                                        else if(bb2 == "Read" || bb2 == "read")
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
                                                    return 0;
                                                }
                                                else if(randomp1 == 0)
                                                {

                                                    cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {

                                             // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1;  

                                            }

                                        }
                                        // Chooses to do Homework
                                        else if(bb2 == "Homework" || bb2 == "homework")
                                        {
                                            // Good Homework
                                            if(randomp1 != 1)
                                            {

                                                cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Bad Homework
                                            else
                                            {

                                                cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                                cout << "Game Over. Play Again?" << "\n"; 
                                                return 0;
                                            } 

                                        }
                                        else
                                        {
                                            // Didn't follow directions
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;

                                        }

                                    }
                                    else if(bb == "No" || bb == "no")
                                    {

                                        cout << "Alright then, goodnight!" << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;  

                                    }

                                }

                            }
                            else
                            {

                                cout << "Game Over. You didn't follow directions." << "\n";
                                return 1; 


                            }

                        }
                    
                    }
                    else
                    {

                        cout << "Game Over. You didn't follow directions." << "\n";
                        return 1; 

                    }

                }
                else if(dinner == "No" || dinner == "no")
                {

                    cout << "You're a weirdo "<< name << ". Dinner is important. Though I can't judge. I'm a machine. Did you wanna do anything else before bed?" << "\n";
                    string bb;
                    cout << "Yes or No" << "\n";
                    cin >> bb;

                    if(bb == "Yes" || bb == "yes")
                    {

                        cout << "Geez fine, what did you wanna do then?" << "\n";
                        cout << "1) VideoGames" << "\n";
                        cout << "2) Read" << "\n";
                        cout << "3) Homework" << "\n";
                        string bb2;
                        cin >> bb2;

                        // Chooses Video Games
                        if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                // Cracked Day
                                if(randomp1 == 1)
                                {

                                    cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }
                                // Noob Day
                                else
                                {

                                    cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }

                            }
                            else
                            {
                                // Didn't Follow Directiosn
                                cout << "Game Over. You didn't follow directions." << "\n";
                                return 1; 

                            }

                        }
                        // Chooses to Read
                        else if(bb2 == "Read" || bb2 == "read")
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
                                        return 0;
                                    }
                                    else if(randomp1 == 0)
                                    {

                                        cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }

                                }
                                else
                                {

                                    // Didn't Follow Directiosn
                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1;  

                                }

                        }
                        // Chooses to do Homework
                        else if(bb2 == "Homework" || bb2 == "homework")
                        {
                            // Good Homework
                            if(randomp1 != 1)
                            {

                                cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                cout << "Game Over. Play Again?" << "\n";
                                return 0;

                            }
                            // Bad Homework
                            else
                            {

                                cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                cout << "Game Over. Play Again?" << "\n"; 
                                return 0;

                            } 

                        }
                        else
                        {
                            // Didn't follow directions
                            cout << "Game Over. You didn't follow directions." << "\n";
                            return 1;

                        }

                    }
                    else if(bb == "No" || bb == "no")
                    {

                        cout << "Alright then, goodnight!" << "\n";
                        cout << "Game Over. Play Again?" << "\n";
                        return 0;

                    }
                    else
                    {

                        cout << "Game Over. You didn't follow directions." << "\n";
                        return 1;  

                    }
                    

                }
                else
                {

                    // Didn't follow directions
                    cout << "Game Over. You didn't follow directions." << "\n";
                    return 1;
  

                }
                
            }
            // On Time
            else
            {

                cout << "Good news " << name << ", you made it to class on time! After class finishes do you wanna eat dinner? This is your only chance to do so." << "\n";
                string dinner;
                cout << "Yes or No" << "\n";
                cin >> dinner;

                // Chooses to Eat
                if(dinner == "Yes" || dinner == "yes")
                {

                    // Where to Eat
                    cout << "Great! Let's keep this good day rolling, " << name << ". What did you wanna eat?" << "\n";
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

                            // Good Food Route
                            cout << "What great food provided by Oregon State University Housing and Dining! You left the dining hall feeling satisfied and ready to go back to sleep. Will you shower before you sleep?" << "\n";
                            string shower;
                            //Shower prompt
                            cout << "Yes or No?" << shower << "\n";
                            cin >> shower;

                            //Taking shower
                            if(shower == "yes" || shower == "Yes")
                            {

                                //Before Bed Prompt
                                cout << "Good job " << name << ", you're really making the most out of your day. Anything else you wanna do before you go to bed?" << "\n";
                                string bb;
                                cout << "Yes or No?" << bb << "\n";
                                cin >> bb;

                                // Do Stuff Before Bed
                                if(bb == "yes" || bb =="Yes")
                                {

                                    //Before Bed Options
                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) VideoGames" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    string bb2;
                                    cin >> bb2;

                                    // Chooses Video Games
                                    if(bb2 == "VideoGames" || bb2 == "videogames" || bb2  == "Videogames" || bb2 == "videoGames")
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

                                            // Cracked Day
                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Noob Day
                                            else
                                            {

                                                cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {
                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1; 

                                        }   

                                    }
                                    // Chooses to Read
                                    else if(bb2 == "Read" || bb2 == "read")
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
                                                return 0;
                                            }
                                        }
                                        else if(randomp1 == 0)
                                        {

                                            cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        else
                                        {

                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;  

                                        }
                                    }
                                    // Chooses to do Homework
                                    else if(bb2 == "Homework" || bb2 == "homework")
                                    {
                                        // Good Homework
                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }   
                                        // Bad Homework
                                        else
                                        {

                                        cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                        cout << "Game Over. Play Again?" << "\n"; 
                                        return 0;
                                        } 

                                    }
                                    else
                                    {
                                        // Didn't follow directions
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;

                                    }

                                }
                                else if(bb == "No" || bb == "no")
                                {

                                    cout << "Alright then, goodnight!" << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }
                                else
                                {

                                   // Didn't follow directions
                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1; 

                                }


                            }
                            if(shower == "no" || shower == "No")
                            {

                                cout << "Ew that's kinda gross, but I won't judge I guess. Anything else you want to do before bed?" << "\n";
                                cout << "Yes or No?" << "\n";
                                string choice;
                                cin >> choice;

                                // Do Stuff Before Bed
                                if(choice == "Yes" || choice == "yes")
                                {

                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) VideoGames" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    string bb2;
                                    cin >> bb2;

                                    // Chooses Video Games
                                    if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                            // Cracked Day
                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Noob Day
                                            else
                                            {

                                                cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {
                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1; 

                                        }

                                    }
                                    // Chooses to Read
                                    else if(bb2 == "Read" || bb2 == "read")
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
                                                return 0;
                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {

                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;  

                                        }

                                    }
                                    // Chooses to do Homework
                                    else if(bb2 == "Homework" || bb2 == "homework")
                                    {
                                        // Good Homework
                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        // Bad Homework
                                        else
                                        {

                                            cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 0;
                                        } 

                                    }   
                                    else
                                    {
                                        // Didn't follow directions
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;

                                    }
                                        
                                }
                                else if(choice == "No" || choice == "no")
                                {

                                        
                                    cout << "Alright then, goodnight!" << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }
                                else
                                {

                                    // Didn't follow directions
                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1;

                                }

                            }
                            else
                            {

                                // Didn't follow directions
                                cout << "Game Over. You didn't follow directions." << "\n";
                                return 1;

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
                                    string bb2;
                                    cout << "Anything else you want to do before bed?" << "\n";
                                    cout << "Yes or No" << "\n";
                                    cin >> bb2;

                                    // Chooses to do somethng after showering
                                    if(bb2 == "yes" || bb2 == "Yes")
                                    {

                                        cout << "Geez fine, what did you wanna do then?" << "\n";
                                        cout << "1) VideoGames" << "\n";
                                        cout << "2) Read" << "\n";
                                        cout << "3) Homework" << "\n";
                                        string bb2;
                                        cin >> bb2;

                                        // Chooses Video Games
                                        if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                                // Cracked Day
                                                if(randomp1 == 1)
                                                {

                                                    cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }
                                                // Noob Day
                                                else
                                                {

                                                    cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {
                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1; 

                                            }

                                        }
                                        // Chooses to Read
                                        else if(bb2 == "Read" || bb2 == "read")
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
                                                    return 0;
                                                }
                                                else if(randomp1 == 0)
                                                {

                                                    cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {

                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1;  

                                            }

                                        }
                                        // Chooses to do Homework
                                        else if(bb2 == "Homework" || bb2 == "homework")
                                        {
                                            // Good Homework
                                            if(randomp1 != 1)
                                            {

                                                cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Bad Homework
                                            else
                                            {

                                                cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                                cout << "Game Over. Play Again?" << "\n"; 
                                                return 0;
                                            } 

                                        }   
                                        else
                                        {
                                            // Didn't follow directions
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;

                                        }
                                        
                                    }
                                    else if(bb2 == "No" || bb2 == "no")
                                    {

                                        
                                        cout << "Alright then, goodnight!" << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }
                                    else
                                    {

                                       // Didn't follow directions
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;
   

                                    }

                                }

                            }
                            else if(sick == "Shower" || sick == "shower")
                            {

                                // Good Sick Shower
                                if(randomp1 == 1)
                                {

                                    cout << "You had a good shower with no problems. Luckily you didn't throw up! Do you want to do anything before you go to bed?" << "\n";
                                    string bb;
                                    cout <<  "Yes or No?" << "\n";
                                    cin >> bb;

                                    if(bb == "Yes" || bb == "yes")
                                    {

                                        cout << "Geez fine, what did you wanna do then?" << "\n";
                                        cout << "1) VideoGames" << "\n";
                                        cout << "2) Read" << "\n";
                                        cout << "3) Homework" << "\n";
                                        string bb2;
                                        cin >> bb2;

                                        // Chooses Video Games
                                        if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                                // Cracked Day
                                                if(randomp1 == 1)
                                                {

                                                    cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }
                                                // Noob Day
                                                else
                                                {

                                                    cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {
                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1; 

                                            }

                                        }
                                        // Chooses to Read
                                        else if(bb2 == "Read" || bb2 == "read")
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
                                                    return 0;
                                                }
                                                else if(randomp1 == 0)
                                                {

                                                    cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {

                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1;  

                                            }

                                        }
                                        // Chooses to do Homework
                                        else if(bb2 == "Homework" || bb2 == "homework")
                                        {
                                            // Good Homework
                                            if(randomp1 != 1)
                                            {

                                                cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Bad Homework
                                            else
                                            {

                                                cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                                cout << "Game Over. Play Again?" << "\n"; 
                                                return 0;
                                            } 

                                        }
                                        else
                                        {
                                            // Didn't follow directions
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;

                                        }

                                    }
                                    else if(bb == "No" || bb == "no")
                                    {

                                        cout << "Alright then, goodnight!" << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1; 

                                    }

                                }
                                else
                                {
                                    // Bad Sick Shower
                                    cout << "Bad news " << name << " you threw up in the shower. After quickly cleaning it up you get back to your room. Will you go to sleep to hide your shame?" << "\n";
                                    string bb;
                                    cout << "Yes or No" << "\n";
                                    cin >> bb;

                                    if(bb == "Yes" || bb == "yes")
                                    {

                                        cout << "Geez fine, what did you wanna do then?" << "\n";
                                        cout << "1) VideoGames" << "\n";
                                        cout << "2) Read" << "\n";
                                        cout << "3) Homework" << "\n";
                                        string bb2;
                                        cin >> bb2;

                                        // Chooses Video Games
                                        if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                                // Cracked Day
                                                if(randomp1 == 1)
                                                {

                                                    cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }
                                                // Noob Day
                                                else
                                                {

                                                    cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {
                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1; 

                                            }

                                        }
                                        // Chooses to Read
                                        else if(bb2 == "Read" || bb2 == "read")
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
                                                    return 0;
                                                }
                                                else if(randomp1 == 0)
                                                {

                                                    cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {

                                             // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1;  

                                            }

                                        }
                                        // Chooses to do Homework
                                        else if(bb2 == "Homework" || bb2 == "homework")
                                        {
                                            // Good Homework
                                            if(randomp1 != 1)
                                            {

                                                cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Bad Homework
                                            else
                                            {

                                                cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                                cout << "Game Over. Play Again?" << "\n"; 
                                                return 0;
                                            } 

                                        }
                                        else
                                        {
                                            // Didn't follow directions
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;

                                        }

                                    }
                                    else if(bb == "No" || bb == "no")
                                    {

                                        cout << "Alright then, goodnight!" << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;  

                                    }

                                }

                            }
                            else
                            {

                                cout << "Game Over. You didn't follow directions." << "\n";
                                return 1; 


                            }

                        }
                    
                    }
                    else
                    {

                        cout << "Game Over. You didn't follow directions." << "\n";
                        return 1; 

                    }

                }
                else if(dinner == "No" || dinner == "no")
                {

                    cout << "You're a weirdo "<< name << ". Dinner is important. Though I can't judge. I'm a machine. Did you wanna do anything else before bed?" << "\n";
                    string bb;
                    cout << "Yes or No" << "\n";
                    cin >> bb;

                    if(bb == "Yes" || bb == "yes")
                    {

                        cout << "Geez fine, what did you wanna do then?" << "\n";
                        cout << "1) VideoGames" << "\n";
                        cout << "2) Read" << "\n";
                        cout << "3) Homework" << "\n";
                        string bb2;
                        cin >> bb2;

                        // Chooses Video Games
                        if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                // Cracked Day
                                if(randomp1 == 1)
                                {

                                    cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }
                                // Noob Day
                                else
                                {

                                    cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }

                            }
                            else
                            {
                                // Didn't Follow Directiosn
                                cout << "Game Over. You didn't follow directions." << "\n";
                                return 1; 

                            }

                        }
                        // Chooses to Read
                        else if(bb2 == "Read" || bb2 == "read")
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
                                        return 0;
                                    }
                                    else if(randomp1 == 0)
                                    {

                                        cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }

                                }
                                else
                                {

                                    // Didn't Follow Directiosn
                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1;  

                                }

                        }
                        // Chooses to do Homework
                        else if(bb2 == "Homework" || bb2 == "homework")
                        {
                            // Good Homework
                            if(randomp1 != 1)
                            {

                                cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                cout << "Game Over. Play Again?" << "\n";
                                return 0;

                            }
                            // Bad Homework
                            else
                            {

                                cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                cout << "Game Over. Play Again?" << "\n"; 
                                return 0;

                            } 

                        }
                        else
                        {
                            // Didn't follow directions
                            cout << "Game Over. You didn't follow directions." << "\n";
                            return 1;

                        }

                    }
                    else if(bb == "No" || bb == "no")
                    {

                        cout << "Alright then, goodnight!" << "\n";
                        cout << "Game Over. Play Again?" << "\n";
                        return 0;

                    }
                    else
                    {

                        cout << "Game Over. You didn't follow directions." << "\n";
                        return 1;  

                    }
                    

                }
                else
                {

                    // Didn't follow directions
                    cout << "Game Over. You didn't follow directions." << "\n";
                    return 1;
  

                }
                
            }

        }
        else
        {

            // Didn't follow directions
            cout << "Game Over. You didn't follow directions." << "\n";
            return 1;

        }

    }
    // Woke Up On Time
    else
    {

        cout << "Good job " << name << ", you woke up on time for once! What do you wanna do today?" << "\n";
        int c1;
        cout << "1) Eh. I'll go back to sleep, who needs school anyways." << "\n";
        cout << "2) I'll go to class!" << "\n";
        cin >> c1;

        // Chooses Sleep
        if(c1 ==1)
        {

           cout << "You go back to sleep happily, without a care in the world. Will you wake up for dinner " << name << "?" << "\n";
           string dinner;
           cout << "Yes or No" << dinner << "\n";
           cin >> dinner;

            //Chooses to eat dinner
            if(dinner == "Yes" || dinner == "yes")
            {

                // Eating Options
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

                            //Before Bed Prompt
                            cout << "Good job " << name << ", I was worried at first because you didn't go to class, but it seems like you have your head on straight. Anything else you wanna do before you go to bed?" << "\n";
                            string bb;
                            cout << "Yes or No?" << bb << "\n";
                            cin >> bb;

                            // Do Stuff Before Bed
                            if(bb == "yes" || bb =="Yes")
                            {

                                //Before Bed Options
                                cout << "Geez fine, what did you wanna do then?" << "\n";
                                cout << "1) VideoGames" << "\n";
                                cout << "2) Read" << "\n";
                                cout << "3) Homework" << "\n";
                                string bb2;
                                cin >> bb2;

                                // Chooses Video Games
                                if(bb2 == "VideoGames" || bb2 == "videogames" || bb2  == "Videogames" || bb2 == "videoGames")
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

                                        // Cracked Day
                                        if(randomp1 == 1)
                                        {

                                            cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        // Noob Day
                                        else
                                        {

                                            cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }

                                    }
                                    else
                                    {
                                        // Didn't Follow Directiosn
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1; 

                                    }

                                }
                                // Chooses to Read
                                else if(bb2 == "Read" || bb2 == "read")
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
                                            return 0;
                                        }
                                        else if(randomp1 == 0)
                                        {

                                            cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }

                                    }
                                    else
                                    {

                                       // Didn't Follow Directiosn
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;  

                                    }

                                }
                                // Chooses to do Homework
                                else if(bb2 == "Homework" || bb2 == "homework")
                                {
                                    // Good Homework
                                    if(randomp1 != 1)
                                    {

                                        cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }
                                    // Bad Homework
                                    else
                                    {

                                        cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                        cout << "Game Over. Play Again?" << "\n"; 
                                        return 0;
                                    } 

                                }
                                else
                                {
                                    // Didn't follow directions
                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1;

                                }


                            }
                            // No Stuff Before Bed
                            else if(bb == "No" || bb == "no")
                            {

                                cout << "Alright then, goodnight!" << "\n";
                                cout << "Game Over. Play Again?" << "\n";
                                return 0;

                            }
                            else
                            {
                                // Didn't follow directions
                                cout << "Game Over. You didn't follow directions." << "\n";
                                return 1;

                            }

                        }
                        else if(shower == "no" || shower == "No")
                        {

                            cout << "Ew that's kinda gross, but I won't judge I guess. Anything else you want to do before bed?" << "\n";
                            cout << "Yes or No?" << "\n";
                            string choice;
                            cin >> choice;

                            // Do Stuff Before Bed
                            if(choice == "Yes" || choice == "yes")
                            {

                                //Before Bed Options
                                cout << "Geez fine, what did you wanna do then?" << "\n";
                                cout << "1) VideoGames" << "\n";
                                cout << "2) Read" << "\n";
                                cout << "3) Homework" << "\n";
                                string bb2;
                                cin >> bb2;

                                // Chooses Video Games
                                if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                        // Cracked Day
                                        if(randomp1 == 1)
                                        {

                                            cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        // Noob Day
                                        else
                                        {

                                            cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }

                                    }
                                    else
                                    {
                                        // Didn't Follow Directiosn
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1; 

                                    }

                                }
                                // Chooses to Read
                                else if(bb2 == "Read" || bb2 == "read")
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
                                            return 0;
                                        }
                                        else if(randomp1 == 0)
                                        {

                                            cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }

                                    }
                                    else
                                    {

                                       // Didn't Follow Directiosn
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;  

                                    }

                                }
                                // Chooses to do Homework
                                else if(bb2 == "Homework" || bb2 == "homework")
                                {
                                    // Good Homework
                                    if(randomp1 != 1)
                                    {

                                        cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }
                                    // Bad Homework
                                    else
                                    {

                                        cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                        cout << "Game Over. Play Again?" << "\n"; 
                                        return 0;
                                    } 

                                }
                                else
                                {
                                    // Didn't follow directions
                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1;

                                }

                            }
                            else if(choice == "no" || choice == "No")
                            {

                                cout << "Alright then, goodnight!" << "\n";
                                cout << "Game Over. Play Again?" << "\n";
                                return 0;

                            }
                            else
                            {

                                // Didn't follow directions
                                cout << "Game Over. You didn't follow directions." << "\n";
                                return 1;

                            }

                        }
                        else
                        {

                            // Didn't follow directions
                            cout << "Game Over. You didn't follow directions." << "\n";
                            return 1;

                        }
                    }
                    // Bad Food Route
                    else if(full == 0)
                    {

                        cout << "As per usual, you feel sick! That's just great isn't it. Will you go to the bathroom or shower first?" << "\n";
                        string sick;
                        cout << "Bathroom or Shower?" << sick << "\n";
                        cin >> sick;

                        // Bathroom Route
                        if(sick == "bathroom" || sick == "Bathroom")
                        {
                            
                            // Poop or No Poop
                            if(randomp1 > 0)
                            {

                                // Didn't poop yourself
                                cout << "Congrats " << name << ", you made it to the bathroom safe and sound. After a nice relaxing shower you head back to the room." <<"\n";
                                string bb2;
                                cout << "Anything else you want to do before bed?" << "\n";
                                cout << "Yes or No" << "\n";
                                cin >> bb2;

                                // Chooses to do somethng after showering
                                if(bb2 == "yes" || bb2 == "Yes")
                                {

                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) VideoGames" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    string bb2;
                                    cin >> bb2;

                                    // Chooses Video Games
                                    if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                            // Cracked Day
                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Noob Day
                                            else
                                            {

                                                cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {
                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1; 

                                        }

                                    }
                                    // Chooses to Read
                                    else if(bb2 == "Read" || bb2 == "read")
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
                                                return 0;
                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {

                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;  

                                        }

                                    }
                                    // Chooses to do Homework
                                    else if(bb2 == "Homework" || bb2 == "homework")
                                    {
                                        // Good Homework
                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        // Bad Homework
                                        else
                                        {

                                            cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 0;
                                        } 

                                    }
                                    else
                                    {
                                        // Didn't follow directions
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;

                                    }
                                }
                                // Nothing After Shower
                                else if(bb2 == "No" || bb2 =="no")
                                {

                                    cout << "Alright then, goodnight!" << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }

                            }
                            // Pooped Yourself
                            else
                            {

                                cout << "Bad news " << name << ", you pooped yourself lol. You feverishly wipe yourself before taking a shower of shame." << "\n";
                                cout << "Will you end this embarassing day or continue on and do something else?" << "\n";
                                string bb3;
                                cout << "Done or Continue?" << bb3 << "\n";
                                cin >> bb3;

                                if(bb3 == "continue" || bb3 == "Continue")
                                {

                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) VideoGames" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    string bb2;
                                    cin >> bb2;

                                    // Chooses Video Games
                                    if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                            // Cracked Day
                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Noob Day
                                            else
                                            {

                                                cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {
                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1; 

                                        }

                                    }
                                    // Chooses to Read
                                    else if(bb2 == "Read" || bb2 == "read")
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
                                                return 0;
                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {

                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;  

                                        }

                                    }
                                    // Chooses to do Homework
                                    else if(bb2 == "Homework" || bb2 == "homework")
                                    {
                                        // Good Homework
                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        // Bad Homework
                                        else
                                        {

                                            cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 0;
                                        } 

                                    }
                                    else
                                    {
                                        // Didn't follow directions
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;

                                    }
                                }
                                else if(bb3 == "Done" || bb3 == "done")
                                {

                                    cout << "Alright then, goodnight!" << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }
                                else
                                {

                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1; 

                                } 
                            }
                        }
                        else if(sick == "Shower" || sick == "shower")
                        {

                            // Good Sick Shower
                            if(randomp1 == 1)
                            {

                                cout << "You had a good shower with no problems. Luckily you didn't throw up! Do you want to do anything before you go to bed?" << "\n";
                                string bb;
                                cout <<  "Yes or No?" << "\n";
                                cin >> bb;

                                    if(bb == "Yes" || bb == "yes")
                                    {

                                        cout << "Geez fine, what did you wanna do then?" << "\n";
                                        cout << "1) VideoGames" << "\n";
                                        cout << "2) Read" << "\n";
                                        cout << "3) Homework" << "\n";
                                        string bb2;
                                        cin >> bb2;

                                        // Chooses Video Games
                                        if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                            // Cracked Day
                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Noob Day
                                            else
                                            {

                                                cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {
                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1; 

                                        }

                                    }
                                    // Chooses to Read
                                    else if(bb2 == "Read" || bb2 == "read")
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
                                                return 0;
                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {

                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;  

                                        }

                                    }
                                    // Chooses to do Homework
                                    else if(bb2 == "Homework" || bb2 == "homework")
                                    {
                                        // Good Homework
                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        // Bad Homework
                                        else
                                        {

                                            cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 0;
                                        } 

                                    }
                                    else
                                    {
                                        // Didn't follow directions
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;

                                    }

                                }
                                else if(bb == "No" || bb == "no")
                                {

                                    cout << "Alright then, goodnight!" << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }
                                else
                                {

                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1; 

                                }

                            }
                            else
                            {
                                // Bad Sick Shower
                                cout << "Bad news " << name << " you threw up in the shower. After quickly cleaning it up you get back to your room. Will you go to sleep to hide your shame?" << "\n";
                                string bb;
                                cout << "Yes or No" << "\n";
                                cin >> bb;

                                if(bb == "Yes" || bb == "yes")
                                {

                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) VideoGames" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    string bb2;
                                    cin >> bb2;

                                    // Chooses Video Games
                                    if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                            // Cracked Day
                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Noob Day
                                            else
                                            {

                                                cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {
                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1; 

                                        }

                                    }
                                    // Chooses to Read
                                    else if(bb2 == "Read" || bb2 == "read")
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
                                                return 0;
                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {

                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;  

                                        }

                                    }
                                    // Chooses to do Homework
                                    else if(bb2 == "Homework" || bb2 == "homework")
                                    {
                                        // Good Homework
                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        // Bad Homework
                                        else
                                        {

                                            cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 0;
                                        } 

                                    }
                                    else
                                    {
                                        // Didn't follow directions
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;

                                    }

                                }
                                else if(bb == "No" || bb == "no")
                                {

                                    cout << "Alright then, goodnight!" << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }
                                else
                                {

                                   cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1;  

                                }

                            }

                        }
                        else
                        {

                            cout << "Game Over. You didn't follow directions." << "\n";
                            return 1; 


                        }

                    }
                    

                }
                else
                {

                    cout << "Game Over. You didn't follow directions." << "\n";
                    return 1; 

                }

            }
            // Doesn't want to eat dinner
            else if(dinner == "No" || dinner == "no")
            {

                cout << "Are you sure about that? The game will end if you say yes again." << "\n";
                string final;
                cin >> final;
                if(final == "yes" || final == "Yes")
                {

                    cout << "Game Over. Play Again?" << "\n";
                    return 0;

                }
                else if(final == "No" || final == "no")
                {

                                        cout << "Alright good, keep playing then " << name << "." << "\n";
                    // Eating Options
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

                                //Before Bed Prompt
                                cout << "Good job " << name << ", I was worried at first because you didn't go to class, but it seems like you have your head on straight. Anything else you wanna do before you go to bed?" << "\n";
                                string bb;
                                cout << "Yes or No?" << bb << "\n";
                                cin >> bb;

                                // Do Stuff Before Bed
                                if(bb == "yes" || bb =="Yes")
                                {

                                    //Before Bed Options
                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) VideoGames" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    string bb2;
                                    cin >> bb2;

                                    // Chooses Video Games
                                    if(bb2 == "VideoGames" || bb2 == "videogames" || bb2  == "Videogames" || bb2 == "videoGames")
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

                                            // Cracked Day
                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Noob Day
                                            else
                                            {

                                                cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {
                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1; 

                                        }

                                    }
                                    // Chooses to Read
                                    else if(bb2 == "Read" || bb2 == "read")
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
                                                return 0;
                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {

                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;  

                                        }

                                    }
                                    // Chooses to do Homework
                                    else if(bb2 == "Homework" || bb2 == "homework")
                                    {
                                        // Good Homework
                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        // Bad Homework
                                        else
                                        {

                                            cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 0;
                                        } 

                                    }
                                    else
                                    {
                                        // Didn't follow directions
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;

                                    }


                                }
                                // No Stuff Before Bed
                                else if(bb == "No" || bb == "no")
                                {

                                    cout << "Alright then, goodnight!" << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }
                                else
                                {
                                    // Didn't follow directions
                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1;

                                }

                            }
                            else if(shower == "no" || shower == "No")
                            {

                                cout << "Ew that's kinda gross, but I won't judge I guess. Anything else you want to do before bed?" << "\n";
                                cout << "Yes or No?" << "\n";
                                string choice;
                                cin >> choice;

                                // Do Stuff Before Bed
                                if(choice == "Yes" || choice == "yes")
                                {

                                    //Before Bed Options
                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) VideoGames" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    string bb2;
                                    cin >> bb2;

                                    // Chooses Video Games
                                    if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                            // Cracked Day
                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Noob Day
                                            else
                                            {

                                                cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {
                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1; 

                                        }

                                    }
                                    // Chooses to Read
                                    else if(bb2 == "Read" || bb2 == "read")
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
                                                return 0;
                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {

                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;  

                                        }

                                    }
                                    // Chooses to do Homework
                                    else if(bb2 == "Homework" || bb2 == "homework")
                                    {
                                        // Good Homework
                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        // Bad Homework
                                        else
                                        {

                                            cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 0;
                                        } 

                                    }
                                    else
                                    {
                                        // Didn't follow directions
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;

                                    }

                                }
                                else if(choice == "no" || choice == "No")
                                {

                                    cout << "Alright then, goodnight!" << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }
                                else
                                {

                                    // Didn't follow directions
                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1;

                                }

                            }
                            else
                            {

                                // Didn't follow directions
                                cout << "Game Over. You didn't follow directions." << "\n";
                                return 1;

                            }
                        }
                        // Bad Food Route
                        else if(full == 0)
                        {

                            cout << "As per usual, you feel sick! That's just great isn't it. Will you go to the bathroom or shower first?" << "\n";
                            string sick;
                            cout << "Bathroom or Shower?" << sick << "\n";
                            cin >> sick;

                            // Bathroom Route
                            if(sick == "bathroom" || sick == "Bathroom")
                            {
                                
                                // Poop or No Poop
                                if(randomp1 > 0)
                                {

                                    // Didn't poop yourself
                                    cout << "Congrats " << name << ", you made it to the bathroom safe and sound. After a nice relaxing shower you head back to the room." <<"\n";
                                    string bb2;
                                    cout << "Anything else you want to do before bed?" << "\n";
                                    cout << "Yes or No" << "\n";
                                    cin >> bb2;

                                    // Chooses to do somethng after showering
                                    if(bb2 == "yes" || bb2 == "Yes")
                                    {

                                        cout << "Geez fine, what did you wanna do then?" << "\n";
                                        cout << "1) VideoGames" << "\n";
                                        cout << "2) Read" << "\n";
                                        cout << "3) Homework" << "\n";
                                        string bb2;
                                        cin >> bb2;

                                        // Chooses Video Games
                                        if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                                // Cracked Day
                                                if(randomp1 == 1)
                                                {

                                                    cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }
                                                // Noob Day
                                                else
                                                {

                                                    cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {
                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1; 

                                            }

                                        }
                                        // Chooses to Read
                                        else if(bb2 == "Read" || bb2 == "read")
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
                                                    return 0;
                                                }
                                                else if(randomp1 == 0)
                                                {

                                                    cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {   

                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1;  

                                            }

                                        }
                                        // Chooses to do Homework
                                        else if(bb2 == "Homework" || bb2 == "homework")
                                        {
                                            // Good Homework
                                            if(randomp1 != 1)
                                            {

                                                cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Bad Homework
                                            else
                                            {

                                                cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                                cout << "Game Over. Play Again?" << "\n"; 
                                                return 0;
                                            } 

                                        }
                                        else
                                        {
                                            // Didn't follow directions
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;

                                        }
                                    }
                                    // Nothing After Shower
                                    else if(bb2 == "No" || bb2 =="no")
                                    {

                                        cout << "Alright then, goodnight!" << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }

                                }
                                // Pooped Yourself
                                else
                                {

                                    cout << "Bad news " << name << ", you pooped yourself lol. You feverishly wipe yourself before taking a shower of shame." << "\n";
                                    cout << "Will you end this embarassing day or continue on and do something else?" << "\n";
                                    string bb3;
                                    cout << "Done or Continue?" << bb3 << "\n";
                                    cin >> bb3;

                                    if(bb3 == "continue" || bb3 == "Continue")
                                    {

                                        cout << "Geez fine, what did you wanna do then?" << "\n";
                                        cout << "1) VideoGames" << "\n";
                                        cout << "2) Read" << "\n";
                                        cout << "3) Homework" << "\n";
                                        string bb2;
                                        cin >> bb2;

                                        // Chooses Video Games
                                        if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                                // Cracked Day
                                                if(randomp1 == 1)
                                                {

                                                    cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }
                                                // Noob Day
                                                else
                                                {

                                                    cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {
                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1; 

                                            }

                                        }
                                        // Chooses to Read
                                        else if(bb2 == "Read" || bb2 == "read")
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
                                                    return 0;
                                                }
                                                else if(randomp1 == 0)
                                                {

                                                    cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {

                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1;  

                                            }

                                        }
                                        // Chooses to do Homework
                                        else if(bb2 == "Homework" || bb2 == "homework")
                                        {
                                            // Good Homework
                                            if(randomp1 != 1)
                                            {

                                                cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Bad Homework
                                            else
                                            {

                                                cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                                cout << "Game Over. Play Again?" << "\n"; 
                                                return 0;
                                            } 

                                        }
                                        else
                                        {
                                            // Didn't follow directions
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;

                                        }
                                    }
                                    else if(bb3 == "Done" || bb3 == "done")
                                    {

                                        cout << "Alright then, goodnight!" << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1; 

                                    } 
                                }
                            }
                            else if(sick == "Shower" || sick == "shower")
                            {

                                // Good Sick Shower
                                if(randomp1 == 1)
                                {

                                    cout << "You had a good shower with no problems. Luckily you didn't throw up! Do you want to do anything before you go to bed?" << "\n";
                                    string bb;
                                    cout <<  "Yes or No?" << "\n";
                                    cin >> bb;

                                        if(bb == "Yes" || bb == "yes")
                                        {

                                            cout << "Geez fine, what did you wanna do then?" << "\n";
                                            cout << "1) VideoGames" << "\n";
                                            cout << "2) Read" << "\n";
                                            cout << "3) Homework" << "\n";
                                            string bb2;
                                            cin >> bb2;

                                            // Chooses Video Games
                                            if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                                // Cracked Day
                                                if(randomp1 == 1)
                                                {

                                                    cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }
                                                // Noob Day
                                                else
                                                {

                                                    cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {
                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1; 

                                            }

                                        }
                                        // Chooses to Read
                                        else if(bb2 == "Read" || bb2 == "read")
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
                                                    return 0;
                                                }
                                                else if(randomp1 == 0)
                                                {

                                                    cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {

                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1;  

                                            }

                                        }
                                        // Chooses to do Homework
                                        else if(bb2 == "Homework" || bb2 == "homework")
                                        {
                                            // Good Homework
                                            if(randomp1 != 1)
                                            {

                                                cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Bad Homework
                                            else
                                            {

                                                cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                                cout << "Game Over. Play Again?" << "\n"; 
                                                return 0;
                                            } 

                                        }
                                        else
                                        {
                                            // Didn't follow directions
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;

                                        }

                                    }
                                    else if(bb == "No" || bb == "no")
                                    {

                                        cout << "Alright then, goodnight!" << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1; 

                                    }

                                }
                                else
                                {
                                    // Bad Sick Shower
                                    cout << "Bad news " << name << " you threw up in the shower. After quickly cleaning it up you get back to your room. Will you go to sleep to hide your shame?" << "\n";
                                    string bb;
                                    cout << "Yes or No" << "\n";
                                    cin >> bb;

                                    if(bb == "Yes" || bb == "yes")
                                    {

                                        cout << "Geez fine, what did you wanna do then?" << "\n";
                                        cout << "1) VideoGames" << "\n";
                                        cout << "2) Read" << "\n";
                                        cout << "3) Homework" << "\n";
                                        string bb2;
                                        cin >> bb2;

                                        // Chooses Video Games
                                        if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                                // Cracked Day
                                                if(randomp1 == 1)
                                                {

                                                    cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }
                                                // Noob Day
                                                else
                                                {

                                                    cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {
                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1; 

                                            }

                                        }
                                        // Chooses to Read
                                        else if(bb2 == "Read" || bb2 == "read")
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
                                                    return 0;
                                                }
                                                else if(randomp1 == 0)
                                                {

                                                    cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }   

                                            }
                                            else
                                            {

                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1;  

                                            }

                                        }
                                        // Chooses to do Homework
                                        else if(bb2 == "Homework" || bb2 == "homework")
                                        {
                                            // Good Homework
                                            if(randomp1 != 1)
                                            {

                                                cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Bad Homework
                                            else
                                            {

                                                cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                                cout << "Game Over. Play Again?" << "\n"; 
                                                return 0;
                                            } 

                                        }
                                        else
                                        {
                                            // Didn't follow directions
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;

                                        }

                                    }
                                    else if(bb == "No" || bb == "no")
                                    {

                                        cout << "Alright then, goodnight!" << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;  

                                    }

                                }

                            }
                            else
                            {

                                cout << "Game Over. You didn't follow directions." << "\n";
                                return 1; 


                            }

                        }
                    

                    }
                    else
                    {

                        cout << "Game Over. You didn't follow directions." << "\n";
                        return 1; 

                    }

                }

            }
            else
            {
                // Didn't follow directions
                cout << "Game Over. You didn't follow directions." << "\n";
                return 1;

            }

        }
        // Go to Class
        else if(c1 == 2)
        {

            cout << "Great choice " << name << ", way to capitalize on the day. After class finishes do you wanna eat dinner? This is your only chance to do so." << "\n";
                string dinner;
                cout << "Yes or No" << "\n";
                cin >> dinner;

                // Chooses to Eat
                if(dinner == "Yes" || dinner == "yes")
                {

                    // Where to Eat
                    cout << "Great! Let's keep this good day rolling, " << name << ". What did you wanna eat?" << "\n";
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

                            // Good Food Route
                            cout << "What great food provided by Oregon State University Housing and Dining! You left the dining hall feeling satisfied and ready to go back to sleep. Will you shower before you sleep?" << "\n";
                            string shower;
                            //Shower prompt
                            cout << "Yes or No?" << shower << "\n";
                            cin >> shower;

                            //Taking shower
                            if(shower == "yes" || shower == "Yes")
                            {

                                //Before Bed Prompt
                                cout << "Good job " << name << ", you're really making the most out of your day. Anything else you wanna do before you go to bed?" << "\n";
                                string bb;
                                cout << "Yes or No?" << bb << "\n";
                                cin >> bb;

                                // Do Stuff Before Bed
                                if(bb == "yes" || bb =="Yes")
                                {

                                    //Before Bed Options
                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) VideoGames" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    string bb2;
                                    cin >> bb2;

                                    // Chooses Video Games
                                    if(bb2 == "VideoGames" || bb2 == "videogames" || bb2  == "Videogames" || bb2 == "videoGames")
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

                                            // Cracked Day
                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Noob Day
                                            else
                                            {

                                                cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {
                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1; 

                                        }   

                                    }
                                    // Chooses to Read
                                    else if(bb2 == "Read" || bb2 == "read")
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
                                                return 0;
                                            }
                                        }
                                        else if(randomp1 == 0)
                                        {

                                            cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        else
                                        {

                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;  

                                        }
                                    }
                                    // Chooses to do Homework
                                    else if(bb2 == "Homework" || bb2 == "homework")
                                    {
                                        // Good Homework
                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }   
                                        // Bad Homework
                                        else
                                        {

                                        cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                        cout << "Game Over. Play Again?" << "\n"; 
                                        return 0;
                                        } 

                                    }
                                    else
                                    {
                                        // Didn't follow directions
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;

                                    }

                                }
                                else if(bb == "No" || bb == "no")
                                {

                                    cout << "Alright then, goodnight!" << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }
                                else
                                {

                                   // Didn't follow directions
                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1; 

                                }


                            }
                            if(shower == "no" || shower == "No")
                            {

                                cout << "Ew that's kinda gross, but I won't judge I guess. Anything else you want to do before bed?" << "\n";
                                cout << "Yes or No?" << "\n";
                                string choice;
                                cin >> choice;

                                // Do Stuff Before Bed
                                if(choice == "Yes" || choice == "yes")
                                {

                                    cout << "Geez fine, what did you wanna do then?" << "\n";
                                    cout << "1) VideoGames" << "\n";
                                    cout << "2) Read" << "\n";
                                    cout << "3) Homework" << "\n";
                                    string bb2;
                                    cin >> bb2;

                                    // Chooses Video Games
                                    if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                            // Cracked Day
                                            if(randomp1 == 1)
                                            {

                                                cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Noob Day
                                            else
                                            {

                                                cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {
                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1; 

                                        }

                                    }
                                    // Chooses to Read
                                    else if(bb2 == "Read" || bb2 == "read")
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
                                                return 0;
                                            }
                                            else if(randomp1 == 0)
                                            {

                                                cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }

                                        }
                                        else
                                        {

                                            // Didn't Follow Directiosn
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;  

                                        }

                                    }
                                    // Chooses to do Homework
                                    else if(bb2 == "Homework" || bb2 == "homework")
                                    {
                                        // Good Homework
                                        if(randomp1 != 1)
                                        {

                                            cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                            cout << "Game Over. Play Again?" << "\n";
                                            return 0;

                                        }
                                        // Bad Homework
                                        else
                                        {

                                            cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                            cout << "Game Over. Play Again?" << "\n"; 
                                            return 0;
                                        } 

                                    }   
                                    else
                                    {
                                        // Didn't follow directions
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;

                                    }
                                        
                                }
                                else if(choice == "No" || choice == "no")
                                {

                                        
                                    cout << "Alright then, goodnight!" << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }
                                else
                                {

                                    // Didn't follow directions
                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1;

                                }

                            }
                            else
                            {

                                // Didn't follow directions
                                cout << "Game Over. You didn't follow directions." << "\n";
                                return 1;

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
                                    string bb2;
                                    cout << "Anything else you want to do before bed?" << "\n";
                                    cout << "Yes or No" << "\n";
                                    cin >> bb2;

                                    // Chooses to do somethng after showering
                                    if(bb2 == "yes" || bb2 == "Yes")
                                    {

                                        cout << "Geez fine, what did you wanna do then?" << "\n";
                                        cout << "1) VideoGames" << "\n";
                                        cout << "2) Read" << "\n";
                                        cout << "3) Homework" << "\n";
                                        string bb2;
                                        cin >> bb2;

                                        // Chooses Video Games
                                        if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                                // Cracked Day
                                                if(randomp1 == 1)
                                                {

                                                    cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }
                                                // Noob Day
                                                else
                                                {

                                                    cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {
                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1; 

                                            }

                                        }
                                        // Chooses to Read
                                        else if(bb2 == "Read" || bb2 == "read")
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
                                                    return 0;
                                                }
                                                else if(randomp1 == 0)
                                                {

                                                    cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {

                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1;  

                                            }

                                        }
                                        // Chooses to do Homework
                                        else if(bb2 == "Homework" || bb2 == "homework")
                                        {
                                            // Good Homework
                                            if(randomp1 != 1)
                                            {

                                                cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Bad Homework
                                            else
                                            {

                                                cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                                cout << "Game Over. Play Again?" << "\n"; 
                                                return 0;
                                            } 

                                        }   
                                        else
                                        {
                                            // Didn't follow directions
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;

                                        }
                                        
                                    }
                                    else if(bb2 == "No" || bb2 == "no")
                                    {

                                        
                                        cout << "Alright then, goodnight!" << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }
                                    else
                                    {

                                       // Didn't follow directions
                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;
   

                                    }

                                }
                                // Pooped Yourself
                                else
                                {

                                    cout << "Bad news " << name << ", you pooped yourself lol. You feverishly wipe yourself before taking a shower of shame." << "\n";
                                    cout << "Will you end this embarassing day or continue on and do something else?" << "\n";
                                    string bb3;
                                    cout << "Done or Continue?" << bb3 << "\n";
                                    cin >> bb3;

                                    if(bb3 == "continue" || bb3 == "Continue")
                                    {

                                        cout << "Geez fine, what did you wanna do then?" << "\n";
                                        cout << "1) VideoGames" << "\n";
                                        cout << "2) Read" << "\n";
                                        cout << "3) Homework" << "\n";
                                        string bb2;
                                        cin >> bb2;

                                        // Chooses Video Games
                                        if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                                // Cracked Day
                                                if(randomp1 == 1)
                                                {

                                                    cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }
                                                // Noob Day
                                                else
                                                {

                                                    cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {
                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1; 

                                            }

                                        }
                                        // Chooses to Read
                                        else if(bb2 == "Read" || bb2 == "read")
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
                                                    return 0;
                                                }
                                                else if(randomp1 == 0)
                                                {

                                                    cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {

                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1;  

                                            }

                                        }
                                        // Chooses to do Homework
                                        else if(bb2 == "Homework" || bb2 == "homework")
                                        {
                                            // Good Homework
                                            if(randomp1 != 1)
                                            {

                                                cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Bad Homework
                                            else
                                            {

                                                cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                                cout << "Game Over. Play Again?" << "\n"; 
                                                return 0;
                                            } 

                                        }
                                        else
                                        {
                                            // Didn't follow directions
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;

                                        }
                                    }
                                    else if(bb3 == "Done" || bb3 == "done")
                                    {

                                        cout << "Alright then, goodnight!" << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1; 

                                    } 
                                }

                            }
                            else if(sick == "Shower" || sick == "shower")
                            {

                                // Good Sick Shower
                                if(randomp1 == 1)
                                {

                                    cout << "You had a good shower with no problems. Luckily you didn't throw up! Do you want to do anything before you go to bed?" << "\n";
                                    string bb;
                                    cout <<  "Yes or No?" << "\n";
                                    cin >> bb;

                                    if(bb == "Yes" || bb == "yes")
                                    {

                                        cout << "Geez fine, what did you wanna do then?" << "\n";
                                        cout << "1) VideoGames" << "\n";
                                        cout << "2) Read" << "\n";
                                        cout << "3) Homework" << "\n";
                                        string bb2;
                                        cin >> bb2;

                                        // Chooses Video Games
                                        if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                                // Cracked Day
                                                if(randomp1 == 1)
                                                {

                                                    cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }
                                                // Noob Day
                                                else
                                                {

                                                    cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {
                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1; 

                                            }

                                        }
                                        // Chooses to Read
                                        else if(bb2 == "Read" || bb2 == "read")
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
                                                    return 0;
                                                }
                                                else if(randomp1 == 0)
                                                {

                                                    cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {

                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1;  

                                            }

                                        }
                                        // Chooses to do Homework
                                        else if(bb2 == "Homework" || bb2 == "homework")
                                        {
                                            // Good Homework
                                            if(randomp1 != 1)
                                            {

                                                cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Bad Homework
                                            else
                                            {

                                                cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                                cout << "Game Over. Play Again?" << "\n"; 
                                                return 0;
                                            } 

                                        }
                                        else
                                        {
                                            // Didn't follow directions
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;

                                        }

                                    }
                                    else if(bb == "No" || bb == "no")
                                    {

                                        cout << "Alright then, goodnight!" << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1; 

                                    }

                                }
                                else
                                {
                                    // Bad Sick Shower
                                    cout << "Bad news " << name << " you threw up in the shower. After quickly cleaning it up you get back to your room. Will you go to sleep to hide your shame?" << "\n";
                                    string bb;
                                    cout << "Yes or No" << "\n";
                                    cin >> bb;

                                    if(bb == "Yes" || bb == "yes")
                                    {

                                        cout << "Geez fine, what did you wanna do then?" << "\n";
                                        cout << "1) VideoGames" << "\n";
                                        cout << "2) Read" << "\n";
                                        cout << "3) Homework" << "\n";
                                        string bb2;
                                        cin >> bb2;

                                        // Chooses Video Games
                                        if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                                // Cracked Day
                                                if(randomp1 == 1)
                                                {

                                                    cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }
                                                // Noob Day
                                                else
                                                {

                                                    cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {
                                                // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1; 

                                            }

                                        }
                                        // Chooses to Read
                                        else if(bb2 == "Read" || bb2 == "read")
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
                                                    return 0;
                                                }
                                                else if(randomp1 == 0)
                                                {

                                                    cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                                    cout << "Game Over. Play Again?" << "\n";
                                                    return 0;

                                                }

                                            }
                                            else
                                            {

                                             // Didn't Follow Directiosn
                                                cout << "Game Over. You didn't follow directions." << "\n";
                                                return 1;  

                                            }

                                        }
                                        // Chooses to do Homework
                                        else if(bb2 == "Homework" || bb2 == "homework")
                                        {
                                            // Good Homework
                                            if(randomp1 != 1)
                                            {

                                                cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                                cout << "Game Over. Play Again?" << "\n";
                                                return 0;

                                            }
                                            // Bad Homework
                                            else
                                            {

                                                cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                                cout << "Game Over. Play Again?" << "\n"; 
                                                return 0;
                                            } 

                                        }
                                        else
                                        {
                                            // Didn't follow directions
                                            cout << "Game Over. You didn't follow directions." << "\n";
                                            return 1;

                                        }

                                    }
                                    else if(bb == "No" || bb == "no")
                                    {

                                        cout << "Alright then, goodnight!" << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }
                                    else
                                    {

                                        cout << "Game Over. You didn't follow directions." << "\n";
                                        return 1;  

                                    }

                                }

                            }
                            else
                            {

                                cout << "Game Over. You didn't follow directions." << "\n";
                                return 1; 


                            }

                        }
                    
                    }
                    else
                    {

                        cout << "Game Over. You didn't follow directions." << "\n";
                        return 1; 

                    }

                }
                else if(dinner == "No" || dinner == "no")
                {

                    cout << "You're a weirdo "<< name << ". Dinner is important. Though I can't judge. I'm a machine. Did you wanna do anything else before bed?" << "\n";
                    string bb;
                    cout << "Yes or No" << "\n";
                    cin >> bb;

                    if(bb == "Yes" || bb == "yes")
                    {

                        cout << "Geez fine, what did you wanna do then?" << "\n";
                        cout << "1) VideoGames" << "\n";
                        cout << "2) Read" << "\n";
                        cout << "3) Homework" << "\n";
                        string bb2;
                        cin >> bb2;

                        // Chooses Video Games
                        if(bb2 == "VideoGames" || bb2 == "videogames")
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

                                // Cracked Day
                                if(randomp1 == 1)
                                {

                                    cout << "Geez your cracked " << name << "! Your KD was " << cracked << ". You go to sleep feeling like the God of gamers." << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }
                                // Noob Day
                                else
                                {

                                    cout << "Dang " << name << " today really wasn't your day. You got absolutely washed with a KD of " << kd << ". You got to sleep wishing you had punched your monitor in the face." << "\n";
                                    cout << "Game Over. Play Again?" << "\n";
                                    return 0;

                                }

                            }
                            else
                            {
                                // Didn't Follow Directiosn
                                cout << "Game Over. You didn't follow directions." << "\n";
                                return 1; 

                            }

                        }
                        // Chooses to Read
                        else if(bb2 == "Read" || bb2 == "read")
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
                                        return 0;
                                    }
                                    else if(randomp1 == 0)
                                    {

                                        cout << "After remembering how much you hated books, you go to sleep grumpily feeling that you wasted your time" << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 0;

                                    }

                                }
                                else
                                {

                                    // Didn't Follow Directiosn
                                    cout << "Game Over. You didn't follow directions." << "\n";
                                    return 1;  

                                }

                        }
                        // Chooses to do Homework
                        else if(bb2 == "Homework" || bb2 == "homework")
                        {
                            // Good Homework
                            if(randomp1 != 1)
                            {

                                cout << "Good news " << name << ", like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                cout << "Game Over. Play Again?" << "\n";
                                return 0;

                            }
                            // Bad Homework
                            else
                            {

                                cout << "Bad news " << name << ", your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                cout << "Game Over. Play Again?" << "\n"; 
                                return 0;

                            } 

                        }
                        else
                        {
                            // Didn't follow directions
                            cout << "Game Over. You didn't follow directions." << "\n";
                            return 1;

                        }

                    }
                    else if(bb == "No" || bb == "no")
                    {

                        cout << "Alright then, goodnight!" << "\n";
                        cout << "Game Over. Play Again?" << "\n";
                        return 0;

                    }
                    else
                    {

                        cout << "Game Over. You didn't follow directions." << "\n";
                        return 1;  

                    }
                    

                }
                else
                {

                    // Didn't follow directions
                    cout << "Game Over. You didn't follow directions." << "\n";
                    return 1;
  

                }

        }
        else
        {

            cout << "Game Over. You didn't follow directions." << "\n";
            return 1; 

        }

    }

}