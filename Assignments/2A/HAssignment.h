#ifndef HASSIGNMENT_H
#define HASSIGNMENT_H
#include <iostream>
#include <fstream>

using namespace std;

struct Pokemon {
int dex_num;
string name;
string type;
int num_moves;
string* moves;
};

struct Pokedex {
string trainer;
int num_pokemon;
Pokemon* dex;
};

// Runs intro part of my program
Pokedex main_1();
// Prints opitons for player choices and takes input for player
int print_options(Pokedex &smoke, Pokemon &mon, string dex_name);
// Text for options
void options_text(Pokedex &smoke);
// Perform Option Based on User Input
int option_time(int number, Pokemon &mon, Pokedex &smoke, string dex_name);
// Option 3 of Options
void option3(Pokedex &smoke, Pokemon &mon, int option, string type, string dex_name);
// Option 2 of Options
void option2(Pokedex &smoke, int option, Pokemon &mon, string name, string dex_name);
// Option 1 of Options
void option1(Pokedex &smoke, int dex_number, int option, Pokemon &mon, string dex_name);
// make new pokemon
void make_pokemon(string dex_name, Pokedex &smoke, Pokemon &mon, int option);
// Print Pokemon to Console
void print_new_console(Pokedex &smoke, string dex_name);
// Edit File Data if Printing to Console
void edit_file_console(Pokedex &smoke, string dex_name);
// Makes Pokemon Data
Pokemon get_new_p(Pokedex &smoke);
// Print new Pokemon Data to file
void print_new_poke(Pokedex &smoke, string dex_name);
// Do all the retreiving for the new Pokemon
void do_get(Pokedex &smoke, string &new_name, string &new_type, int &dex_num, int &move_num);
// Get Moves for Pokemon
void get_moves(string moves[], int num_moves);
// Get number of moves of Pokemon
void get_move_num(int &moves);
// Get new name of Pokemon
void get_name(string &new_name, Pokedex &smoke);
// Get new type of Pokemon
void get_type(string &new_type, Pokedex &smoke);
// Get new dex of Pokemon
void get_dex_number(int &new_dex, Pokedex &smoke);
// searches for pokemon via type
string search_type(Pokedex &smoke);
// Make file based on Pokemon type
void make_type_file(Pokedex &smoke, string type);
// Deternmine where in the file the type of Pokemon are
void find_type_location(Pokedex &smoke, string type, int location[]);
// Prints data to file based on Pokemon type
void print_type_file(Pokedex &smoke, int location[], ofstream &fout);
// Prints data to console based on Pokemon type
void print_type_console(Pokedex &smoke, string type);
// Prints data based on Pokemon name to console
void print_name_console(Pokedex &smoke, string name);
// makes file based on Pokemon name
void make_name_file(Pokedex &smoke, string name);
// determines where name is on the document
int find_name_location(Pokedex &smoke, string name);
// prints data based on name
void print_name_file(Pokedex &smoke, int location, ofstream &fout);
// Searches for pokemon via dex number
int search_number(Pokedex &smoke);
// Searches for pokemon via name
string search_name(Pokedex &smoke);
// Print dex data to console
void print_dex_console(Pokedex &smoke, int dex_number);
// Determine print or save option to file
void print_or_save(int &option);
// Text for the print or save option
void print_or_save_text();
// make dex number file
void make_dex_file(Pokedex &smoke, int dex_number);
// Determine where dex is in the Pokedex
int find_dex_location(Pokedex &smoke, int dex_number);
// prints data to file
void print_dex_file(Pokedex &smoke, int location, ofstream &fout);
// checks if file exsists(append if so)
int exsist_check_new(ofstream &fout, string &dex);
// checks to see if file exsits
int exsist_check(ifstream &fin, string &dex_name);
// get number of pokemon
int get_num(ifstream &fin);
// Dynamically allocated an array of Pokemon(requested size)
Pokemon* create_pokemons(int);
// Fill Pokedex object with information this is read in from dex.txt
void populate_pokedex_data(Pokedex &dex, ifstream &fin);
// Dynamiccal Allocates an Array of Moves of a Pokemon(of requested size)
string* create_moves(int);
// Fill single Pokeon object with information this is read from dex.txt
void populate_pokemon(Pokemon &, ifstream &);
// Prints Dex Data
void print_dex(Pokedex &poke);
// Deletes memory that is dynamically allocated
void delete_info(Pokedex &smoke);
// Indicates if the string num is an integer
bool is_int(string num);


#endif