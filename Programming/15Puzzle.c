#include<stdio.h>
#define SIZE 4
void printBoard(int board[SIZE][SIZE]){
    printf("\n--------------------\n");
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if(board[i][j]==0){
                printf("_");
            }
            else{
                printf("%4d", board[i][j]);
            }
        }
        printf("\n");
    }
    printf("---------------------\n");
}
void findBlank(int board[SIZE][SIZE], int *row, int *col){
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if(board[i][j]==0){
                *row=i;
                *col=j;
                return;
            }
        }}
}
void moveBlank(int board[SIZE][SIZE], char move){
    int r,c;
    findBlank(board, &r, &c);
    if(move=='w' && r>0){
        board[r][c]=board[r-1][c];
        board[r-1][c]=0;
    }
    else if(move=='s' && r<SIZE-1){
        board[r][c]=board[r+1][c];
        board[r+1][c]=0;
    }
    else if(move=='a' && c>0){
        board[r][c]=board[r][c-1];
        board[r][c-1]=0;
    }
    else if(move=='d' && c<SIZE-1){
        board[r][c]=board[r][c+1];
        board[r][c+1]=0;
    }
    else{printf("Invalid move! Try again.");}
}
int isSolved(int board[SIZE][SIZE]){
    int num=1;
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if(i==SIZE-1 && j==SIZE-1 && board[i][j]==0){return 1;}
            if(board[i][j]!=num && !(i==SIZE-1 && j==SIZE-1)){return 0;}
            num++;
        }}
        return 1;
}