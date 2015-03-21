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
	int playtimes = 0;
	while (1)
	{

		cout << "enter the field where you want to play" << tic.getPlayer() << ":" << endl;
		cin >> place;
		bool isvalid = tic.move(place);
		if (isvalid == true)
		{
			// checking fo winner
			bool iswon = tic.isWon(playtimes);
			if (iswon == true)
			{
				cout << "Player" << tic.getPlayer() << " Wins!" << endl;
				Sleep(5000);
				tic.restart();
				cout << "New Game. Lets play!" << endl;

			}
			else if (iswon == false && playtimes == 9)
			{
				cout << "It IS DRAW! Let's play again in 5" << endl;
			}
			else
			{
				cout << " We are still playing. Check! we have " << 9 - playtimes << "moves left" << endl;
			}
			tic.changePlayer();
			playtimes++;
		}
		else 
		{
			cout << "illegal move! Try again" << endl;
			continue;
		}
		//system("cls");
		tic.print();
		
	}

	cout << endl;
	system("pause");
	return 0;
}