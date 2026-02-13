#include <stdio.h>

int main()
{
    const int size = 3;
    char board[size][size];
    int i, j;
    int x_win = 0;
    int o_win = 0;
    int result = -1; // -1 no win, 0 draw, 1 x win, 2 o win

    // 输入棋盘
    for (i = 0; i < size; i++){
        for (j = 0; j < size; j++){
            scanf(" %c", &board[i][j]);
        }
    }   

    // 检查行
    for (i = 0; i < size; i++){
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]){
            if (board[i][0] == 'X') x_win = 1;
            if (board[i][0] == 'O') o_win = 1;
        }
    }   


    // 检查列
    for (j = 0; j < size; j++){
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j]){
            if (board[0][j] == 'X') x_win = 1;
            if (board[0][j] == 'O') o_win = 1;
        }
    }

    // 检查对角线
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]){
        if (board[0][0] == 'X') x_win = 1;
        if (board[0][0] ==  'O') o_win = 1;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]){
        if (board[0][2] == 'X') x_win = 1;
        if (board[0][2] ==  'O') o_win = 1;
    }   

    if (x_win && o_win){
        result = 0; // draw
    } else if (x_win){
        result = 1; // x win
    } else if (o_win){
        result = 2; // o win
    } else {
        result = -1; // no win
    }



    return 0;
}
