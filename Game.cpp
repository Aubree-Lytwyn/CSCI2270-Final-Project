// Game Class File
// Authors: Michelle Ferrall and Aubree Lytwyn
#include <iostream>
#include "Game.h"
using namespace std;

// constructor
Game::Game(){
}

// destructor
Game::~Game(){	
}

/* location* buildGame();
 * This function builds the double-linked list. It returns the initial player location.
 * playerLocation = buildGame();
 * pre-conditions: there are no pre-conditions.
 * post-conditions: the double-linked list that mimics a board game is created. */
location* Game::buildGame(){
	
	location* spot1 = new location;
	spot1->position=1;
	spot1->name="Boulder, CO";
	spot1->prev=NULL;
	spot1->message = "This is your starting location.";
	spot1->getMoney=false;
	spot1->loseMoney=false;
	spot1->playerDeath=false;
	spot1->playerLost=false;
	spot1->changeInMoney = 0;
	spot1->moveBack= false;
	
	location* spot2 = new location;
	spot2->position=2;
	spot2->name="en route";
	spot2->prev=spot1;
	spot1->next=spot2;
	spot2->message = "You earned some money!";
	spot2->getMoney=true;
	spot2->loseMoney=false;
	spot2->playerDeath=false;
	spot2->playerLost=false;
	spot2->changeInMoney = 100;
	spot1->moveBack=false;
	
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
	spot3->moveBack=false;
	
	location* spot4 = new location;
	spot4->position=4;
	spot4->name="en route";
	spot4->prev=spot3;
	spot3->next=spot4;
	spot4->message="You earned some money!";
	spot4->getMoney=true;
	spot4->loseMoney=false;
	spot4->playerDeath=false;
	spot4->playerLost=false;
	spot4->changeInMoney = 100;
	spot4->moveBack=false;
	
	location* spot5 = new location;
	spot5->position=5;
	spot5->name="en route";
	spot5->prev=spot4;
	spot4->next=spot5;
	spot5->message="You forgot your driver's license.";
	spot5->getMoney=false;
	spot5->loseMoney=false;
	spot5->playerDeath=false;
	spot5->playerLost=false;
	spot5->changeInMoney = 0;
	spot5->moveBack=true;
	
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
	spot6->moveBack=false;
	
	location* spot7 = new location;
	spot7->position=7;
	spot7->name="en route";
	spot7->prev=spot6;
	spot6->next=spot7;
	spot7->message="You earned some money!";
	spot7->getMoney=true;
	spot7->loseMoney=false;
	spot7->playerDeath=false;
	spot7->playerLost=false;
	spot7->changeInMoney = 100;
	spot7->moveBack=false;
	
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
	spot8->moveBack=false;
	
	location* spot9 = new location;
	spot9->position=9;
	spot9->name="en route";
	spot9->prev=spot8;
	spot8->next=spot9;
	spot9->message="You got a flat tire.";
	spot9->getMoney=false;
	spot9->loseMoney=false;
	spot9->playerDeath=false;
	spot9->playerLost=false;
	spot9->changeInMoney = 0;
	spot9->moveBack=true;
	
	location* spot10 = new location;
	spot10->position=10;
	spot10->name="en route";
	spot10->prev=spot9;
	spot9->next=spot10;
	spot10->message="You earned some money!";
	spot10->getMoney=true;
	spot10->loseMoney=false;
	spot10->playerDeath=false;
	spot10->playerLost=false;
	spot10->changeInMoney = 100;
	spot10->moveBack=false;
	
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
	spot11->moveBack=false;
	
	location* spot12 = new location;
	spot12->position = 12;
	spot12->name = "en route";
	spot12->prev = spot11;
	spot11->next = spot12;
	spot12->message="You earned some money.";
	spot12->getMoney=true;
	spot12->loseMoney=false;
	spot12->playerDeath=false;
	spot12->playerLost=false;
	spot12->changeInMoney = 100;
	spot12->moveBack=false;

	location* spot13 = new location;
	spot13->position = 13;
	spot13->name = "en route";
	spot13->prev = spot12;
	spot12->next = spot13;
	spot13->message="You got pulled over. :(";
	spot13->getMoney=false;
	spot13->loseMoney=false;
	spot13->playerDeath=false;
	spot13->playerLost=false;
	spot13->changeInMoney = 0;
	spot13->moveBack=true;

	location* spot14 = new location;
	spot14->position = 14;
	spot14->name = "Las Vegas, NV";
	spot14->prev = spot13;
	spot13->next = spot14;
	spot14->message="Let's check out the casinos...";
	spot14->getMoney=false;
	spot14->loseMoney=true;
	spot14->playerDeath=false;
	spot14->playerLost=false;
	spot14->changeInMoney = 0; 
	spot14->moveBack=false;

	location* spot15 = new location;
	spot15->position = 15;
	spot15->name = "en route";
	spot15->prev = spot14;
	spot14->next = spot15;
	spot15->message="You earned some money!";
	spot15->getMoney=true;
	spot15->loseMoney=false;
	spot15->playerDeath=false;
	spot15->playerLost=false;
	spot15->changeInMoney = 100;
	spot15->moveBack=false;

	location* spot16 = new location;
	spot16->position = 16;
	spot16->name = "en route";
	spot16->prev = spot15;
	spot15->next = spot16;
	spot16->message="You forgot your friend at the last location.";
	spot16->getMoney=false;
	spot16->loseMoney=false;
	spot16->playerDeath=false;
	spot16->playerLost=false;
	spot16->changeInMoney = 0;
	spot16->moveBack=true;

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
	spot17->moveBack=false;

	location* spot18 = new location;
	spot18->position = 18;
	spot18->name = "en route";
	spot18->prev = spot17;
	spot17->next = spot18;
	spot18->message="You earned some money!";
	spot18->getMoney=true;
	spot18->loseMoney=false;
	spot18->playerDeath=false;
	spot18->playerLost=false;
	spot18->changeInMoney = 100;
	spot18->moveBack=false;

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
	spot20->message="You earned some money!";
	spot20->getMoney=true;
	spot20->loseMoney=false;
	spot20->playerDeath=false;
	spot20->playerLost=false;
	spot20->changeInMoney = 100;
	spot20->moveBack=false;

	location* spot21 = new location;
	spot21->position = 21;
	spot21->name = "en route";
	spot21->prev = spot20;
	spot20->next = spot21;
	spot21->message="You ran out of gas.";
	spot21->getMoney=false;
	spot21->loseMoney=false;
	spot21->playerDeath=false;
	spot21->playerLost=false;
	spot21->changeInMoney = 0;
	spot21->moveBack=true;

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
	spot22->moveBack=false;

	location* spot23 = new location;
	spot23->position = 23;
	spot23->name = "en route";
	spot23->prev = spot22;
	spot22->next = spot23;
	spot23->message="You earned some money!";
	spot23->getMoney=true;
	spot23->loseMoney=false;
	spot23->playerDeath=false;
	spot23->playerLost=false;
	spot23->changeInMoney = 100;
	spot23->moveBack=false;

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
	spot24->moveBack=false;
	
	return startingLocation;
}

