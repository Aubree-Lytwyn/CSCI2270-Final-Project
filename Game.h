// Game Header File
#ifndef GAME_H
#define GAME_H

struct player{
	int money=0;
	int lives=3;
	int stops=0;
	//location* playerLocation;
	
};

struct location{
	int position;
	std::string name;
	
	location* next;
	location* prev;
};

class Game{
	public:
		Game();
		~Game();
		location* buildGame();
		int rollDie();
		location* movePlayer(location* temp, int rollSum);
		void printLocationInfo();
	private:
		
};
#endif
