#include<bits/stdc++.h>
using namespace std;

char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn ='x';
int r,c;
int draw=0;
void displayInstructions(){
    cout<<endl;
    cout<<endl;
    cout<<"____Tic Tac Toe User Manual\n";
    cout<<endl;
    cout<<"Welcome to Tic Tac Toe! This classic game is played on a 3x3 grid and \n \
    the goal is to be the first player to get three of their marks in a row, \n \
    either horizontally, vertically, or diagonally.\n";
    cout<<endl;
    cout<<"Here's how to play:"<<endl;
    cout<<endl;
    cout<<"  The game is played by two players. Player 1 will be [X] and Player 2 will be [O]."<<endl;
    cout<<endl;
    cout<<"  The game starts with an empty 3x3 grid."<<endl;
    cout<<endl;
    cout<<"  Players take turns to make their moves. Player 1 [x] goes first."<<endl;
    cout<<endl;
    cout<<"  To make a move, enter the corresponding number for the position on the board."<<endl;
    cout<<endl;
    cout<<"  Each position is represented by a number from 1 to 9 as shown below:"<<endl;
    cout<<endl;
    cout<<endl;
    
    cout<<"\t\t 1 | 2 | 3 "<<endl;
    cout<<"\t\t___|___|___"<<endl;
    cout<<"\t\t   |   |   "<<endl;
    cout<<"\t\t 4 | 5 | 6 "<<endl;
    cout<<"\t\t___|___|___"<<endl;
    cout<<"\t\t   |   |   "<<endl;
    cout<<"\t\t 7 | 8 | 9 "<<endl;
    cout<<"\t\t   |   |   "<<endl;
    
    cout<<endl;
    cout<<"  For example, if you want to place your mark in the top-right corner, enter 3."<<endl;
    cout<<endl;
    cout<<"  After each move, the updated board will be displayed."<<endl;
    cout<<endl;
    cout<<"  The game continues until one of the players gets three of their marks in a row or there are no more empty positions on the board, resulting in a draw."<<endl;
    cout<<endl;
    cout<<"  If a player wins, the game will display a congratulatory message and end."<<endl;
    cout<<endl;
    cout<<"  If the game ends in a draw, it will display a message indicating a tie."<<endl;
    cout<<endl;
}
void display(){
    system("cls");
    cout<<"T I C  T A C  T O E"<<endl;
    cout<<"\tPlayer 1 [x]"<<'\n'<<"\tPlayer 2 [o]"<<endl;

    cout<<"\t\t   |   |   "<<endl;
    cout<<"\t\t "<<a[0][0]<<" | "<<a[0][1]<<" | "<<a[0][2]   <<endl;
    cout<<"\t\t___|___|___"<<endl;
    cout<<"\t\t   |   |   "<<endl;
    cout<<"\t\t "<<a[1][0]<<" | "<<a[1][1]<<" | "<<a[1][2]   <<endl;
    cout<<"\t\t___|___|___"<<endl;
    cout<<"\t\t   |   |   "<<endl;
    cout<<"\t\t "<<a[2][0]<<" | "<<a[2][1]<<" | "<<a[2][2]   <<endl;
    cout<<"\t\t   |   |   "<<endl;
}
void player_input(){
    char in;
    if(turn=='x'){
        cout<<"Player 1[x]'s turn : ";
        cin>>in;
    }
    else if(turn=='o'){
        cout<<"Player 2[o]'s turn : ";
        cin>>in;
    }

    switch(in){
        case '1': 
            r=0,c=0;
            break;
        case '2': 
            r=0,c=1;
            break;
        case '3': 
            r=0,c=2;
            break;
        case '4': 
            r=1,c=0;
            break;
        case '5': 
            r=1,c=1;
            break;
        case '6': 
            r=1,c=2;
            break;
        case '7': 
            r=2,c=0;
            break;
        case '8': 
            r=2,c=1;
            break;
        case '9': 
            r=2,c=2;
            break;
        default:
            cout<<"Invalid Choice"<<endl;
            break;
    }
    if(turn=='x' && a[r][c] != 'x' && a[r][c] != 'o'){
        a[r][c]='x';
        turn='o';
    }
    else if(turn=='o' && a[r][c] != 'x' && a[r][c] != 'o'){
        a[r][c]='o';
        turn='x';
    }
    else{
        cout<<"BOX IS FILLED- try AGAIN"<<endl;
        player_input();
    }
    display();
}
int puzzle_check(){
    // if row or column is filled or not
    for(int i=0;i<3;i++){
        if((a[0][i] == a[1][i] && a[0][i] == a[2][i]) || (a[i][0] == a[i][1] && a[i][0] == a[i][2])){
            return 0;
        }
    }
    // if primary diagonal / seconcdary diagonal filled or not
    if((a[0][0] == a[1][1] && a[0][0] == a[2][2]) || (a[0][2] == a[1][1] && a[0][2] == a[2][0])){
        return 0;
    }
    // if all box are filled or not
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j] != 'x' && a[i][j] != 'o'){
                return 1;
            }
        }
    }
    // any of the above is not true then it is a DRAW
    draw=1;
    return 0;
}
int main(){
    int start;
    cout<<"___________________________________T I C  T A C  T O E__________________________________"<<endl;
    cout<<"Press 1 to start"<<endl;
    cout<<"Press 2 for user maunual"<<endl;
    cout<<"Press 0 to end"<<endl;
    cin>>start;
    if(start==1){
        while(puzzle_check()){
            display();
            player_input();
        }
        if(turn == 'x' && draw==0){
            cout<<"Player 2[0] wins! Congratulations"<<endl;
        }
        else if(turn == 'o' && draw==0){
            cout<<"Player 1[x] wins! Congratulations"<<endl;
        }
        else{
            cout<<"The match is tied!"<<endl;
        }
    }
    else if(start==2){
        int finaldecision;
        displayInstructions();
        cout<<"Press 1 to start"<<endl;
        cout<<"Press 0 to end"<<endl;
        cin>>finaldecision; 
        // cout<<endl;
        // cout<<endl;
        if(finaldecision==1){
            while(puzzle_check()){
            display();
            player_input();
            }
            if(turn == 'x' && draw==0){
                cout<<"Player 2[0] wins! Congratulations"<<endl;
            }
            else if(turn == 'o' && draw==0){
                cout<<"Player 1[x] wins! Congratulations"<<endl;
            }
            else{
                cout<<"The match is tied!"<<endl;
            }
        }
        else if(finaldecision==0){
            cout<<"Game Ended";
        }
    }
    else if(start==0){
        cout<<"Game Ended";
    }
    
    return 0;
}