/* int rollDie();
 * This returns a random number between 1 and 6, as if the user rolled a die.
 * ex. call: int roll = rollDie();
 * pre-condition: srand(time(0)) must be used before the function is called.
 * post-condition: a value to move the player is returned. */
int Game::rollDie(){
	int roll = 0;
	roll = (rand()%6 )+1;
	//increaseMoves(); // this is why it was doubling!
	return roll;
}

/* void movePlayer(player* thePlayer);
 * This function calls the rollDie() function to move the player a number of spots forward on the linked list.
 * The next pointers are utilized.
 * ex. call: movePlayer(thePlayer);
 * pre-condition: the linked list must be built. A player object must be created.
 * post-condition: the player is located at a new spot.*/
void Game::movePlayer(player* thePlayer){
	int roll = 0;
	roll = rollDie();
	cout<<"Move forward "<<roll<<" spots."<<endl;
	thePlayer->rollSum = (playerLocation->position) + roll;
	while((playerLocation->position) != (thePlayer->rollSum) && playerLocation->position<24)
	{
		playerLocation = playerLocation->next;
	}	
}

/* void movePlayerBack(player* thePlayer);
 * This function moves the player backward a random number of spots. Prev pointer is utilized.
 * It is only called in the class file.
 * ex. call: movePlayerBack(thePlayer);
 * pre-condition: The linked list must be built and positions must be assigned. A player object must be created.
 * post-condition: The player is located between 1 and 6 spots previous to where they were. */
