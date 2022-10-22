#include <iostream>
#include <fstream>
#include "HAssignment.h"
using namespace std;

/******************************************************************************
 * Function: phase1
 * Description: Perform phase 1 of my program
 * Parameters: ifstream &fin
 * Pre-Conditions: 
 * Post-Conditions: Phase 1 will be finished
 * ****************************************************************************/
Pokedex main_1()
{
    ifstream file;
    Pokedex smoke;
    Pokemon mon;
    string dex_name = " ";

    // only does this if file doesn't exsist
    if(exsist_check(file, dex_name) == 1)
    {
        smoke.dex = NULL;
        mon.moves = NULL;
        return smoke;
    }
    

    // Get total number of pokemon and then intialize smoke.dex to be each mon pass for number of pokemon
    populate_pokedex_data(smoke, file);
    for(int i = 0; i < smoke.num_pokemon; i ++)
    {
        populate_pokemon(mon, file);
        smoke.dex[i] = mon;
    }
    file.close();
    if(print_options(smoke, mon, dex_name) == 1)
    return smoke;
}
/******************************************************************************
 * Function: print_options
 * Description: Display Options
 * Parameters: Pokedex &smoke
 * Pre-Conditions: struct Pokedex must exist
 * Post-Conditions: Options will be printed
 * ****************************************************************************/
int print_options(Pokedex &smoke, Pokemon &mon, string dex_name)
{
    int number = 0;
    do
    {
        string options;
        options_text(smoke);
        cin >> options;
        // while the input isn't a number
        while(!(is_int(options)))
        {
            cout << "Error. Enter a Number 1-5" << endl;
            options_text(smoke);
            cin >> options;
        }
        number = stoi(options);
        // while the number isn't range
        while(number < 1 || number > 5)
        {
            cout << "Error. Enter a Number 1-5" << endl;
            options_text(smoke);
            cin >> options;
        }
        number = stoi(options);
        option_time(number, mon, smoke, dex_name);

    }while(number != 5);
    
}
/******************************************************************************
 * Function: options_text
 * Description: Display Options Text
 * Parameters: Pokedex &smoke
 * Pre-Conditions: struct Pokedex must exist
 * Post-Conditions: Options will be printed(text)
 * ****************************************************************************/
void options_text(Pokedex &smoke)
{
    // General options for the Pokedex
    cout << "Select what to do with your Pokedex " << smoke.trainer << "?" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Search by Dex Number" << "\t" << "[1]" << endl;
    cout << "Search by Name" << "\t" << "\t" << "[2]" << endl;
    cout << "Search by Type" << "\t" << "\t" << "[3]" << endl;
    cout << "Add New Pokemon" << "\t" << "\t" << "[4]" << endl;
    cout << "Quit the Program" << "\t" << "[5]" << endl;
    cout << "----------------------------------------------" << endl;

}
/******************************************************************************
 * Function: option_time
 * Description: User chooses what they want to do
 * Parameters: int number
 * Pre-Conditions: number must exsist, struct type Pokemon must exsist (& also)
 * Post-Conditions: Things will be done based on options
 * ****************************************************************************/
int option_time(int number, Pokemon &mon, Pokedex &smoke, string dex_name)
{
    int option = 0;
    int dex_number = 0;
    string name = " ";
    string type = " ";
    // For each option prompt the user if they want to print or save and then do selected
    if(number == 1)
    option1(smoke, dex_number, option, mon, dex_name);
    else if(number == 2)
    option2(smoke, option, mon, name, dex_name);
    else if(number == 3)
    option3(smoke, mon, option, type, dex_name);
    else if(number == 4)
    make_pokemon(dex_name, smoke, mon, option);
    else if(number == 5)
    {
        delete_info(smoke);
        return 1;
    }
    else
    print_options(smoke, mon, dex_name);
}
/******************************************************************************
 * Function: option3
 * Description: Does option 3 
 * Parameters: Pokedex &smoke, Pokemon &mon, int option, string type, string dex_name
 * Pre-Conditions: All of the above must exsist for the program to run
 * Post-Conditions: Option 3 will be fully performed
 * ****************************************************************************/
