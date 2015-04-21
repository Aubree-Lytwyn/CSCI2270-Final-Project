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
	spot12->position = 12;
	spot12->name = "en route";
	spot12->prev = spot11;
	spot11->next = spot12;

	location* spot13 = new location;
	spot13->position = 13;
	spot13->name = "en route";
	spot13->prev = spot12;
	spot12->next = spot13;

	location* spot14 = new location;
	spot14->position = 14;
	spot14->name = "Las Vegas, NV";
	spot14->prev = spot13;
	spot13->next = spot14;

	location* spot15 = new location;
	spot15->position = 15;
	spot15->name = "en route";
	spot15->prev = spot14;
	spot14->next = spot15;

	location* spot16 = new location;
	spot16->position = 16;
	spot16->name = "en route";
	spot16->prev = spot15;
	spot15->next = spot16;

	location* spot17 = new location;
	spot17->position = 17;
	spot17->name = "Mojave Desert, CA";
	spot17->prev = spot16;
	spot16->next = spot17;

	location* spot18 = new location;
	spot18->position = 18;
	spot18->name = "en route";
	spot18->prev = spot17;
	spot17->next = spot18;

	location* spot19 = new location;
	spot19->position = 19;
	spot19->name = "Death Valley, CA";
	spot19->prev = spot18;
	spot18->next = spot19;

	location* spot20 = new location;
	spot20->position = 20;
	spot20->name = "en route";
	spot20->prev = spot19;
	spot19->next = spot20;

	location* spot21 = new location;
	spot21->position = 21;
	spot21->name = "en route";
	spot21->prev = spot20;
	spot20->next = spot21;

	location* spot22 = new location;
	spot22->position = 22;
	spot22->name = "Santa Monica, CA";
	spot22->prev = spot21;
	spot21->next = spot22;

	location* spot23 = new location;
	spot23->position = 23;
	spot23->name = "en route";
	spot23->prev = spot22;
	spot22->next = spot23;

	location* spot24 = new location;
	spot24->position = 24;
	spot24->name = "en route";
	spot24->prev = spot23;
	spot23->next = spot24;

}
