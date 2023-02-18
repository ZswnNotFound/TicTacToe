#include<iostream>
#include<string>
#include"TicTacToe.h"

using namespace std;

string board[5][5] =
{
{ " ", "|", " ", "|", " "},
{ "-", "+", "-", "+", "-"},
{ " ", "|", " ", "|", " "},
{ "-", "+", "-", "+", "-"},
{ " ", "|", " ", "|", " "}
};

void init();
void printBoard();
void gameLoop();

/*

.123.
1***|
2***|
3***|
.----

*/

int main()
{

	init();
	printBoard();

	gameLoop();

	system("PAUSE");
	return 0;
}

void init()
{
	cout << "*** Tic Tac Toe ***\n\n" << endl;
	cout << "HOW TO PLAY:\n1.Only 2 players are can play.\n2. The first player's character will be X.\n" << endl;
	cout << "Enjoy the game :)" << endl;
}

void printBoard()
{

	cout << "\n_______________________________________________________________\n" << endl;

	for (int y = 0; y < 5; y++)
	{

		for (int x = 0; x < 5; x++)
		{
			if (x == 4)
			{
				cout << board[y][x] << endl;
			}
			else
			{
				cout << board[y][x] << flush;
			}
			

		}

	}

	cout << "\n_______________________________________________________________\n" << endl;

}

