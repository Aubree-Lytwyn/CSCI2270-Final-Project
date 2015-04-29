// Final Project (CSCI 2270)
// Authors: Michelle Ferrall and Aubree Lytwyn

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
	bool first = true;
	while (userResponse != "no"){
		if (first == true){
			cout<<"You are in Boulder. Do you want to go to DisneyLand? (yes or no)"<<endl;
			getline(cin, userResponse);
		}
		if (userResponse == "yes"){
			if (first == true){
				g.playerLocation = g.buildGame();
				g.printLocationInfo(g.playerLocation, thePlayer);
				cout<<"Lives: "<<thePlayer->lives<<endl;
				cout<<"Money: "<<thePlayer->money<<endl;
				first = false;
			}
				//rolls die..moves player...prints new location info
			g.increaseMoves();
			g.movePlayer(thePlayer);
			g.printLocationInfo(g.playerLocation, thePlayer);				
			if(g.playerLocation->position == 24 || thePlayer->lives == 0) //reached Disney land or ran out of lives
			{
				userResponse = "no"; //breaks out of while loop
				g.getPlayerInfo(thePlayer);
				if(g.playAgain == true){ //if the player is out of lives and wants to try again
					g.restartGame(thePlayer);
					cout<<"Do you want to continue? (yes or no)"<<endl;
					getline(cin, userResponse);
					getline(cin, userResponse);
				}
			}
			else
			{
				cout<<"Do you want to continue? (yes or no)"<<endl; 
				getline(cin, userResponse);
			}
		}
		else if (userResponse != "no"){
				cout<<"Please enter yes or no. (yes or no)"<<endl;
				getline(cin, userResponse);
			}
		}
	cout<<"Goodbye!"<<endl;
}
