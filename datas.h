#ifndef _DATAS_H
#define _DATAS_H

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

//int S = 5;

struct position
{
    int x,y;
};
struct status
{
    position pos;
    int h, d, v;

};
struct doors
{
    int f, b, l, r;
};

struct rooms
{
    doors door;
    string type = "N" ;
    string item_name ="NULL";
    int   pass = 0;
};

void add_door(rooms&,int);
string random_item(int);
void move(status& , status&);
void define_items();
void define_player_monster(int);
status MakeStatus(int, int, int,int,int);
void Print_info(vector<vector<rooms>>,int, status&);
void setup_doors_items(vector<vector<rooms>>& ,int);
void move_and_loseHP(status& ,status ,int, int, int);
bool check(status,string,int);
void use_item(status&,int);
void pick_item(vector<vector<rooms>>&,status&);
void display(vector<vector<rooms>>,int, int,int);
void fight_with_monster(vector<vector<rooms>>,status&,status&,int);
int distance(status,status);
void Visibility(status,status);




#endif