void option3(Pokedex &smoke, Pokemon &mon, int option, string type, string dex_name)
{
    // If type isn't in specified array
    type = search_type(smoke);
    if(type == " ")
    {
        cout << "Pokemon Type Doesn't Exsist" << endl << endl;
        print_options(smoke, mon, dex_name);
    }
    else
    {
        cout << endl;
        print_or_save(option);
    }

    // continues the option process
    if(option == 1)
    make_type_file(smoke, type);
    else
    print_type_console(smoke, type);
}
/******************************************************************************
 * Function: option2
 * Description: Does option 2
 * Parameters: Pokedex &smoke, int option, Pokemon &mon, string name, string dex_name
 * Pre-Conditions: All of the above must exsist for the program to run
 * Post-Conditions: Option 2 will be fully performed
 * ****************************************************************************/
void option2(Pokedex &smoke, int option, Pokemon &mon, string name, string dex_name)
{
    // Makes sure that the name isn't already present
    name = search_name(smoke);
    if(name == " ")
    {
        cout << "Pokemon Name Doesn't Exsist" << endl << endl;
        print_options(smoke, mon, dex_name);
    }
    else
    {
        cout << endl;
        print_or_save(option);
    }

    // Continue option proces
    if(option == 1)
    make_name_file(smoke, name);
    else
    print_name_console(smoke, name);
}
/******************************************************************************
 * Function: option1
 * Description: Does option 1
 * Parameters: Pokedex &smoke, int dex_number, int option, Pokemon &mon, string dex_name
 * Pre-Conditions: All of the above must exsist for the program to run
 * Post-Conditions: Option 1 will be fully performed
 * ****************************************************************************/
void option1(Pokedex &smoke, int dex_number, int option, Pokemon &mon, string dex_name)
{
    // Ensure dex number is in the system
    dex_number = search_number(smoke);
    if(dex_number == -1)
    {
        cout << "Dex Number Doesn't Exsists" << endl << endl;
        print_options(smoke, mon, dex_name);
    }
    else
    print_or_save(option);
    
    // Continues with optios
    if(option == 1)
    make_dex_file(smoke, dex_number);
    else
    print_dex_console(smoke, dex_number);

}
/******************************************************************************
 * Function: make_pokemon
 * Description: Makes the new pokemon
 * Parameters: string dex_name, Pokedex &smoke, Pokemon &mon
 * Pre-Conditions: All of the above must exsist for the program to run
 * Post-Conditions: New Pokemon will be made
 * ****************************************************************************/
void make_pokemon(string dex_name, Pokedex &smoke, Pokemon &mon, int option)
{
    // Copy all of the data into temp
    Pokemon * temp;
    temp = new Pokemon[smoke.num_pokemon + 1]; 
    for(int i = 0; i < smoke.num_pokemon; i++)
    temp[i] = smoke.dex[i];
    // Get new pokemon information at last index of array
    temp[smoke.num_pokemon] = get_new_p(smoke);
    delete [] smoke.dex;
    smoke.dex = temp;
    // Increase number of total
    smoke.num_pokemon++;
    print_or_save(option);

    // Continue with options
    if(option == 2)
    print_new_console(smoke, dex_name);
    else
    print_new_poke(smoke, dex_name);   
}
/******************************************************************************
 * Function: print_new_console
 * Description: Print new info to Console
 * Parameters: Pokedex &smoke, string dex_name
 * Pre-Conditions: All of the above must exsist for the program to run
 * Post-Conditions: Info will be printed to console
 * ****************************************************************************/
void print_new_console(Pokedex &smoke, string dex_name)
{
    // Print data to console at specific index
    edit_file_console(smoke, dex_name);
    cout << smoke.num_pokemon << endl;
    for(int i = 0; i < smoke.num_pokemon; i ++)
    {
        cout << smoke.dex[i].dex_num << " ";
        cout << smoke.dex[i].name << " ";
        cout << smoke.dex[i].type << " ";
        cout << smoke.dex[i].num_moves << endl;
        for(int j = 0; j < smoke.dex[i].num_moves; j++)
        cout << smoke.dex[i].moves[j] << " ";
        cout << endl;
    }
}
/******************************************************************************
 * Function: edit_file_console
 * Description: Print new data to file (if console selected)
 * Parameters: Pokedex &smoke, string dex_name
 * Pre-Conditions: All of the above must exsist for the program to run
 * Post-Conditions: Info will be printed to file
 * ****************************************************************************/
