#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Tic Tac Toe User Manual\n";
    cout<<"Welcome to Tic Tac Toe! This classic game is played on a 3x3 grid and \n \
    the goal is to be the first player to get three of their marks in a row, \n \
    either horizontally, vertically, or diagonally.\n";
    cout<<endl;
    cout<<"Here's how to play:"<<endl;
    cout<<"The game is played by two players. Player 1 will be [X] and Player 2 will be [O]."<<endl;
    cout<<"The game starts with an empty 3x3 grid."<<endl;
    cout<<"Players take turns to make their moves. Player 1 [x] goes first."<<endl;
    cout<<"To make a move, enter the corresponding number for the position on the board."<<endl;
    cout<<"Each position is represented by a number from 1 to 9 as shown below:"<<endl;
    cout<<endl;
    cout<<endl;
    
    cout<<" 1 | 2 | 3 "<<endl;
    cout<<"___|___|___"<<endl;
    cout<<"   |   |   "<<endl;
    cout<<" 4 | 5 | 6 "<<endl;
    cout<<"___|___|___"<<endl;
    cout<<"   |   |   "<<endl;
    cout<<" 7 | 8 | 9 "<<endl;
    cout<<"   |   |   "<<endl;
    
    cout<<"For example, if you want to place your mark in the top-right corner, enter 3."<<endl;
    cout<<"After each move, the updated board will be displayed."<<endl;
    cout<<"The game continues until one of the players gets three of their marks in a row or there are no more empty positions on the board, resulting in a draw."<<endl;
    cout<<"If a player wins, the game will display a congratulatory message and end."<<endl;
    cout<<"If the game ends in a draw, it will display a message indicating a tie."<<endl;
    return 0;
}