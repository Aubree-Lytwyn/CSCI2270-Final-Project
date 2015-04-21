// Game Class File
#include <iostream>
#include "Game.h"
using namespace std;

Game::Game(){
}

Game::~Game(){
}

void Game::buildGame(){
	location* spot1 = new location;
	spot1->position=1;
	spot1->name="Boulder, CO";
	spot1->prev=NULL;
	
	location* spot2 = new location;
	spot2->position=2;
	spot2->name="en route";
	spot2->prev=spot1;
	spot1->next=spot2;
	
	location* spot3 = new location;
	spot3->position=3;
	spot3->name="Rock Springs, WY";
	spot3->prev=spot2;
	spot2->next=spot3;
	
	location* spot4 = new location;
	spot4->position=4;
	spot4->name="en route";
	spot4->prev=spot3;
	spot3->next=spot4;
	
	location* spot5 = new location;
	spot5->position=5;
	spot5->name="en route";
	spot5->prev=spot4;
	spot4->next=spot5;
	
	location* spot6 = new location;
	spot6->position=6;
	spot6->name="Moab, UT";
	spot6->prev=spot5;
	spot5->next=spot6;
	
	location* spot7 = new location;
	spot7->position=7;
	spot7->name="en route";
	spot7->prev=spot6;
	spot6->next=spot7;
	
	location* spot8 = new location;
	spot8->position=8;
	spot8->name="Lake Powell, UT";
	spot8->prev=spot7;
	spot7->next=spot8;
	
	location* spot9 = new location;
	spot9->position=9;
	spot9->name="en route";
	spot9->prev=spot8;
	spot8->next=spot9;
	
	location* spot10 = new location;
	spot10->position=10;
	spot10->name="en route";
	spot10->prev=spot9;
	spot9->next=spot10;
	
	location* spot11 = new location;
	spot11->position=11;
	spot11->name="Grand Canyon, AZ";
	spot11->prev=spot10;
	spot10->next=spot11;
	
	location* spot12 = new location;
	spot12->position=12;
	spot->name="en route";
	spot9->prev=spot8;
	spot8->next=spot9;
}
