// Final Project
#include <iostream>
#include <fstream>
#include "Game.h"
using namespace std;

int main(){
	//player* thePlayer;
	int roll = 0;
	string userResponse;
	Game g; 
	cout<<"You are in Boulder. Do you want to go to DisneyLand? (yes or no)"<<endl;
	getline(cin, userResponse);
	if (userResponse== "yes"){
		g.buildGame();
		//print out starting city info
		while (userResponse != "no"){
			if (userResponse == "yes"){
				roll = g.rollDie();
			}
			else{
				cout<<"Please enter yes or no."<<endl; // fix later
			}
			cout<<"Do you want to continue? (yes or no)"<<endl; 
			getline(cin, userResponse);
		}
	}
	cout<<"Goodbye!"<<endl;
}
