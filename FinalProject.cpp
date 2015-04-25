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
	
	Game g; 
	cout<<"You are in Boulder. Do you want to go to DisneyLand? (yes or no)"<<endl;
	getline(cin, userResponse);
	if (userResponse== "yes"){
		g.playerLocation = g.buildGame();
		// print starting city info
		g.printLocationInfo(g.playerLocation, thePlayer);
		cout<<"Lives: "<<thePlayer->lives<<endl;
		cout<<"Money: "<<thePlayer->money<<endl;
		cout<<"Do you want to continue? (yes or no)"<<endl;
		getline(cin, userResponse);
		while (userResponse != "no"){
			
			if (userResponse == "yes"){
				g.increaseMoves();
				g.movePlayer(thePlayer);
				g.printLocationInfo(g.playerLocation, thePlayer);
				//g.getLocationInfo(g.playerLocation, thePlayer);
				
			}
			else{
				cout<<"Please enter yes or no."<<endl; // fix later
			}
			if(g.playerLocation->position == 24 || thePlayer->lives == 0)
			{
				
				userResponse = "no";
				if(thePlayer->lives == 0){
					
					g.getPlayerInfo(thePlayer);
					
					if(g.playAgain == true){
						
						g.restartGame(thePlayer);
						cout<<"Do you want to continue? (yes or no)"<<endl;
						getline(cin, userResponse);
						getline(cin, userResponse);
					}
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
	}
	cout<<"Goodbye!"<<endl;
}