void edit_file_console(Pokedex &smoke, string dex_name)
{
    ofstream fout;
    fout.open(dex_name.c_str());
    fout << smoke.num_pokemon << endl;
    for(int i = 0; i < smoke.num_pokemon; i ++)
    {
        fout << smoke.dex[i].dex_num << " ";
        fout << smoke.dex[i].name << " ";
        fout << smoke.dex[i].type << " ";
        fout << smoke.dex[i].num_moves << endl;
        for(int j = 0; j < smoke.dex[i].num_moves; j++)
        fout << smoke.dex[i].moves[j] << " ";
        fout << endl;
    }
}
/******************************************************************************
 * Function: get_new_p
 * Description: Makes the new pokemon
 * Parameters: Pokedex &smoke
 * Pre-Conditions: All of the above must exsist for the program to run
 * Post-Conditions: New Pokemon data will have been aquired
 * ****************************************************************************/
Pokemon get_new_p(Pokedex &smoke)
{
    Pokemon new_p;
    string new_name = " ";
    string new_type = " ";
    int dex_number = 0;
    int num_moves;
    string trainer = smoke.trainer;
    // Gather new pokemon info
    do_get(smoke, new_name, new_type, dex_number, num_moves);

    // Store all the data in the Pokemon struct and return the struct
    new_p.dex_num = dex_number;
    new_p.name = new_name;
    new_p.type = new_type;
    new_p.num_moves = num_moves;
    new_p.moves = create_moves(num_moves);
    get_moves(new_p.moves, num_moves);

    return new_p;    
}
/******************************************************************************
 * Function: print_new_poke
 * Description: Prints new data to file
 * Parameters: ofstream &fout, Pokedex &smoke, string dex_name
 * Pre-Conditions: All of the above must exsist for the program to run
 * Post-Conditions: New Pokemon data will be printed
 * ****************************************************************************/
void print_new_poke(Pokedex &smoke, string dex_name)
{
    string new_poke;
    ofstream fout;
    if(exsist_check_new(fout, new_poke) == 1)
    fout.open(new_poke.c_str());
    else if(new_poke == dex_name)
    fout.open(new_poke.c_str());
    else
    fout.open(new_poke.c_str(), ios::app);

    // Print new data to the file (appended depending)
    fout << smoke.num_pokemon << endl;
    for(int i = 0; i < smoke.num_pokemon; i ++)
    {
        fout << smoke.dex[i].dex_num << " ";
        fout << smoke.dex[i].name << " ";
        fout << smoke.dex[i].type << " ";
        fout << smoke.dex[i].num_moves << endl;
        for(int j = 0; j < smoke.dex[i].num_moves; j++)
        fout << smoke.dex[i].moves[j] << " ";
        fout << endl;
    }
    fout.close();
}
/******************************************************************************
 * Function: do_get
 * Description: Get data for new Pokemon
 * Parameters: Pokedex &smoke, string &new_name, string &new_type, int &dex_num, int &move_num
 * Pre-Conditions: All of the above must exsist for the program to run
 * Post-Conditions: Each part of the Pokemon will be gathered
 * ****************************************************************************/
void do_get(Pokedex &smoke, string &new_name, string &new_type, int &dex_num, int &move_num)
{
    // Do each funtion to get each piece of the Pokemon data
    get_dex_number(dex_num, smoke);
    get_type(new_type, smoke);
    get_name(new_name, smoke);
    get_move_num(move_num);
}
/******************************************************************************
 * Function: get_moves
 * Description: Get Moves of the New Pokemon
 * Parameters: string moves[], int num_moves
 * Pre-Conditions: All of the above must exsist for the program to run
 * Post-Conditions: Moves will be aquired
 * ****************************************************************************/
void get_moves(string moves[], int num_moves)
{
    // Get moves depending on the number of moves inputted
    string move;
    for(int i = 0; i < num_moves; i++)
    {
        move = " ";
        cout << "Move " << i + 1 << ":" << endl;
        cin >>  move;
        moves[i] = move;
    }
}
/******************************************************************************
 * Function: get_move_num
 * Description: Get Number of Moves
 * Parameters: int &moves
 * Pre-Conditions: All of the above must exsist for the program to run
 * Post-Conditions: Moves will be aquired
 * ****************************************************************************/
