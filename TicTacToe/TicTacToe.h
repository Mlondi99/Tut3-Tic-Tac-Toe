#pragma once
class TicTocToe
{
private:
	char currentPlayer;
	char Board[3][3];  // board
	int palce;
public:
	int place; // field where the player wants to play
	TicTocToe(char nowplaying, int field); // constructor
	void restart();
	bool move();
	void print();
	bool isWon();
	bool validateMove(int, int);

	~TicTocToe(); // deconstructor
};