void Game::movePlayerBack(player* thePlayer){
	int roll = 0;
	roll = rollDie();
	cout<<"Move back "<<roll<<" spots."<<endl;
	cout<<"~~~~~ New Location ~~~~~"<<endl;
	thePlayer->rollSum = (playerLocation->position)-roll;
	while((playerLocation->position) != (thePlayer->rollSum) && playerLocation->prev != NULL){
		playerLocation = playerLocation->prev;
	}
	printLocationInfo(playerLocation, thePlayer);
}

/* void printLocationInfo(location* playerLocation, player* thePlayer);
 * This function prints the information contained in the player's current location (name, position, message).
 * It also calls the getLocationInfo function.
 * ex. call: printLocationInfo(playerLocation, thePlayer);
 * pre-condition: the linked list must be built and the playerLocation must be current. A player object needs to be created.
 * post-condition: the information on the spot and what happens to the player is displayed. */
void Game::printLocationInfo(location* playerLocation, player* thePlayer){
	cout<<"Player Location: "<<playerLocation->name<<endl;
	cout<<"You are on spot "<<playerLocation->position<<" out of 24."<<endl;
	cout<<playerLocation->message<<endl;
	getLocationInfo(playerLocation, thePlayer); 
}

/* void getLocationInfo(location* playerLocation, player* thePlayer);
 * This function is called inside the printLocationInfo function to determine the action that happens on the spot.
 * Other functions are called depending on the information in playerLocation.
 * ex. call: getLocationInfo(playerLocation, thePlayer);
 * pre-condition: printLocationInfo() must be called. All components of the location struct must be assigned (done when the linked-list is built.)
 * post-condition: the proper functions to change information on thePlayer are called and cout statements displayed. */
void Game::getLocationInfo(location* playyerLocation, player* thePlayer){
	if(playerLocation->getMoney==true){
		addPlayerMoney(thePlayer, playerLocation->changeInMoney);
	}
	if(playerLocation->loseMoney==true){
		subtractPlayerMoney(thePlayer, playerLocation->changeInMoney);
	}
	if(playerLocation->playerDeath==true){
		cout<<"Go back to the beginning."<<endl;
		restartPlayer(thePlayer);
	}
	if(playerLocation->playerLost==true){
		cout<<"Go back to the beginning."<<endl;
		restartPlayer(thePlayer);
	}
	if (playerLocation->moveBack==true){
		movePlayerBack(thePlayer);
	}
}

/* void Game::addPlayerMoney(player* thePlayer, int amount);
 * This function is called inside the getLocationInfo fucntion to give the player money.
 * The function adds money to the total amount of money the player already has.
 * ex. call: addPlayerMoney(thePlayer, amount);
 * pre-condition: thePlayer->money must already be created and set.
 * post-condition: The amount of money the player has increases and is printed out.*/
void Game::addPlayerMoney(player* thePlayer, int amount){
	thePlayer->money+=amount;
	cout<<"You gained $"<<amount<<" :)"<<endl;
	cout<<"You have "<<thePlayer->money<<" dollars in your wallet."<<endl;
}

/* void Game::subtractPlayerMoney(player* thePlayer, int amount);
 * This function is called inside the getLocationInfo fucntion to take away the players money.
 * The function subtracts money to the total amount of money the player already has.
 * ex. call: subtractPlayerMoney(thePlayer, amount);
 * pre-condition: thePlayer->money must already be created and set.
 * post-condition: The amount of money the player has increases and is printed out.
 * 				 - If player is in vegas money is set to zero 
 * */