void get_move_num(int &moves)
{
    string options = " ";
    moves = 0;
    cout << "Enter Number of Moves:" << endl;
    cin >> options;
    // If input isn't a number
    while(!(is_int(options)))
    {
        cout << "Error. Enter a Number 1-4" << endl;
        cin >> options;
    }
    moves = stoi(options);
    // If input is out of range
    if(moves < 1 || moves > 4)
    {
        cout << "Error. Enter a Number 1-4" << endl;
        get_move_num(moves);
    }
    moves = stoi(options);
}
/******************************************************************************
 * Function: get_name
 * Description: Get Name of Pokemon
 * Parameters: string &new_name, Pokedex &smoke
 * Pre-Conditions: All of the above must exsist for the program to run
 * Post-Conditions: Namme of Pokemon will be aquired
 * ****************************************************************************/
void get_name(string &new_name, Pokedex &smoke)
{
    new_name = " ";
    cout << "Enter a Name for the Pokemon:" << endl;
    cin >> new_name;
    // Pokemon cannot equal a name that exsists
    for(int i = 0; i < smoke.num_pokemon; i++)
    {
        if(new_name == smoke.dex[i].name)
        {
            new_name = " ";
            break;
        }
        else
        continue;
    }
    if(new_name == " ")
    {
        cout << "Pokemon Already in Dex. Try Again" << endl;
        get_name(new_name, smoke);
    }
}
/******************************************************************************
 * Function: get_type
 * Description: Get Types of Pokemon
 * Parameters: string &new_type, Pokedex &smoke
 * Pre-Conditions: All of the above must exsist for the program to run
 * Post-Conditions: Types will be aquired
 * ****************************************************************************/
void get_type(string &new_type, Pokedex &smoke)
{
    new_type = " ";
    string Pokemon_type[] = {"Bug", "Dark", "Dragon", "Electric", "Fairy", "Fighting", "Fire", "Flying", "Ghost", "Grass", "Ground", "Ice", "Normal", "Poison", "Psychic", "Rock", "Steel", "Water"};
    cout << "Enter a Type for the Pokemon:" << endl;
    cin >> new_type;
    // iterate through above array, return " " if the type doesnt exsist
    for(int i = 0; i < 18; i++)
    {
        if(new_type == Pokemon_type[i])
        break;
        else if(i == 17)
        new_type = " ";
        else
        continue;
    }
    if(new_type == " ")
    {
        cout << "Invalid Type. Try Again" << endl;
        get_type(new_type, smoke);
    }
}
/******************************************************************************
 * Function: get_dex_number
 * Description: Get Dex Number of Moves
 * Parameters: int &new_dex, Pokedex &smoke
 * Pre-Conditions: All of the above must exsist for the program to run
 * Post-Conditions: Dex Number will be aquired
 * ****************************************************************************/
void get_dex_number(int &new_dex, Pokedex &smoke)
{
    string dex_temp;
    new_dex = 0;
    cout << "Enter a Dex Number for the Pokemon:" << endl;
    cin >> dex_temp;
    // Ensure is int
    while(!(is_int(dex_temp)))
    {
        cout << "Error. Enter a Dex Number for the Pokemon:" << endl;
        cin >> dex_temp;
    }
    new_dex = stoi(dex_temp);
    // Ensure the dex number doesn't exsist
    for(int i = 0; i < smoke.num_pokemon; i++)
    {
        if(new_dex == smoke.dex[i].dex_num)
        {
            new_dex = -1;
            break;
        }
        else
        continue;

    }
    if(new_dex == -1)
    {
        cout << "Error. Number Cannot Already Be Present" << endl;
        get_dex_number(new_dex, smoke);
    }
}
/******************************************************************************
 * Function: search_type
 * Description: Searches for type in the struct
 * Parameters: Pokedex &smoke
 * Pre-Conditions: struct type Pokemon must exsist
 * Post-Conditions: Type will be established as being there or not
 * ****************************************************************************/
string search_type(Pokedex &smoke)
{
    string type_temp = " ";
    cout << "Enter Desired Pokemon Type:" << endl;
    cin >> type_temp;
    // If a pokemon in the file equals that type return the type
    for(int i = 0; i < smoke.num_pokemon;i++)
    {
        if(type_temp == smoke.dex[i].type)
        return type_temp;
        else
        continue;
    }
    return " ";
}
/******************************************************************************
 * Function: make_type_file
 * Description: Makes file based on type of Pokemon
 * Parameters: Pokedex &smoke, string type
 * Pre-Conditions: struct type Pokemon must exsist, as well as string
 * Post-Conditions: Type file will be established
 * ****************************************************************************/
