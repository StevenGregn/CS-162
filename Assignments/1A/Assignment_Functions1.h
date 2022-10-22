#ifndef HELPER_FUNCTIONS_H
#define HELPER_FUNCTIONS_H
#include <iostream>
#include <string>
using namespace std;

int rand_41(int score);
string play_again();
void erase_mem(int **&w, int **&x, string *&y, int b, int **&g);
int intro_phase();
void intro_phase2(string &name);
void intro_phase3(int &x, string name);
void p_turn_i(int x[], int y);
void s_a(string x[], int y);
void p_score_i(int x[], int y);
string roll();
string roll2(int x);
void p_e();
bool is_int(string num);
bool is_name(string name);
void spaces(int);
void make_d_array(int **&x, int **&y, string *&z, int c, int **&g);
void make_d_array_2(int **&x, int **&y, int **&g, int c);
void top_part(string *&x);
void top_part2(int s_count, int r_count[], int num);
void total_bottom_print(string *&x, int y, int **&z, int **&w, int **&s_s_o, int round_10[]);
void round1_9(string *&x, int y, int **&z, int **&w, int **&s_s_o, int round_10[], int p_counter);
void gutter_ball(int **&z, int **&w, int p_counter, int v);
int spare(int **&z, int **&w, int p_counter, int v, int round_10[], int **&s_s_o);
int strike(int **&z, int **&w, int p_counter, int v, int round_10[], int **&s_s_o);
void round_ten(string *&x, int y, int **&z, int **&w, int **&s_s_o, int round_10[], int p_counter);
int ten_gutterball(int **&z, int **&w, int **&s_s_o, int round_10[], int p_counter);
int ten_spare(int **&z, int **&w, int **&s_s_o, int round_10[], int p_counter, int v);
int ten_strike(int **&z, int **&w, int **&s_s_o, int round_10[], int p_counter, int v);
void score_print(string *&x, int y, int **&z, int **&w, int **&s_s_o, int round_10[], int p_counter, int count);
int score_print1(int &count);
void score_print2(int &count, int h);
void score_print3(int &count, int h);
void score_print4(int &count, int h);
int score_print5(int &count, int h, int **&z, int p_counter);
int score_print5_2(int &count, int **&z, int p_counter);
void the_final_dance(string *&x, int y, int **&z, int **&w,int **&g, int round_10[]);
void score_time(int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[]);
void score_time2(int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int i);
void score_time3(int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int i, int j);
void score_time3_1(int **&p_score, int player_roll_frame, int j, int k);
int score_time3_2(int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int k);
int score_time3_3(int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int k);
int score_time3_4(int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int k, int j, int i);
int score_time3_5(int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int k, int j, int i);
void score_time4(int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int i, int j);
void score_time4_1(int **&p_score, int player_roll_frame, int j, int k);
int score_time4_2(int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int i, int j);
int score_time4_3(int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int **&s_s_o, int round_10[], int player_roll_frame, int i, int j);
void score_time4_4(int **&s_s_o, int k, int j, int i);
void score_time4_5(int **&p_score, int player_roll_frame, int **&s_s_o, int k, int j, int i);
void frame_ten_scoring(int **&p_score, int **&p_total_score, string *&p_amount, int p_count, int player_roll_frame);
void total_scores(string *&x, int y, int **&z, int **&w, int p_counter, int **&s_s_o);
void total_scores2(int **&w, int v, int p_counter);

#endif