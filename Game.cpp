// Game Class File
#include <iostream>
#include "Game.h"
using namespace std;

Game::Game(){
}

Game::~Game(){
}

location* Game::buildGame(){
	
	location* spot1 = new location;
	spot1->position=1;
	spot1->name="Boulder, CO";
	spot1->prev=NULL;
	string message = "This is your starting location.";
	spot1->getMoney=false;
	spot1->loseMoney=false;
	spot1->playerDeath=false;
	spot1->playerLost=false;
	spot1->changeInMoney = 0;
	
	location* spot2 = new location;
	spot2->position=2;
	spot2->name="en route";
	spot2->prev=spot1;
	spot1->next=spot2;
	spot2->message = "You gained $100.";
	spot2->getMoney=true;
	spot2->loseMoney=false;
	spot2->playerDeath=false;
	spot2->playerLost=false;
	spot2->changeInMoney = 100;
	
	startingLocation = spot1;
	
	location* spot3 = new location;
	spot3->position=3;
	spot3->name="Rock Springs, WY";
	spot3->prev=spot2;
	spot2->next=spot3;
	spot3->message= "You are lost! Go back to the beginning.";
	spot3->getMoney=false;
	spot3->loseMoney=false;
	spot3->playerDeath=true;
	spot3->playerLost=true;
	spot3->changeInMoney = 0;
	
	location* spot4 = new location;
	spot4->position=4;
	spot4->name="en route";
	spot4->prev=spot3;
	spot3->next=spot4;
	spot4->message="You gained $100.";
	spot4->getMoney=true;
	spot4->loseMoney=false;
	spot4->playerDeath=false;
	spot4->playerLost=false;
	spot4->changeInMoney = 100;
	
	location* spot5 = new location;
	spot5->position=5;
	spot5->name="en route";
	spot5->prev=spot4;
	spot4->next=spot5;
	spot5->message="You gained $100.";
	spot5->getMoney=true;
	spot5->loseMoney=false;
	spot5->playerDeath=false;
	spot5->playerLost=false;
	spot5->changeInMoney = 100;
	
	location* spot6 = new location;
	spot6->position=6;
	spot6->name="Moab, UT";
	spot6->prev=spot5;
	spot5->next=spot6;
	spot6->message="You bought hiking gear.";
	spot6->getMoney=false;
	spot6->loseMoney=true;
	spot6->playerDeath=false;
	spot6->playerLost=false;
	spot6->changeInMoney = 400;
	
	location* spot7 = new location;
	spot7->position=7;
	spot7->name="en route";
	spot7->prev=spot6;
	spot6->next=spot7;
	spot7->message="You gained $100.";
	spot7->getMoney=true;
	spot7->loseMoney=false;
	spot7->playerDeath=false;
	spot7->playerLost=false;
	spot7->changeInMoney = 100;
	
	location* spot8 = new location;
	spot8->position=8;
	spot8->name="Lake Powell, UT";
	spot8->prev=spot7;
	spot7->next=spot8;
	spot8->message="You rented a house boat.";
	spot8->getMoney=false;
	spot8->loseMoney=true;
	spot8->playerDeath=false;
	spot8->playerLost=false;
	spot8->changeInMoney = 500;
	
	location* spot9 = new location;
	spot9->position=9;
	spot9->name="en route";
	spot9->prev=spot8;
	spot8->next=spot9;
	spot9->message="You gained $100.";
	spot9->getMoney=true;
	spot9->loseMoney=false;
	spot9->playerDeath=false;
	spot9->playerLost=false;
	spot9->changeInMoney = 100;
	
	location* spot10 = new location;
	spot10->position=10;
	spot10->name="en route";
	spot10->prev=spot9;
	spot9->next=spot10;
	spot10->message="You gained $100.";
	spot10->getMoney=true;
	spot10->loseMoney=false;
	spot10->playerDeath=false;
	spot10->playerLost=false;
	spot10->changeInMoney = 100;
	
	location* spot11 = new location;
	spot11->position=11;
	spot11->name="Grand Canyon, AZ";
	spot11->prev=spot10;
	spot10->next=spot11;
	spot11->message="You fell and died. :(";
	spot11->getMoney=false;
	spot11->loseMoney=false;
	spot11->playerDeath=true;
	spot11->playerLost=false;
	spot11->changeInMoney = 0;
	
	location* spot12 = new location;
	spot12->position = 12;
	spot12->name = "en route";
	spot12->prev = spot11;
	spot11->next = spot12;
	spot12->message="You gained $100.";
	spot12->getMoney=true;
	spot12->loseMoney=false;
	spot12->playerDeath=false;
	spot12->playerLost=false;
	spot12->changeInMoney = 100;

	location* spot13 = new location;
	spot13->position = 13;
	spot13->name = "en route";
	spot13->prev = spot12;
	spot12->next = spot13;
	spot13->message="You gained $100.";
	spot13->getMoney=true;
	spot13->loseMoney=false;
	spot13->playerDeath=false;
	spot13->playerLost=false;
	spot13->changeInMoney = 100;

	location* spot14 = new location;
	spot14->position = 14;
	spot14->name = "Las Vegas, NV";
	spot14->prev = spot13;
	spot13->next = spot14;
	spot14->message="You went gambling and lost ALL your money.";
	spot14->getMoney=false;
	spot14->loseMoney=true;
	spot14->playerDeath=false;
	spot14->playerLost=false;
	spot14->changeInMoney = 0; // figure out later. separate function?

	location* spot15 = new location;
	spot15->position = 15;
	spot15->name = "en route";
	spot15->prev = spot14;
	spot14->next = spot15;
	spot15->message="You gained $100.";
	spot15->getMoney=true;
	spot15->loseMoney=false;
	spot15->playerDeath=false;
	spot15->playerLost=false;
	spot15->changeInMoney = 100;

	location* spot16 = new location;
	spot16->position = 16;
	spot16->name = "en route";
	spot16->prev = spot15;
	spot15->next = spot16;
	spot16->message="You gained $100.";
	spot16->getMoney=true;
	spot16->loseMoney=false;
	spot16->playerDeath=false;
	spot16->playerLost=false;
	spot16->changeInMoney = 100;

	location* spot17 = new location;
	spot17->position = 17;
	spot17->name = "Mojave Desert, CA";
	spot17->prev = spot16;
	spot16->next = spot17;
	spot17->message="You are lost. Go back to the beginning.";
	spot17->getMoney=false;
	spot17->loseMoney=false;
	spot17->playerDeath=false;
	spot17->playerLost=true;
	spot17->changeInMoney = 0;

	location* spot18 = new location;
	spot18->position = 18;
	spot18->name = "en route";
	spot18->prev = spot17;
	spot17->next = spot18;
	spot18->message="You gained $100.";
	spot18->getMoney=true;
	spot18->loseMoney=false;
	spot18->playerDeath=false;
	spot18->playerLost=false;
	spot18->changeInMoney = 100;

	location* spot19 = new location;
	spot19->position = 19;
	spot19->name = "Death Valley, CA";
	spot19->prev = spot18;
	spot18->next = spot19;
	spot19->message="You forgot water and died. :(";
	spot19->getMoney=false;
	spot19->loseMoney=false;
	spot19->playerDeath=false;
	spot19->playerLost=true;
	spot19->changeInMoney = 0;

	location* spot20 = new location;
	spot20->position = 20;
	spot20->name = "en route";
	spot20->prev = spot19;
	spot19->next = spot20;
	spot20->message="You gained $100.";
	spot20->getMoney=true;
	spot20->loseMoney=false;
	spot20->playerDeath=false;
	spot20->playerLost=false;
	spot20->changeInMoney = 100;

	location* spot21 = new location;
	spot21->position = 21;
	spot21->name = "en route";
	spot21->prev = spot20;
	spot20->next = spot21;
	spot21->message="You gained $100.";
	spot21->getMoney=true;
	spot21->loseMoney=false;
	spot21->playerDeath=false;
	spot21->playerLost=false;
	spot21->changeInMoney = 100;

	location* spot22 = new location;
	spot22->position = 22;
	spot22->name = "Santa Monica, CA";
	spot22->prev = spot21;
	spot21->next = spot22;
	spot22->message="You spent a night on the beach.";
	spot22->getMoney=false;
	spot22->loseMoney=true;
	spot22->playerDeath=false;
	spot22->playerLost=false;
	spot22->changeInMoney = 100;

	location* spot23 = new location;
	spot23->position = 23;
	spot23->name = "en route";
	spot23->prev = spot22;
	spot22->next = spot23;
	spot23->message="You gained $100.";
	spot23->getMoney=true;
	spot23->loseMoney=false;
	spot23->playerDeath=false;
	spot23->playerLost=false;
	spot23->changeInMoney = 100;

	location* spot24 = new location;
	spot24->position = 24;
	spot24->name = "DisneyLand";
	spot24->prev = spot23;
	spot23->next = spot24;
	spot24->message="You made it to Disneyland! Congratulations!";
	spot24->getMoney=false;
	spot24->loseMoney=false;
	spot24->playerDeath=false;
	spot24->playerLost=false;
	spot24->changeInMoney = 0;
	return startingLocation;
}