void make_type_file(Pokedex &smoke, string type)
{
    ofstream fout;
    string p_type;
    // Determine where type is in the file and then write to file
    int location[smoke.num_pokemon];
    if(exsist_check_new(fout, p_type) == 1)
    fout.open(p_type.c_str());
    else
    fout.open(p_type.c_str(), ios::app);
    find_type_location(smoke, type, location);
    print_type_file(smoke, location, fout);
    fout.close();  

}
/******************************************************************************
 * Function: find_type_location
 * Description: Searches for type in the struct (precise location)
 * Parameters: Pokedex &smoke, string type, int location[]
 * Pre-Conditions: struct type Pokemon, string, and int must exsist
 * Post-Conditions: Precise location of type will be established in the struct
 * ****************************************************************************/
void find_type_location(Pokedex &smoke, string type, int location[])
{
    int holder = 0;
    for(int i = 0; i < smoke.num_pokemon; i++)
    location[i] = -1;
    // Deteremines where type is on the file and if there is multiple
    for(int i = 0; i < smoke.num_pokemon; i++)
    {
        if(type == smoke.dex[i].type)
        {
            location[holder] = i;
            holder++;
        }
        else
        continue;
    }

}
/******************************************************************************
 * Function: print_type_file
 * Description: Stores data of Pokemon based on type in file 
 * Parameters: Pokedex &smoke, int location[], ofstream &fout
 * Pre-Conditions: struct type Pokemon, int[], and ofstream must exsist
 * Post-Conditions: Data will be written to file
 * ****************************************************************************/
void print_type_file(Pokedex &smoke, int location[], ofstream &fout)
{
    // iterate and print information
    for(int i = 0; i < smoke.num_pokemon; i++)
    {
        if(location[i] == -1)
        break;
        else
        {
            fout << smoke.dex[location[i]].dex_num << " ";
            fout << smoke.dex[location[i]].name << " ";
            fout << smoke.dex[location[i]].type << " ";
            fout << smoke.dex[location[i]].num_moves << endl;
            for(int j = 0; j < smoke.dex[location[i]].num_moves; j++)
            fout << smoke.dex[location[i]].moves[j] << " ";
            fout << endl;
        }
    }
}
/******************************************************************************
 * Function: print_type_console
 * Description: Prints data based on type to struct
 * Parameters: Pokedex &smoke, string type
 * Pre-Conditions: struct type Pokemon, and string must exsist
 * Post-Conditions: Data will be printed to terminal based on data
 * ****************************************************************************/
void print_type_console(Pokedex &smoke, string type)
{
    // Given location print the type to the console (prints multipel if multiple of the same type)
    int location[smoke.num_pokemon];
    find_type_location(smoke, type, location);
    for(int i = 0; i < smoke.num_pokemon; i++)
    {
        if(location[i] == -1)
        break;
        else
        {
            cout << smoke.dex[location[i]].dex_num << " ";
            cout << smoke.dex[location[i]].name << " ";
            cout << smoke.dex[location[i]].type << " ";
            cout << smoke.dex[location[i]].num_moves << endl;
            for(int j = 0; j < smoke.dex[location[i]].num_moves; j++)
            cout << smoke.dex[location[i]].moves[j] << " ";
            cout << endl << endl;
        }
    }
}
/******************************************************************************
 * Function: make_name_file
 * Description: prepares the data to be stored on a file
 * Parameters: Pokedex &smoke, string name
 * Pre-Conditions: struct type Pokemon must exsist, as well as a string
 * Post-Conditions: Data will be written to file
 * ****************************************************************************/
void make_name_file(Pokedex &smoke, string name)
{
    ofstream fout;
    string p_name;
    int location = 0;
    // Determine if file exsists or not
    if(exsist_check_new(fout, p_name) == 1)
    fout.open(p_name.c_str());
    else
    fout.open(p_name.c_str(), ios::app);
    location = find_name_location(smoke, name);
    print_name_file(smoke, location, fout);
    fout.close();  
}

void print_name_console(Pokedex &smoke, string name)
{
    // Prints data to console based on the information asked for
    int location = 0;
    location = find_name_location(smoke, name);
    cout << smoke.dex[location].dex_num << " ";
    cout << smoke.dex[location].name << " ";
    cout << smoke.dex[location].type << " ";
    cout << smoke.dex[location].num_moves << endl;
    for(int i = 0; i < smoke.dex[location].num_moves; i++)
    cout << smoke.dex[location].moves[i] << " ";
    cout << endl << endl;
}
/******************************************************************************
 * Function: find_name_location
 * Description: determine where in struct to get information from
 * Parameters: Pokedex &smoke, string name
 * Pre-Conditions: struct type Pokemon must exsist, as well as a string
 * Post-Conditions: Where in the struct the data is will be ascertained
 * ****************************************************************************/