void gameLoop()
{
	bool play1Turn = true;
	bool gameRunning = true;

	int x;
	int y;

	while (gameRunning)
	{

		if (play1Turn)
		{
			int x;
			int y;

			cout << "Player 1 x Location: " << flush;
			cin >> x;
			cout << "Player 1 y Location: " << flush;
			cin >> y;

			if (x == 1 && y == 1)
			{
				if (board[0][0] == " ")
				{
					board[0][0] = "X";
				}
				else
				{
					cout << "Player 1, You are not allowed to place their!";
				}

			}
			else if (x == 1 && y == 2)
			{

				if (board[2][0] == " ")
				{
					board[2][0] = "X";
				}
				else
				{
					cout << "Player 1, You are not allowed to place their!";
				}
			}
			else if (x == 1 && y == 3)
			{

				if (board[4][0] == " ")
				{
					board[4][0] = "X";
				}
				else
				{
					cout << "Player 1, You are not allowed to place their!";
				}
			}
			else if (x == 2 && y == 1)
			{
				if (board[0][2] == " ")
				{
					board[0][2] = "X";
				}
				else
				{
					cout << "Player 1, You are not allowed to place their!";
				}
			}
			else if (x == 2 && y == 2)
			{
				if (board[2][2] == " ")
				{
					board[2][2] = "X";
				}
				else
				{
					cout << "Player 1, You are not allowed to place their!";
				}
			}
			else if (x == 2 && y == 3)
			{
				if (board[4][2] == " ")
				{
					board[4][2] = "X";
				}
				else
				{
					cout << "Player 1, You are not allowed to place their!";
				}
			}
			else if (x == 3 && y == 1)
			{
				if (board[0][4] == " ")
				{
					board[0][4] = "X";
				}
				else
				{
					cout << "Player 1, You are not allowed to place their!";
				}
			}
			else if (x == 3 && y == 2)
			{
				if (board[2][4] == " ")
				{
					board[2][4] = "X";
				}
				else
				{
					cout << "Player 1, You are not allowed to place their!";
				}
			}
			else if (x == 3 && y == 3)
			{
				if (board[4][4] == " ")
				{
					board[4][4] = "X";
				}
				else
				{
					cout << "Player 1, You are not allowed to place their!";
				}
			}

			play1Turn = false;
		}
		else
		{
			cout << "Player 2 x Location: " << flush;
			cin >> x;
			cout << "Player 2 y Location: " << flush;
			cin >> y;

			if (x == 1 && y == 1)
			{
				if (board[0][0] == " ")
				{
					board[0][0] = "O";
				}
				else
				{
					cout << "Player 2, You are not allowed to place their!";
				}

			}
			else if (x == 1 && y == 2)
			{

				if (board[2][0] == " ")
				{
					board[2][0] = "O";
				}
				else
				{
					cout << "Player 2, You are not allowed to place their!";
				}
			}
			else if (x == 1 && y == 3)
			{

				if (board[4][0] == " ")
				{
					board[4][0] = "O";
				}
				else
				{
					cout << "Player 2, You are not allowed to place their!";
				}
			}
			else if (x == 2 && y == 1)
			{
				if (board[0][2] == " ")
				{
					board[0][2] = "O";
				}
				else
				{
					cout << "Player 2, You are not allowed to place their!";
				}
			}
			else if (x == 2 && y == 2)
			{
				if (board[2][2] == " ")
				{
					board[2][2] = "O";
				}
				else
				{
					cout << "Player 2, You are not allowed to place their!";
				}
			}
			else if (x == 2 && y == 3)
			{
				if (board[4][2] == " ")
				{
					board[4][2] = "O";
				}
				else
				{
					cout << "Player 2, You are not allowed to place their!";
				}
			}
			else if (x == 3 && y == 1)
			{
				if (board[0][4] == " ")
				{
					board[0][4] = "O";
				}
				else
				{
					cout << "Player 2, You are not allowed to place their!";
				}
			}
			else if (x == 3 && y == 2)
			{
				if (board[2][4] == " ")
				{
					board[2][4] = "O";
				}
				else
				{
					cout << "Player 2, You are not allowed to place their!";
				}
			}
			else if (x == 3 && y == 3)
			{
				if (board[4][4] == " ")
				{
					board[4][4] = "O";
				}
				else
				{
					cout << "Player 2, You are not allowed to place their!";
				}
			}

			play1Turn = true;
		}

		printBoard();

		if (board[0][0] == "X" && board[0][2] == "X" && board[0][4] == "X")
		{cout << "Player 1 WON!" << endl; gameRunning = false;}
		else if (board[2][0] == "X" && board[2][2] == "X" && board[2][4] == "X")
		{cout << "Player 1 WON!" << endl; gameRunning = false;}
		else if (board[4][0] == "X" && board[4][2] == "X" && board[4][4] == "X")
		{cout << "Player 1 WON!" << endl; gameRunning = false;}
		else if (board[0][0] == "X" && board[2][0] == "X" && board[4][0] == "X")
		{cout << "Player 1 WON!" << endl; gameRunning = false;}
		else if (board[0][2] == "X" && board[2][2] == "X" && board[4][2] == "X")
		{cout << "Player 1 WON!" << endl; gameRunning = false;}
		else if (board[0][4] == "X" && board[2][4] == "X" && board[4][4] == "X")
		{cout << "Player 1 WON!" << endl; gameRunning = false;}
		else if (board[0][0] == "X" && board[2][2] == "X" && board[4][4] == "X")
		{cout << "Player 1 WON!" << endl; gameRunning = false;}
		else if (board[0][4] == "X" && board[2][2] == "X" && board[4][0] == "X")
		{cout << "Player 1 WON!" << endl; gameRunning = false;}

		if (board[0][0] == "O" && board[0][2] == "O" && board[0][4] == "O")
		{cout << "Player 2 WON!" << endl; gameRunning = false;}
		else if (board[2][0] == "O" && board[2][2] == "O" && board[2][4] == "O")
		{cout << "Player 2 WON!" << endl; gameRunning = false;}
		else if (board[4][0] == "O" && board[4][2] == "O" && board[4][4] == "O")
		{cout << "Player 2 WON!" << endl; gameRunning = false;}
		else if (board[0][0] == "O" && board[2][0] == "O" && board[4][0] == "O")
		{cout << "Player 2 WON!" << endl; gameRunning = false;}
		else if (board[0][2] == "O" && board[2][2] == "O" && board[4][2] == "O")
		{cout << "Player 2 WON!" << endl; gameRunning = false;}
		else if (board[0][4] == "O" && board[2][4] == "O" && board[4][4] == "O")
		{cout << "Player 2 WON!" << endl; gameRunning = false;}
		else if (board[0][0] == "O" && board[2][2] == "O" && board[4][4] == "O")
		{cout << "Player 2 WON!" << endl; gameRunning = false;}
		else if (board[0][4] == "O" && board[2][2] == "O" && board[4][0] == "O")
		{cout << "Player 2 WON!" << endl; gameRunning = false;}

		if
		(
				board[0][0] != " " && board[0][2] != " " && board[0][4] != " "
				&& board[2][0] != " " && board[2][2] != " " && board[2][4] != " "
				&& board[4][0] != " " && board[4][2] != " " && board[4][4] != " "

		)
		{
			cout << "The Game Ended in a TIE!" << endl;
			gameRunning = false;
		}

	}
}
