// Game Header File
#ifndef GAME_H
#define GAME_H

struct player{
	int money=0;
	int lives=3;
	int stops=0;
};

struct location{
	int position;
	string name;
	location* next;
	location* prev;
};

class Game{
	public:
		Game();
		~Game();
		void buildGame();
	private:
}
#endif