int find_name_location(Pokedex &smoke, string name)
{
    // Iterate through index to find the same name
    for(int i = 0 ; i < smoke.num_pokemon; i++)
    {
        if(smoke.dex[i].name == name)
        return i;  
    }
}
/******************************************************************************
 * Function: print_name_file
 * Description: Prints name file information
 * Parameters: Pokedex &smoke, int location, ofstream &fout
 * Pre-Conditions: struct type Pokemon must exsist, int and ofstream as well
 * Post-Conditions: Data will be written to file
 * ****************************************************************************/
void print_name_file(Pokedex &smoke, int location, ofstream &fout)
{
    // Print out the name given the location of it in the array (to the file)
    fout << smoke.dex[location].dex_num << " ";
    fout << smoke.dex[location].name << " ";
    fout << smoke.dex[location].type << " ";
    fout << smoke.dex[location].num_moves << endl;
    for(int i = 0; i < smoke.dex[location].num_moves; i++)
    fout << smoke.dex[location].moves[i] << " ";
}
/******************************************************************************
 * Function: search_name
 * Description: Determine if dex name is listed
 * Parameters: Pokedex &smoke
 * Pre-Conditions: struct type Pokemon must exsist (& also)
 * Post-Conditions: Name will exsist or not
 * ****************************************************************************/
string search_name(Pokedex &smoke)
{
    string name_temp = " ";
    cout << "Enter Desired Pokemon Name:" << endl;
    cin >> name_temp;
    // Determine if the name is in the dex or not
    for(int i = 0; i < smoke.num_pokemon;i++)
    {
        if(name_temp == smoke.dex[i].name)
        return name_temp;
        else
        continue;
    }
    return " ";
}
/******************************************************************************
 * Function: search_number
 * Description: Determine if dex number is listed
 * Parameters: Pokedex &smoke
 * Pre-Conditions: struct type Pokemon must exsist (& also)
 * Post-Conditions: Dex will exsist or not
 * ****************************************************************************/
int search_number(Pokedex &smoke)
{
    string dex_number_temp_string = " ";
    int dex_number_temp = 0;
    cout << "Enter Desired Dex Number:" << endl;
    cin >>  dex_number_temp_string;
    // Ensure input is a number
    while(!(is_int(dex_number_temp_string)))
    {
        cout << "Error. Must be a number" << endl;
        cout << "Enter Desired Dex Number:" << endl;
        cin >> dex_number_temp_string;
    }
    dex_number_temp = stoi(dex_number_temp_string);
    // Check that it's in the dex if not return -1
    for(int i = 0 ; i < smoke.num_pokemon; i++)
    {
        if(smoke.dex[i].dex_num == dex_number_temp)
        return dex_number_temp;
        
    }
    return -1;
}
/******************************************************************************
 * Function: print_dex_console
 * Description: Print Stuff to Console
 * Parameters: Pokedex &smoke, int dex_number
 * Pre-Conditions: Pokedex must exsist, and int must exsist
 * Post-Conditions: Data will be printed to console
 * ****************************************************************************/
void print_dex_console(Pokedex &smoke, int dex_number)
{
    // Print to console based on dex numbder location
    int location = 0;
    location = find_dex_location(smoke, dex_number);
    cout << smoke.dex[location].dex_num << " ";
    cout << smoke.dex[location].name << " ";
    cout << smoke.dex[location].type << " ";
    cout << smoke.dex[location].num_moves << endl;
    for(int i = 0; i < smoke.dex[location].num_moves; i++)
    cout << smoke.dex[location].moves[i] << " ";
    cout << endl << endl;
}
/******************************************************************************
 * Function: print_or_save
 * Description: Determine print or save option to file
 * Parameters: int &option
 * Pre-Conditions: number must exsist and int address must exsist
 * Post-Conditions: Things will be done based on choice
 * ****************************************************************************/
