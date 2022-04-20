#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>
#include <stdbool.h>

void Case_Function_X(int *user_input_validity, int row, int column , int Case , int *user_element_selection_X, int *user_element_selection_O,int tic_tac_toe_array[5][5],int tic_tac_toe_array_current_vacancy[5][5]){                                                                     
        *user_input_validity = 0;
        if (tic_tac_toe_array_current_vacancy[row][column] == 1 && *user_element_selection_X == Case){
        printf("\n Invalid select from the numbers in the array: \n\n");
        for (int P = 0; P < 5; P++){
            for (int R = 0; R < 5; R++){
                if (tic_tac_toe_array[P][R] == 'X' || tic_tac_toe_array[P][R] == 'O'){
                    printf("  %c",tic_tac_toe_array[P][R]);
                }
                else if (tic_tac_toe_array[P][R] < 10){
                    printf("  %d",tic_tac_toe_array[P][R]);
                }
                else {
                    printf(" %d",tic_tac_toe_array[P][R]);
                }
            }
            printf("\n");
        }
        scanf("%d",user_element_selection_X);
        while (*user_element_selection_X > 25 || *user_element_selection_X < 1 || *user_element_selection_X == *user_element_selection_O || *user_element_selection_X == Case){                                                                                  
        printf("\n Invalid select from the numbers in the array: \n\n");
        for (int P = 0; P < 5; P++){
            for (int R = 0; R < 5; R++){
                if (tic_tac_toe_array[P][R] == 'X' || tic_tac_toe_array[P][R] == 'O'){
                    printf("  %c",tic_tac_toe_array[P][R]);
                }
                else if (tic_tac_toe_array[P][R] < 10){
                    printf("  %d",tic_tac_toe_array[P][R]);
                }
                else {
                    printf(" %d",tic_tac_toe_array[P][R]);
                }
            }
            printf("\n");
            }
            scanf("%d",user_element_selection_X);
            }
        }
        else {
        tic_tac_toe_array[row][column] = 'X';
        tic_tac_toe_array_current_vacancy[row][column] = 1;
        *user_input_validity = 1;
    }
 }

void Case_Function_O(int *user_input_validity_O,int row, int column, int Case,int *user_element_selection_X,int *user_element_selection_O,int tic_tac_toe_array[5][5],int tic_tac_toe_array_current_vacancy[5][5]){
    *user_input_validity_O = 0;
     if (tic_tac_toe_array_current_vacancy[row][column] == 1 && *user_element_selection_O == Case){
        printf("\n Invalid select from the numbers in the array: \n\n");
        for (int P = 0; P < 5; P++){
            for (int R = 0; R < 5; R++){
                if (tic_tac_toe_array[P][R] == 'X' || tic_tac_toe_array[P][R] == 'O'){
                    printf("  %c",tic_tac_toe_array[P][R]);
                }
                else if (tic_tac_toe_array[P][R] < 10){
                    printf("  %d",tic_tac_toe_array[P][R]);
                }
                else {
                    printf(" %d",tic_tac_toe_array[P][R]);
                }
            }
            printf("\n");
        }
        scanf("%d",user_element_selection_O);
        while (*user_element_selection_O > 25 || *user_element_selection_O < 1 || *user_element_selection_O == *user_element_selection_X || *user_element_selection_O == Case){                                                                                  
        printf("\n Invalid select from the numbers in the array: \n\n");
        for (int P = 0; P < 5; P++){
            for (int R = 0; R < 5; R++){
                if (tic_tac_toe_array[P][R] == 'X' || tic_tac_toe_array[P][R] == 'O'){
                    printf("  %c",tic_tac_toe_array[P][R]);
                }
                else if (tic_tac_toe_array[P][R] < 10){
                    printf("  %d",tic_tac_toe_array[P][R]);
                }
                else {
                    printf(" %d",tic_tac_toe_array[P][R]);
                }
            }
            printf("\n");
            }
            scanf("%d",user_element_selection_O);
            }
        }
        else {
        tic_tac_toe_array[row][column] = 'O';
        tic_tac_toe_array_current_vacancy[row][column] = 1;
        *user_input_validity_O = 1;
    }
 }