int Game::rollDie()
{
	int roll = 0;
	roll = (rand()%6 )+1;
	increaseMoves();
	return roll;
}

void Game::movePlayer(player* thePlayer)
{
	int roll = 0;
	roll = rollDie();
	thePlayer->rollSum = (playerLocation->position) + roll;
	while((playerLocation->position) != (thePlayer->rollSum) && playerLocation->position<24)
	{
		playerLocation = playerLocation->next;
	}	
}

void Game::printLocationInfo(location* playerLocation, player* thePlayer){
	
	
	
	getLocationInfo(playerLocation, thePlayer);
	
	cout<<"Player Location: "<<playerLocation->name<<endl;
	cout<<playerLocation->message<<endl;
	cout<<"You are on spot "<<playerLocation->position<<" out of 24."<<endl;
	
	
}

void Game::getLocationInfo(location* playerLocation, player* thePlayer){
	if(playerLocation->getMoney==true){
		addPlayerMoney(thePlayer, playerLocation->changeInMoney);
	}
	if(playerLocation->loseMoney==true){
		subtractPlayerMoney(thePlayer, playerLocation->changeInMoney);
	}
	if(playerLocation->playerDeath==true){
		restartPlayer(thePlayer);
	}
	if(playerLocation->playerLost==true){
		restartPlayer(thePlayer);//, playerLocation);
	}
	
}

void Game::addPlayerMoney(player* thePlayer, int amount){
	thePlayer->money+=amount;
	cout<<"You gained $"<<amount<<" :)"<<endl;
}

void Game::subtractPlayerMoney(player* thePlayer, int amount){
	thePlayer->money-=amount;
	cout<<"You lost $"<<amount<<" :("<<endl;
}

void Game::restartPlayer(player* thePlayer){//, location* playerLocation){
	
	playerLocation = startingLocation;
	thePlayer->lives -= 1;
	thePlayer->rollSum = 0;

}

void Game::getPlayerInfo(player* thePlayer){
	
	if(thePlayer->lives != 0)
	{
		cout<<"It took you "<< numberMoves/2<< " moves to get to Disneyland"<<endl;
		//not sure where we are doubling the number of moves...im to tired to find where that happens so I just divided it by two.
		
		cout<<"You finished the trip with "<<thePlayer->money<<" dollars in your wallet, and "<<thePlayer->lives<<" lives left."<<endl;
		
		
	}
	else
	{
		cout<<"It took you "<< numberMoves/2<< " moves before you ran out of lives."<<endl;		
	}
}

void Game::increaseMoves(){
	numberMoves++;
}