void print_or_save(int &option)
{
    string o_1 = " ";
    option = 0;
    print_or_save_text();
    cin >> o_1;
    cout << endl;
    // Make sure input is a number
    while(!(is_int(o_1)))
    {
        cout << "Invalid Entry. Try Again" << endl;
        print_or_save_text();
        cin >> o_1;
        cout << endl;
    }
    option = stoi(o_1);
    // If input isn't in range
    if(option != 1 && option != 2)
    {
        cout << "Invalid Entry. Try Again" << endl;
        print_or_save(option);
    }    
}
/******************************************************************************
 * Function: print_or_save_text
 * Description: Print or Save Text Options
 * Parameters: N/A
 * Pre-Conditions: N/A
 * Post-Conditions: Text Option for User Read
 * ****************************************************************************/
void print_or_save_text()
{
    // Text for option prompts
    cout << "Save to Text File or Printed to Console?" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Save to text file" << "\t" << "[1]" << endl;
    cout << "Print to the console" << "\t" << "[2]" << endl;
    cout << "----------------------------------------" << endl;
}
/******************************************************************************
 * Function: search_number
 * Description: Make dex number file
 * Parameters: N/A
 * Pre-Conditions: N/A
 * Post-Conditions: Dex Data will be saved to file
 * ****************************************************************************/
void make_dex_file(Pokedex &smoke, int dex_number)
{
    // Determine what to do with dex data while making a file
    ofstream fout;
    string Dex;
    int location = 0;
    if(exsist_check_new(fout, Dex) == 1)
    fout.open(Dex.c_str());
    else
    fout.open(Dex.c_str(), ios::app);
    location = find_dex_location(smoke, dex_number);
    print_dex_file(smoke, location, fout);
    fout.close();   
}
/******************************************************************************
 * Function: find_dex_location
 * Description: Find dex relative to file
 * Parameters: Pokedex &smoke, int dex_number
 * Pre-Conditions: Pokedex address must exsist, int must exsist
 * Post-Conditions: Location of Dex in file will be determiend
 * ****************************************************************************/
int find_dex_location(Pokedex &smoke, int dex_number)
{
    // Determine what index the dex number is in
    for(int i = 0 ; i < smoke.num_pokemon; i++)
    {
        if(smoke.dex[i].dex_num == dex_number)
        return i;  
    }
}
/******************************************************************************
 * Function: print_dex_file
 * Description: Print information to file
 * Parameters: Pokedex &smoke, int location, ofstream fout
 * Pre-Conditions: Pokedex address must exsist, int must exsist, ofstream must exsist
 * Post-Conditions: Stuff will be printed to dex file
 * ****************************************************************************/
void print_dex_file(Pokedex &smoke, int location, ofstream &fout)
{  
    // Print dex file information
    fout << smoke.dex[location].dex_num << " ";
    fout << smoke.dex[location].name << " ";
    fout << smoke.dex[location].type << " ";
    fout << smoke.dex[location].num_moves << endl;
    for(int i = 0; i < smoke.dex[location].num_moves; i++)
    fout << smoke.dex[location].moves[i] << " ";
}
/******************************************************************************
 * Function: exsist_check_new
 * Description: checks to see if file exsits
 * Parameters: ifstream &fin
 * Pre-Conditions: ifstream must be open previously
 * Post-Conditions: Program will append or make file based on status
 * ****************************************************************************/
int exsist_check_new(ofstream &fout, string &dex)
{
    cout << "Enter the name of the desired file, including .txt" << endl;
    cin >> dex;
    fout.open(dex.c_str(), ios::app);
    // Check if file exsists, if not return 1
    if(!fout.is_open())
    {
        fout.close();
        return 1;
    }
    else
    {
        fout.close();
        return 0;
    }
}
/******************************************************************************
 * Function: exsist_check
 * Description: checks to see if file exsits
 * Parameters: ifstream &fin
 * Pre-Conditions: ifstream must be open previously
 * Post-Conditions: Program will or will not run depending on file status
 * ****************************************************************************/
int exsist_check(ifstream &fin, string &dex_name)
{
    cout << "Hello, enter the name of your Pokedex, including .txt" << endl;
    cin >> dex_name;
    fin.open(dex_name.c_str());
    // Check if file exsists, if not return 1
    if(!fin.is_open())
    {
        cout << "Error openeing file..." << endl;
        return 1;
    }
    else
    return 0;
}
/******************************************************************************
 * Function: get_num
 * Description: Get number of Pokemon
 * Parameters: ifstream &fin
 * Pre-Conditions: ifstream must be open previously
 * Post-Conditions: Number of pokemon will be known
 * ****************************************************************************/
