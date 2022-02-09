#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 

int main(void){

    // int bingo_one_O = 0;
    // int bingo_one_X = 0;
    // int bingo_two_O = 0;
    // int bingo_two_X = 0;
    int game_over_one = 0;
    // int game_over_two = 0;

    int tic_tac_toe_array[3][3];
    for (int P = 0; P < 3; P++){
        for (int R = 0; R < 3; R++){
            tic_tac_toe_array[P][R] = 0;
        }
    }
    char user_one_X_or_O_selection[2];
    char user_two_X_or_O_selection[2];
    char X[2] = {'X','\0'};
    char O[2] = {'O','\0'};
    // char chosen_symbol[2];                   
    int row_selection;      
    int column_selection;                                                                      
    // player 1
    printf(" Player 1 select X or O, X goes first\n");
    scanf("%1s",user_one_X_or_O_selection);
    if (user_one_X_or_O_selection[0] == 'x'){   
        user_one_X_or_O_selection[0] = user_one_X_or_O_selection[0] -32;
    }
    else if (user_one_X_or_O_selection[0] == 'o'){
        user_one_X_or_O_selection[0] = user_one_X_or_O_selection[0] -32;
    }
    else (printf("\n Invalid\n\n"));                                                 // your up to this area of the code
    // player 2
    printf(" Player 2 select X or O, X goes first\n");
    scanf("%1s",user_two_X_or_O_selection);
    if (user_two_X_or_O_selection[0] == 'x'){
        user_two_X_or_O_selection[0] = user_two_X_or_O_selection[0] -32;
    }
    if (user_two_X_or_O_selection[0] == 'o'){
        user_two_X_or_O_selection[0] = user_two_X_or_O_selection[0] -32;
    }
    int capital_X = strcmp(user_one_X_or_O_selection,X); // player 1
    int capital_O = strcmp(user_one_X_or_O_selection,O);
    int capital_X_two = strcmp(user_two_X_or_O_selection,X); // player 2
    int capital_O_two = strcmp(user_two_X_or_O_selection,O);
    // int player_one_selection;
    // int player_two_selection;
    // toupper(user_X_or_O_selection);
    // int bingo = 0;
    // int bingo_two = 0;
    // int game_over = 0;
    // 1 means X and 0 means O
    while (game_over_one == 0){
    // while (game_over_two == 0){
    if (capital_X == 0){
        for (int P = 0; P < 3; P++){
        for (int R = 0; R < 3; R++){
            printf(" %c",tic_tac_toe_array[P][R]);
        }
        printf("\n");
        }
        printf("\n\n Player 1 which row would you like to mark? from 1 to 3     ");
        scanf("%d",&row_selection);
        while (row_selection <= 0 && row_selection > 3){
            printf(" Invalid enter row index from 1 to 3: ");
            scanf("%d",&row_selection);
        }
        printf(" Player 1 which column would you like to mark? from 1 to 3      ");
        scanf("%d",&column_selection);
        while (column_selection <= 0 && column_selection > 3){
            printf(" Invalid enter column index from 1 to 3: ");
            scanf("%d",&column_selection);
        }
        tic_tac_toe_array[row_selection-1][column_selection-1] = 'X';
        // player_one_selection = 1;
    }
    if (capital_X_two == 0){
        for (int P = 0; P < 3; P++){
        for (int R = 0; R < 3; R++){
            printf(" %c",tic_tac_toe_array[P][R]);
        }
        printf("\n");
        }
        printf("\n\n Player 2 which row would you like to mark? from 1 to 3     ");
        scanf("%d",&row_selection);
        while (row_selection <= 0 && row_selection > 3){
            printf(" Invalid enter row index from 1 to 3: ");
            scanf("%d",&row_selection);
        }
        printf(" Player 2 which column would you like to mark? from 1 to 3      ");
        scanf("%d",&column_selection);
        while (column_selection <= 0 && column_selection > 3){
            printf(" Invalid enter column index from 1 to 3: ");
            scanf("%d",&column_selection);
        }
        tic_tac_toe_array[row_selection-1][column_selection-1] = 'X';
        if ((tic_tac_toe_array[0][0] == 'X' && tic_tac_toe_array[0][1] == 'X' && tic_tac_toe_array[0][2] == 'X') ||
        (tic_tac_toe_array[1][0] == 'X' && tic_tac_toe_array[1][1] == 'X' && tic_tac_toe_array[1][2] == 'X') ||
        (tic_tac_toe_array[2][0] == 'X' && tic_tac_toe_array[2][1] == 'X' && tic_tac_toe_array[2][2] == 'X') ||
        // vertical bingo
        (tic_tac_toe_array[0][0] == 'X' && tic_tac_toe_array[1][0] == 'X' && tic_tac_toe_array[2][0] == 'X') ||
        (tic_tac_toe_array[0][1] == 'X' && tic_tac_toe_array[1][1] == 'X' && tic_tac_toe_array[2][1] == 'X') ||
        (tic_tac_toe_array[0][2] == 'X' && tic_tac_toe_array[1][2] == 'X' && tic_tac_toe_array[2][2] == 'X') ||
        // diagonal bingo
        (tic_tac_toe_array[0][0] == 'X' && tic_tac_toe_array[1][1] == 'X' && tic_tac_toe_array[2][2] == 'X') ||
        (tic_tac_toe_array[0][2] == 'X' && tic_tac_toe_array[1][1] == 'X' && tic_tac_toe_array[2][0] == 'X')){
          game_over_one = 1;
          printf("\n\n X wins!!! \n\n");
          for (int P = 0; P < 3; P++){
        for (int R = 0; R < 3; R++){
            printf(" %c",tic_tac_toe_array[P][R]);
        }
        printf("\n");
        }
        printf("\n\n");
    }
    }
    if (capital_O == 0){
        for (int P = 0; P < 3; P++){
        for (int R = 0; R < 3; R++){
            printf(" %c",tic_tac_toe_array[P][R]);
        }
        printf("\n");
        }
        printf("\n\n Player 1 which row would you like to mark? from 1 to 3     ");
        scanf("%d",&row_selection);
        while (row_selection <= 0 && row_selection > 3){
            printf(" Invalid enter row index from 1 to 3: ");
            scanf("%d",&row_selection);
        }
        printf(" Player 1 Which column would you like to mark? from 1 to 3      ");
        scanf("%d",&column_selection);
        while (column_selection <= 0 && column_selection > 3){
            printf(" Invalid enter column index from 1 to 3: ");
            scanf("%d",&column_selection);
        }
        tic_tac_toe_array[row_selection-1][column_selection-1] = 'O';
        
    }
    if (capital_O_two == 0){
        for (int P = 0; P < 3; P++){
        for (int R = 0; R < 3; R++){
            printf(" %c",tic_tac_toe_array[P][R]);
        }
        printf("\n");
        }
        printf("\n\n Player 2 which row would you like to mark? from 1 to 3     ");
        scanf("%d",&row_selection);
        while (row_selection <= 0 && row_selection > 3){
            printf(" Invalid enter row index from 1 to 3: ");
            scanf("%d",&row_selection);
        }
        printf(" Player 2 which column would you like to mark? from 1 to 3      ");
        scanf("%d",&column_selection);
        while (column_selection <= 0 && column_selection > 3){
            printf(" Invalid enter column index from 1 to 3: ");
            scanf("%d",&column_selection);
        }
        tic_tac_toe_array[row_selection-1][column_selection-1] = 'O';
        // player_two_selection = 0;
    }
    // }
    // Horizontal bingo
    if ((tic_tac_toe_array[0][0] == 'X' && tic_tac_toe_array[0][1] == 'X' && tic_tac_toe_array[0][2] == 'X') ||
        (tic_tac_toe_array[1][0] == 'X' && tic_tac_toe_array[1][1] == 'X' && tic_tac_toe_array[1][2] == 'X') ||
        (tic_tac_toe_array[2][0] == 'X' && tic_tac_toe_array[2][1] == 'X' && tic_tac_toe_array[2][2] == 'X') ||
        // vertical bingo
        (tic_tac_toe_array[0][0] == 'X' && tic_tac_toe_array[1][0] == 'X' && tic_tac_toe_array[2][0] == 'X') ||
        (tic_tac_toe_array[0][1] == 'X' && tic_tac_toe_array[1][1] == 'X' && tic_tac_toe_array[2][1] == 'X') ||
        (tic_tac_toe_array[0][2] == 'X' && tic_tac_toe_array[1][2] == 'X' && tic_tac_toe_array[2][2] == 'X') ||
        // diagonal bingo
        (tic_tac_toe_array[0][0] == 'X' && tic_tac_toe_array[1][1] == 'X' && tic_tac_toe_array[2][2] == 'X') ||
        (tic_tac_toe_array[0][2] == 'X' && tic_tac_toe_array[1][1] == 'X' && tic_tac_toe_array[2][0] == 'X')){
          game_over_one = 1;
          printf("\n\n X wins!!! \n\n");
          for (int P = 0; P < 3; P++){
        for (int R = 0; R < 3; R++){
            printf(" %c",tic_tac_toe_array[P][R]);
        }
        printf("\n");
        }
        printf("\n\n");
    } // horizontal bingo
    else if ((tic_tac_toe_array[0][0] == 'O' && tic_tac_toe_array[0][1] == 'O' && tic_tac_toe_array[0][2] == 'O') ||
             (tic_tac_toe_array[1][0] == 'O' && tic_tac_toe_array[1][1] == 'O' && tic_tac_toe_array[1][2] == 'O') ||
             (tic_tac_toe_array[2][0] == 'O' && tic_tac_toe_array[2][1] == 'O' && tic_tac_toe_array[2][2] == 'O') ||
             // vertical bingo 
             (tic_tac_toe_array[0][0] == 'O' && tic_tac_toe_array[1][0] == 'O' && tic_tac_toe_array[2][0] == 'O') ||
             (tic_tac_toe_array[0][1] == 'O' && tic_tac_toe_array[1][1] == 'O' && tic_tac_toe_array[2][1] == 'O') ||
             (tic_tac_toe_array[0][2] == 'O' && tic_tac_toe_array[1][2] == 'O' && tic_tac_toe_array[2][2] == 'O') ||
             // diagonal bingo
             (tic_tac_toe_array[0][0] == 'O' && tic_tac_toe_array[1][1] == 'O' && tic_tac_toe_array[2][2] == 'O') ||
             (tic_tac_toe_array[0][2] == 'O' && tic_tac_toe_array[1][1] == 'O' && tic_tac_toe_array[2][0] == 'O')){
          game_over_one = 1;
          printf("\n\n O wins!!! \n\n");
          for (int P = 0; P < 3; P++){
        for (int R = 0; R < 3; R++){
            printf(" %c",tic_tac_toe_array[P][R]);
        }
        printf("\n");
        }
        printf("\n\n");
    }
    }
}