void Game::subtractPlayerMoney(player* thePlayer, int amount){
	if (playerLocation->name=="Las Vegas, NV"){
		if(thePlayer->money > 0){
			thePlayer->money=0; // lose all money in Vegas
			cout<<"You have "<<thePlayer->money<<" dollars in your wallet."<<endl;
		}
		else{
			cout<<"You don't have any money to do anything here. :("<<endl;
		}
	}
	else{
		thePlayer->money-=amount;
		cout<<"You lost $"<<amount<<" :("<<endl;
		cout<<"You have "<<thePlayer->money<<" dollars in your wallet."<<endl;
	}
}

/* void Game::restartPlayer(player* thePlayer);
 * This function is called inside getLocationInfo if playerdeath is true or playerLost is true.
 * The function subtracts one life from original amount and sends them back to Boulder. Then calls printLocationInfo() to show user their new location.
 * ex. call: restartPlayer(thePlayer);
 * pre-condition: thePlayer->lives and thePlayer->rollSum must already be declared. thePlayer->Death or thePlayer->lost must be true.
 * post-condition: The player has lost one life and is sent back to Boulder. */
void Game::restartPlayer(player* thePlayer){
	
		cout<<"~~~~~ New Location ~~~~~"<<endl;
		playerLocation = startingLocation;
		thePlayer->lives -= 1;
		thePlayer->rollSum = 0;
		printLocationInfo(playerLocation, thePlayer); // show that they're at the start
}

/* void Game::getPlayerInfo(player* thePlayer);
 * This function is called inside main() if player reaches Disneyland or the player has zero lives left.
 * The function prints out all of the information if they have made it to Disneyland or died. If player has died asks player if they want to restart the game.
 * ex. call: g.getPlayerInfo(thePlayer);
 * pre-condition: Player must have zero lives left or player must be at disneyLand.
 * post-condition: Prints out players final information and playAgain either stays false or true.*/
void Game::getPlayerInfo(player* thePlayer){
	string userResponse;
	if(thePlayer->lives != 0)
	{
		cout<<"It took you "<< numberMoves<< " moves to get to Disneyland."<<endl; 
		cout<<"You finished the trip with "<<thePlayer->money<<" dollars in your wallet, and "<<thePlayer->lives<<" lives left."<<endl;
	}
	else
	{
		string userResponse;
		cout<<"~~~~~ Out of lives ~~~~~"<<endl;
		cout<<"It took you "<< numberMoves<< " moves before you ran out of lives."<<endl;	
		cout<<"You ended with "<<thePlayer->money<<" dollars in your wallet."<<endl;
		cout<<"Do you want to try again? (yes or no)"<<endl;
		cin>>userResponse;
		if(userResponse == "yes")
		{
			playAgain = true;
		}
	
	}
}

/* void Game::increaseMoves();
 * This function is called inside main() if user wants to continue playing.
 * The function will increase the number of moves by one and print out how many turns they have taken.
 * ex. call: g.increaseMoves();
 * pre-condition: Player must roll the die. Also numberMoves must be declared and previously set. 
 * post-condition: numberMoves is increased by one. */
void Game::increaseMoves(){
	numberMoves++;
	cout<<"~~~~~ Turn #"<<numberMoves<<" ~~~~~"<<endl;
}

/* void Game::restartPlayer(player* thePlayer);
 * This function is called inside main() if playAgain is true.
 * The function makes it so that if the player loses all of his/her lives they can play again without compiling again.
 * ex. call: g.restartPlayer(thePlayer);
 * pre-condition: Player must have zero lives left and playAgain must be equal to true.
 * post-condition: Player lives is set back to 3, player money is set back to 0, and starting location is set back to Boulder (AKA the game restarts).*/
void Game::restartGame(player* thePlayer){
	playerLocation = startingLocation;
	thePlayer->lives = 3;
	thePlayer->rollSum = 0;
	thePlayer->stops = 0;
	thePlayer->money = 0;
	numberMoves = 0;
	playAgain = false;
	printLocationInfo(playerLocation, thePlayer);
	//cout<<"Player Location: "<< playerLocation<<endl;
	//cout<<"You are on spot 1 out 
}
