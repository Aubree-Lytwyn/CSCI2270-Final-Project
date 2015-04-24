// Game Header File
#ifndef GAME_H
#define GAME_H

//using namespace std;

struct player{
	int money=0;
	int lives=3;
	int stops=0;
	int rollSum;
};

struct location{
	int position;
	std::string name;
	location* next;
	location* prev;
	std::string message;
	bool getMoney;
	bool loseMoney;
	bool playerDeath;
	bool playerLost;
	int changeInMoney;
	bool moveBack;
};

class Game{
	public:
		Game();
		~Game();
		location* buildGame();
		int rollDie();
		void movePlayer(player* thePlayer);
		void printLocationInfo(location* playerLocation, player* thePlayer);
		void getLocationInfo(location* playerLocation, player* thePlayer);
		void addPlayerMoney(player* thePlayer, int amount);
		void subtractPlayerMoney(player* thePlayer, int amount);
		void restartPlayer(player* thePlayer);
		void getPlayerInfo(player* thePlayer);
		void increaseMoves();
		void movePlayerBack(player* thePlayer);
		void restartGame(player* thePlayer);
		location* playerLocation; 
		bool playAgain = false;
		
	private:
		int numberMoves=0;
		location* startingLocation;
};
#endif
