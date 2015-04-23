// Final Project
#include <iostream>
#include <fstream>
#include "Game.h"
using namespace std;

int main(){
	player* thePlayer = new player;
	thePlayer->rollSum = 0;
	string userResponse;
	srand(time(0)); //added this to make rand() work.
	bool playAgain = false;
	Game g; 
	cout<<"You are in Boulder. Do you want to go to DisneyLand? (yes or no)"<<endl;
	getline(cin, userResponse);
	if (userResponse== "yes"){
		g.playerLocation = g.buildGame();
		// print starting city info
		g.printLocationInfo(g.playerLocation, thePlayer);
		cout<<"Do you want to continue?"<<endl;
		getline(cin, userResponse);
		while (userResponse != "no"){
			g.increaseMoves();
			cout<<"in while"<<endl;
			if (userResponse == "yes"){
				
				g.movePlayer(thePlayer);
				g.printLocationInfo(g.playerLocation, thePlayer);
				
			}
			else{
				cout<<"Please enter yes or no."<<endl; // fix later
			}
			if(g.playerLocation->position == 24 || thePlayer->lives == 0)
			{
				userResponse = "no";
				if(thePlayer->lives == 0)
				{
					g.getPlayerInfo(thePlayer);
				}
			}
			else
			{
				cout<<"Do you want to continue? (yes or no)"<<endl; 
				getline(cin, userResponse);
			}
		}
	}
	if(g.playerLocation->position == 24)
	{
		g.getPlayerInfo(thePlayer);
		//cout<<"Would you like to play again? (yes or no)"<<endl;
		//I think we should add a function that restarts the entire game so that once they finish or lose the game they can play another game without compiling each time. 
	}
	cout<<"Goodbye!"<<endl;
}
