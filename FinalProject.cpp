// Final Project (CSCI 2270)
// Authors: Michelle Ferrall and Aubree Lytwyn

#include <iostream>
#include <fstream>
#include "Game1.h"
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
		
		g.playerLocation = g.buildGame(); //builds board and set playerLocation to Boulder
		
		// print starting city info
		g.printLocationInfo(g.playerLocation, thePlayer);
		cout<<"Lives: "<<thePlayer->lives<<endl;
		cout<<"Money: "<<thePlayer->money<<endl;
<<<<<<< HEAD
		
=======
>>>>>>> 2ab3c36eb4bcc8ec2bf48e80801c0dd0e461e993
		cout<<"Do you want to continue? (yes or no)"<<endl;
		getline(cin, userResponse);
		
		while (userResponse != "no"){
			
			if (userResponse == "yes"){
				
				//rolls die..moves player...prints new location info
				g.increaseMoves();
				g.movePlayer(thePlayer);
				g.printLocationInfo(g.playerLocation, thePlayer);				
			}
			else{
				cout<<"Please enter yes or no."<<endl;
			}
			
			if(g.playerLocation->position == 24 || thePlayer->lives == 0) //reached Disney land or ran out of lives
			{
				
				userResponse = "no"; //breaks out of while loop
				if(thePlayer->lives == 0){
					
					g.getPlayerInfo(thePlayer);
					
					if(g.playAgain == true){ //if the player is out of lives and wants to try again
						
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
	if(g.playerLocation->position == 24) //if the player is in Disney land print out all of the players information
	{
		g.getPlayerInfo(thePlayer);
	}
	cout<<"Goodbye!"<<endl;
}
