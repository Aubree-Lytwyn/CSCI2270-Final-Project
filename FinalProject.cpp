// Final Project
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	//player* thePlayer;
	string userResponse;
	Game g; 
	cout<<"You are in Boulder. Do you want to go to DisneyLand? (yes or no)"<<endl;
	getline(cin, userResponse);
	g.buildGame();
	while (userResponse != "no"){
		if (userResponse == "yes"){
		
		}
		else{
			cout<<"Please enter yes or no."<<endl; // fix later
		}
		cout<<"Do you want to continue? (yes or now)"<<endl; 
		getline(cin, userResponse);
	}
}