int main(void){
    int game_over_one = 0;
    int draw_official = 0;
    int player_one_score = 0;
    int player_two_score = 0;
    int ttt_incrementor = 1;
    int tic_tac_toe_array[5][5];
    int tic_tac_toe_array_current_vacancy[5][5];
    for (int G = 0; G < 5; G++){
        for (int Q = 0; Q < 5; Q++){
            tic_tac_toe_array[G][Q] = ttt_incrementor++;
        }
    }
    printf("\n\n Welcome to tic tac toe 5x5 same as 3x3 but bigger!\n");
    int user_element_selection_X = 0;
    int user_element_selection_O = 0;

    while (game_over_one == 0){
        printf("\n Player 1 select a number in the array: \n\n");
    for (int P = 0; P < 5; P++){
        for (int R = 0; R < 5; R++){
            if (tic_tac_toe_array[P][R] == 'X' || tic_tac_toe_array[P][R] == 'O'){
                printf("  %c",tic_tac_toe_array[P][R]);
            }
            else if (tic_tac_toe_array[P][R] < 10){
                printf("  %d",tic_tac_toe_array[P][R]);
            }
            else {
                printf(" %d",tic_tac_toe_array[P][R]);
            }
        }
        printf("\n");
    }
    scanf("%d",&user_element_selection_X);
    
    while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O){                                                                                  
        printf("\n Invalid select from the numbers in the array: \n\n");
    for (int P = 0; P < 5; P++){
        for (int R = 0; R < 5; R++){
            if (tic_tac_toe_array[P][R] == 'X' || tic_tac_toe_array[P][R] == 'O'){
                printf("  %c",tic_tac_toe_array[P][R]);
            }
            else if (tic_tac_toe_array[P][R] < 10){
                printf("  %d",tic_tac_toe_array[P][R]);
            }
            else {
                printf(" %d",tic_tac_toe_array[P][R]);
            }
        }
        printf("\n");
    }
    scanf("%d",&user_element_selection_X);
    }

    int user_input_validity = 0;
    while (user_input_validity == 0){
    switch (user_element_selection_X){
        case 1:
            Case_Function_X(&user_input_validity,0,0,1,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 2:
            Case_Function_X(&user_input_validity,0,1,2,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 3:
            Case_Function_X(&user_input_validity,0,2,3,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 4:
            Case_Function_X(&user_input_validity,0,3,4,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 5:
            Case_Function_X(&user_input_validity,0,4,5,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 6:
            Case_Function_X(&user_input_validity,1,0,6,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 7:
            Case_Function_X(&user_input_validity,1,1,7,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 8:
            Case_Function_X(&user_input_validity,1,2,8,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 9:
            Case_Function_X(&user_input_validity,1,3,9,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 10:
            Case_Function_X(&user_input_validity,1,4,10,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 11:
            Case_Function_X(&user_input_validity,2,0,11,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 12:
            Case_Function_X(&user_input_validity,2,1,12,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 13:
            Case_Function_X(&user_input_validity,2,2,13,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 14:
            Case_Function_X(&user_input_validity,2,3,14,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 15:
            Case_Function_X(&user_input_validity,2,4,15,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 16:
            Case_Function_X(&user_input_validity,3,0,16,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 17:
            Case_Function_X(&user_input_validity,3,1,17,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 18:
            Case_Function_X(&user_input_validity,3,2,18,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 19:
            Case_Function_X(&user_input_validity,3,3,19,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 20:
            Case_Function_X(&user_input_validity,3,4,20,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 21:
            Case_Function_X(&user_input_validity,4,0,21,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 22:
            Case_Function_X(&user_input_validity,4,1,22,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 23:
            Case_Function_X(&user_input_validity,4,2,23,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 24:
            Case_Function_X(&user_input_validity,4,3,24,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 25:
            Case_Function_X(&user_input_validity,4,4,25,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
    }
    }
    
    int draw_X = 1; // when equal to 25 the game ends in a draw
    for (int D = 0; D < 5; D++){
        for (int F = 0; F < 5; F++){
            if (// horizontal 
                (tic_tac_toe_array[D-1][F-1] == 'X' && tic_tac_toe_array[D-1][F] == 'X' && tic_tac_toe_array[D-1][F+1] == 'X') ||
                (tic_tac_toe_array[D][F-1] == 'X' && tic_tac_toe_array[D][F] == 'X' && tic_tac_toe_array[D][F+1] == 'X') ||
                (tic_tac_toe_array[D+1][F-1] == 'X' && tic_tac_toe_array[D+1][F] == 'X' && tic_tac_toe_array[D+1][F+1] == 'X') ||
                // vertical
                (tic_tac_toe_array[D-1][F-1] == 'X' && tic_tac_toe_array[D][F-1] == 'X' && tic_tac_toe_array[D+1][F-1] == 'X') ||
                (tic_tac_toe_array[D-1][F] == 'X' && tic_tac_toe_array[D][F] == 'X' && tic_tac_toe_array[D+1][F] == 'X') ||
                (tic_tac_toe_array[D-1][F+1] == 'X' && tic_tac_toe_array[D][F+1] == 'X' && tic_tac_toe_array[D+1][F+1] == 'X') ||
                // diagonal       
                (tic_tac_toe_array[D-1][F-1] == 'X' && tic_tac_toe_array[D][F] == 'X' && tic_tac_toe_array[D+1][F+1] == 'X') ||
                (tic_tac_toe_array[D-1][F+1] == 'X' && tic_tac_toe_array[D][F] == 'X' && tic_tac_toe_array[D+1][F-1] == 'X')){                                                    
                player_one_score = 1;
                break;
            }
            else {
                if (tic_tac_toe_array[D][F] == 'O' || tic_tac_toe_array[D][F] == 'X'){
                   draw_X++;
                }
            }
            if (draw_X == 25){
            draw_official = 1;
            break;
            }  
        }
    }
    if (player_one_score == 1){
        break;
    }
    if (draw_official == 1){
        break;
    }
    

        
    // player 2
    printf("\n Player 2 select a number in the array: \n\n");
    for (int P = 0; P < 5; P++){
        for (int R = 0; R < 5; R++){
            if (tic_tac_toe_array[P][R] == 'X' || tic_tac_toe_array[P][R] == 'O'){
                printf("  %c",tic_tac_toe_array[P][R]);
            }
            else if (tic_tac_toe_array[P][R] < 10){
                printf("  %d",tic_tac_toe_array[P][R]);
            }
            else {
                printf(" %d",tic_tac_toe_array[P][R]);
            }
        }
        printf("\n");
    }
    scanf("%d",&user_element_selection_O);
    while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X){
        printf("\n Invalid select from the numbers in the array: \n\n");
    for (int P = 0; P < 5; P++){
        for (int R = 0; R < 5; R++){
            if (tic_tac_toe_array[P][R] == 'X' || tic_tac_toe_array[P][R] == 'O'){
                printf("  %c",tic_tac_toe_array[P][R]);
            }
            else if (tic_tac_toe_array[P][R] < 10){
                printf("  %d",tic_tac_toe_array[P][R]);
            }
            else {
                printf(" %d",tic_tac_toe_array[P][R]);
            }
        }
        printf("\n");
    }
    scanf("%d",&user_element_selection_O);
    }

    int user_input_validity_O = 0;
    while (user_input_validity_O == 0){     
    switch (user_element_selection_O){
        case 1:
            Case_Function_O(&user_input_validity_O,0,0,1,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 2:
            Case_Function_O(&user_input_validity_O,0,1,2,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 3:
            Case_Function_O(&user_input_validity_O,0,2,3,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 4:
            Case_Function_O(&user_input_validity_O,0,3,4,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 5:
            Case_Function_O(&user_input_validity_O,0,4,5,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 6:
            Case_Function_O(&user_input_validity_O,1,0,6,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 7:
            Case_Function_O(&user_input_validity_O,1,1,7,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 8:
            Case_Function_O(&user_input_validity_O,1,2,8,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 9:
            Case_Function_O(&user_input_validity_O,1,3,9,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 10:
            Case_Function_O(&user_input_validity_O,1,4,10,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 11:
            Case_Function_O(&user_input_validity_O,2,0,11,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 12:
            Case_Function_O(&user_input_validity_O,2,1,12,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 13:
            Case_Function_O(&user_input_validity_O,2,2,13,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 14:
            Case_Function_O(&user_input_validity_O,2,3,14,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 15:
            Case_Function_O(&user_input_validity_O,2,4,15,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 16:
            Case_Function_O(&user_input_validity_O,3,0,16,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 17:
            Case_Function_O(&user_input_validity_O,3,1,17,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 18:
            Case_Function_O(&user_input_validity_O,3,2,18,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 19:
            Case_Function_O(&user_input_validity_O,3,3,19,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 20:
            Case_Function_O(&user_input_validity_O,3,4,20,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 21:
            Case_Function_O(&user_input_validity_O,4,0,21,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 22:
            Case_Function_O(&user_input_validity_O,4,1,22,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 23:
            Case_Function_O(&user_input_validity_O,4,2,23,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 24:
            Case_Function_O(&user_input_validity_O,4,3,24,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
        case 25:
            Case_Function_O(&user_input_validity_O,4,4,25,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            break;
      
    }
    }

    int draw_O = 1; // when equal to 25 the game ends in a draw
    for (int D = 0; D < 5; D++){
        for (int F = 0; F < 5; F++){
            if (// horizontal 
                (tic_tac_toe_array[D-1][F-1] == 'O' && tic_tac_toe_array[D-1][F] == 'O' && tic_tac_toe_array[D-1][F+1] == 'O') ||
                (tic_tac_toe_array[D][F-1] == 'O' && tic_tac_toe_array[D][F] == 'O' && tic_tac_toe_array[D][F+1] == 'O') ||
                (tic_tac_toe_array[D+1][F-1] == 'O' && tic_tac_toe_array[D+1][F] == 'O' && tic_tac_toe_array[D+1][F+1] == 'O') ||
                // vertical
                (tic_tac_toe_array[D-1][F-1] == 'O' && tic_tac_toe_array[D][F-1] == 'O' && tic_tac_toe_array[D+1][F-1] == 'O') ||
                (tic_tac_toe_array[D-1][F] == 'O' && tic_tac_toe_array[D][F] == 'O' && tic_tac_toe_array[D+1][F] == 'O') ||
                (tic_tac_toe_array[D-1][F+1] == 'O' && tic_tac_toe_array[D][F+1] == 'O' && tic_tac_toe_array[D+1][F+1] == 'O') ||
                // diagonal       
                (tic_tac_toe_array[D-1][F-1] == 'O' && tic_tac_toe_array[D][F] == 'O' && tic_tac_toe_array[D+1][F+1] == 'O') ||
                (tic_tac_toe_array[D-1][F+1] == 'O' && tic_tac_toe_array[D][F] == 'O' && tic_tac_toe_array[D+1][F-1] == 'O')){                                                    
                player_two_score = 1;
                
            }
            else {
                if (tic_tac_toe_array[D][F] == 'O' || tic_tac_toe_array[D][F] == 'X'){
                   draw_O++;
                }
            }
            if (draw_O == 25){
            draw_official = 1;
            } 
        }
    }
    if (player_two_score == 1){
        break;
    }
    if (draw_official == 1){
        break;
    }
    }

    if (player_one_score == 1){
        printf("\n\n X wins!!! \n\n");
        for (int E = 0; E < 5; E++){
            for (int V = 0; V < 5; V++){
                if (tic_tac_toe_array[E][V] == 'X' || tic_tac_toe_array[E][V] == 'O'){
                printf("  %c",tic_tac_toe_array[E][V]);
            }
            else if (tic_tac_toe_array[E][V] < 10){
                printf("  %d",tic_tac_toe_array[E][V]);
            }
            else {
                printf(" %d",tic_tac_toe_array[E][V]);
            }
            }
            printf("\n");
        }

    }
    printf("\n\n");

    if (player_two_score == 1){
        printf("\n\n O wins!!! \n\n");
        for (int E = 0; E < 5; E++){
            for (int V = 0; V < 5; V++){
                if (tic_tac_toe_array[E][V] == 'X' || tic_tac_toe_array[E][V] == 'O'){
                printf("  %c",tic_tac_toe_array[E][V]);
            }
            else if (tic_tac_toe_array[E][V] < 10){
                printf("  %d",tic_tac_toe_array[E][V]);
            }
            else {
                printf(" %d",tic_tac_toe_array[E][V]);
            }
            }
            printf("\n");
        }

    }
    printf("\n\n");
    
    if (draw_official == 1){
        printf("\n\n\n\n");
        for (int E = 0; E < 5; E++){
            for (int V = 0; V < 5; V++){
                if (tic_tac_toe_array[E][V] == 'X' || tic_tac_toe_array[E][V] == 'O'){
                printf("  %c",tic_tac_toe_array[E][V]);
            }
            else if (tic_tac_toe_array[E][V] < 10){
                printf("  %d",tic_tac_toe_array[E][V]);
            }
            else {
                printf(" %d",tic_tac_toe_array[E][V]);
            }
            }
            printf("\n");
        }
        printf("\n\n Its a draw...\n\n");
    }
}
