#include <iostream>

int main()
{
char cSq1('1');
char cSq2('2');
char cSq3('3');
char cSq4('4');
char cSq5('5');
char cSq6('6');
char cSq7('7');
char cSq8('8');
char cSq9('9');
int iturn(1);
bool bOver(true);

//Main game loop

//print game board
do {
	std::cout << cSq1 << "|" << cSq2 << "|" << cSq3 << std::endl;
	std::cout << "-+-+-" << std::endl;
	std::cout << cSq4 << "|" << cSq5 << "|" << cSq6 << std::endl;
	std::cout << "-+-+-" << std::endl;
	std::cout << cSq7 << "|" << cSq8 << "|" << cSq9 << std::endl;
	std::cout << "-+-+-" << std::endl;

// Set player 1 to "X", player 2 to "O"
char cMark;
if (iturn == 1)
{
	cMark = 'X';
}
else
{
	cMark = 'O';
}
	std::cout << "Player" << iturn << "'s move:" << std::endl;
	bool valid;
//Prompt the player for a move
do 
{
	char nextMove;
	valid = true;
	std::cin >> nextMove;

	if(cSq1 =='1' && nextMove=='1'){
	cSq1 = cMark;
	} else if (cSq2 =='2' && nextMove=='2'){
	cSq2 = cMark;
	} else if (cSq3 =='3' && nextMove=='3'){
	cSq3 = cMark;
	} else if (cSq4 =='4' && nextMove=='4'){
	cSq4 = cMark;
	} else if (cSq5 =='5' && nextMove=='5'){
	cSq5 = cMark;
	} else if (cSq6 =='6' && nextMove=='6'){
	cSq6 = cMark;
	} else if (cSq7 =='7' && nextMove=='7'){
	cSq7 = cMark;
	} else if (cSq8 =='8' && nextMove=='8'){
	cSq8 = cMark;
	} else if (cSq9 =='9' && nextMove=='9'){
	cSq9 = cMark;
	} else
	{
		std::cout << "Invalid Move. Try Again." << std::endl;
		valid = false;
	}
}while(!valid);

bOver = false;
bool winGame = true;

//checks for end of game conditions
if(cSq1 != '1')
{
	if(cSq1 == cSq4 && cSq1 == cSq7)
	{bOver = true;}
	if(cSq1 == cSq2 && cSq1 == cSq3)
	{bOver = true;}
}
else if(cSq3 != '9')
	{
	if(cSq9 == cSq6 && cSq9 == cSq3)
		{bOver = true;}
	if(cSq9 == cSq7 && cSq9 == cSq8)
		{bOver = true;}
	}
else if(cSq5 != '5')
{
	if(cSq5 == cSq7 && cSq5 == 3)
	{bOver = true;}
	if(cSq5 == cSq1 && cSq5 == cSq9)
	{bOver = true;}
	if(cSq5 == cSq4 && cSq5 == cSq6)
	{bOver = true;}
	if(cSq5 == cSq8 && cSq5 == cSq2)
	{bOver = true;}
}

// check the no win condition
if( cSq1 != '1' && cSq2 != '2' && cSq3 != '3' && 
   cSq4 != '4' && cSq5 != '5' && cSq6 != '6' &&
   cSq7 != '7' && cSq8 != '8' && cSq9 != '9' && !bOver)
{
	bOver = true;
	winGame = false;

}

	if (bOver) {
			if (winGame) {
				std::cout << "Player" << iturn << " wins!" << std::endl;
			}
			// Print ending board
			std::cout << cSq1 << "|" << cSq2 << "|" << cSq3 << std::endl;
			std::cout << "-+-+-" << std::endl;
			std::cout << cSq4 << "|" << cSq5 << "|" << cSq6 << std::endl;
			std::cout << "-+-+-" << std::endl;
			std::cout << cSq7 << "|" << cSq8 << "|" << cSq9 << std::endl;
			std::cout << "-+-+-" << std::endl;

			std::cout << "Game Over!" << std::endl;
			std::cout << "Play again (y/n)?" << std::endl;
			char cPlayAgain;
			std::cin >> cPlayAgain;

			if (cPlayAgain == 'y') {
				bOver = false;
				// Clear the board
				cSq1 = '1';
				cSq2 = '2';
				cSq3 = '3';
				cSq4 = '4';
				cSq5 = '5';
				cSq6 = '6';
				cSq7 = '7';
				cSq8 = '8';
				cSq9 = '9';
			}
			iturn = 1;
		} else {
			// Alternate player turns
			if (iturn == 1) {
				iturn = 2;
			} else {
				iturn = 1;
			}
		}
	} while(!bOver);
}