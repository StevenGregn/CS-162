if(bb2 == 3)
{

                                    if(randomp1 != 1)
                                    {

                                        cout << "Good news, " << name << "like the good student you apparently are you got all your homework done. You go to bed satisfied, and ready to tackle the next day." << "\n";
                                        cout << "Game Over. Play Again?" << "\n";
                                        return 22;

                                    }
                                    else
                                    {

                                        cout << "Bad news," << name << "your high school work habits continue you to haunt you, and you finish literally zero homework. You go to bed feeling sad and dejected." << "\n";
                                        cout << "Game Over. Play Again?" << "\n"; 
                                        return 23;

                                    } 
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
                                        else
                                        {

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
                                else if(bb2 == 2)
                                {

                                    cout << "Lol are you a nerd " << name << " who reads these days? Whatever. What do you want to read?" << "\n";
                                    cout << "1) Coding for Dummies" << "\n";
                                    cout << "2) Surrounded by Idiots" << "\n";
                                    cout << "3) The book collecting dust on your shelf" << "\n";
                                    int book;
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
}
if
{


}
else
{



}