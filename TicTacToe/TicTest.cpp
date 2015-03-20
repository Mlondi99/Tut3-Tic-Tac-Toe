#include "TicTacToe.h"
#include<Windows.h>

#include<iostream>
using namespace std;
int main()
{
	TicTacToe tic;
	int place;
	cout<< "Welcome,Wamkelekile,Welkom to play the TicTactoe game"<<endl;
	cout << endl;
	tic.print();
	
	while (1)
	{
		cout << "enter the field where you want to play" << tic.getPlayer() << ":" << endl;
		cin >> place;
		bool isvalid = tic.move(place);
		if (isvalid == true)
		{
			tic.changePlayer();
		}
		else 
		{
			cout << "illegal move! Try again" << endl;
			continue;
		}
		tic.print();
		// checking fo winner
		bool iswon = tic.isWon();
		if (iswon == true)
		{
			cout << "Player" << tic.getPlayer() << " Wins!" << endl;
			Sleep(3000);
			tic.restart();
		}
		else
			continue;
		
	}

	cout << endl;
	system("pause");
	return 0;
}