int get_num(ifstream &fin)
{
    // Get number from file
    int num = 0;
    fin >> num;
    return num;
}
/******************************************************************************
 * Function: create_pokemons
 * Description: Dynamically allocated an array of Pokemon(requested size)
 * Parameters: int
 * Pre-Conditions: ifstream must be open previously
 * Post-Conditions: Dyanmic array of Pokemon of a specfic size will be made
 * ****************************************************************************/
Pokemon* create_pokemons(int num)
{
    // Pass a Pokemon dynamic array of the specified size
    Pokemon* mon;
    mon = new Pokemon[num];
    return mon;
}
/******************************************************************************
 * Function: populate_pokedex_data
 * Description: Fill Pokedex object with information this is read in from dex.txt
 * Parameters: Pokedex &poke, ifstream &fin
 * Pre-Conditions: ifstream must be open previously as well as a struct with type Pokedex
 * Post-Conditions: Trainer name, number of pokemon, and size of pokemon array will be known
 * ****************************************************************************/
void populate_pokedex_data(Pokedex &poke, ifstream &fin)
{
    // Fill data with parameters
    int num = get_num(fin);
    string trainer;
    cout << "Enter the name of the trainer:" << endl;
    cin >> trainer;
    cout << endl;
    poke.trainer = trainer;
    poke.num_pokemon = num;
    poke.dex = create_pokemons(num);
}
/******************************************************************************
 * Function: create_moves
 * Description: Dynamiccal Allocates an Array of Moves of a Pokemon(of requested size)
 * Parameters: int
 * Pre-Conditions: int must exsist
 * Post-Conditions: 
 * ****************************************************************************/
string* create_moves(int num)
{
    // Make dynamic array based on num
    string * move_num;
    move_num = new string[num];
    return move_num;

}
/******************************************************************************
 * Function: populate_pokemon
 * Description: Fill single Pokemon object with information this is read from dex.txt
 * Parameters: Pokemon &mon, ifstream &fin
 * Pre-Conditions: ifstream must be open previously as well as a struct with type Pokemon
 * Post-Conditions: Pokemon number, name, type, number of moves, and move names will be known
 * ****************************************************************************/
void populate_pokemon(Pokemon &mon, ifstream &fin)
{
    // Get all of the Pokemon data
    int dex_num, num_move;
    string p_mon, p_mon_type;
    fin >> dex_num >> p_mon >> p_mon_type >> num_move;

    mon.dex_num = dex_num;
    mon.name = p_mon;
    mon.type = p_mon_type;
    mon.num_moves = num_move;
    mon.moves = create_moves(num_move);
    for(int i = 0; i < num_move; i++)
    fin >> mon.moves[i];
}
/******************************************************************************
 * Function: print_dex
 * Description: Prints Dex Data
 * Parameters: Pokedex &poke
 * Pre-Conditions: a struct with type Pokedex must be open
 * Post-Conditions: Pokemon number, name, type, number of moves, and move names will be printed
 * ****************************************************************************/
void print_dex(Pokedex &poke)
{
    // Print Dex Based on Dex location
    for(int i = -1; i < poke.num_pokemon; i++)
    {
        if(i == -1)
        {
            cout << poke.num_pokemon << endl;
            continue;
        }
        else
        {
            cout << poke.dex[i].dex_num << " " << poke.dex[i].name << " " << poke.dex[i].type << " " << poke.dex[i].num_moves << endl;
            for(int j = 0; j < poke.dex[i].num_moves; j++)
            cout << poke.dex[i].moves[j] << " ";
            cout << endl;
        }
    }
    cout << endl;

}
/******************************************************************************
 * Function: print_dex
 * Description: eletes memory that is dynamically allocated
 * Parameters: Pokedex &smoke
 * Pre-Conditions: a struct with type Pokemon must be open
 * Post-Conditions: All dynamic memory will be deleted and pointers set to NULL
 * ****************************************************************************/
void delete_info(Pokedex &smoke)
{
    // Delete Dynamic Array Info
    for(int i = 0; i < smoke.num_pokemon; i++)
    {
        delete [] smoke.dex[i].moves;
        smoke.dex[i].moves = NULL;
    }

    delete [] smoke.dex;
    smoke.dex = NULL;
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
		return false;
        // Makes it return to main
        if (num[i] <  '0' || num[i] > '9')
        return false;
    }
    // if it doens't stop the string will clear 
    return true;
}