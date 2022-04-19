#include <stdio.h>
#include <stdlib.h>

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
    printf("\n\n Welcome to tic tac toe 5x5 same as 3x3 but bigger\n");
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

    int user_input_validty = 0;
    while (user_input_validty == 0){
    switch (user_element_selection_X){
        case 1:
        if (tic_tac_toe_array_current_vacancy[0][0] == 1 && user_element_selection_X == 1){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 1){                                                                                  
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
        }
        else {
        tic_tac_toe_array[0][0] = 'X';
        tic_tac_toe_array_current_vacancy[0][0] = 1;
        user_input_validty = 1;
        }
        break;
        case 2:
        if (tic_tac_toe_array_current_vacancy[0][1] == 1 && user_element_selection_X == 2){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 2){                                                                                  
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
        }
        else{
        tic_tac_toe_array[0][1] = 'X';
        tic_tac_toe_array_current_vacancy[0][1] = 1;
        user_input_validty = 1;
        }
        break;
        case 3:
        if (tic_tac_toe_array_current_vacancy[0][2] == 1 && user_element_selection_X == 3){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 3){                                                                                  
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
        }
        else{
        tic_tac_toe_array[0][2] = 'X';
        tic_tac_toe_array_current_vacancy[0][2] = 1;
        user_input_validty = 1;
        }
        break;
        case 4:
        if (tic_tac_toe_array_current_vacancy[0][3] == 1 && user_element_selection_X == 4){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 4){                                                                                  
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
        }
        else{
        tic_tac_toe_array[0][3] = 'X';
        tic_tac_toe_array_current_vacancy[0][3] = 1;
        user_input_validty = 1;
        }
        break;
        case 5:
        if (tic_tac_toe_array_current_vacancy[0][4] == 1 && user_element_selection_X == 5){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 5){                                                                                  
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
        }
        else{
        tic_tac_toe_array[0][4] = 'X';
        tic_tac_toe_array_current_vacancy[0][4] = 1;
        user_input_validty = 1;
        }
        break;
        case 6:
        if (tic_tac_toe_array_current_vacancy[1][0] == 1 && user_element_selection_X == 6){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 6){                                                                                  
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
        }
        else{
        tic_tac_toe_array[1][0] = 'X';
        tic_tac_toe_array_current_vacancy[1][0] = 1;
        user_input_validty = 1;
        }
        break;
        case 7:
        if (tic_tac_toe_array_current_vacancy[1][1] == 1 && user_element_selection_X == 7){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 7){                                                                                  
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
        }
        else{
        tic_tac_toe_array[1][1] = 'X';
        tic_tac_toe_array_current_vacancy[1][1] = 1;
        user_input_validty = 1;
        }
        break;
        case 8:
        if (tic_tac_toe_array_current_vacancy[1][2] == 1 && user_element_selection_X == 8){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 8){                                                                                  
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
        }
        else{
        tic_tac_toe_array[1][2] = 'X';
        tic_tac_toe_array_current_vacancy[1][2] = 1;
        user_input_validty = 1;
        }
        break;
        case 9:
        if (tic_tac_toe_array_current_vacancy[1][3] == 1 && user_element_selection_X == 9){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 9){                                                                                  
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
        }
        else{
        tic_tac_toe_array[1][3] = 'X';
        tic_tac_toe_array_current_vacancy[1][3] = 1;
        user_input_validty = 1;
        }
        break;
        case 10:
        if (tic_tac_toe_array_current_vacancy[1][4] == 1 && user_element_selection_X == 10){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 10){                                                                                  
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
        }
        else{
        tic_tac_toe_array[1][4] = 'X';
        tic_tac_toe_array_current_vacancy[1][4] = 1;
        user_input_validty = 1;
        }
        break;
        case 11:
        if (tic_tac_toe_array_current_vacancy[2][0] == 1 && user_element_selection_X == 11){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 11){                                                                                  
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
        }
        else{
        tic_tac_toe_array[2][0] = 'X';
        tic_tac_toe_array_current_vacancy[2][0] = 1;
        user_input_validty = 1;
        }
        break;
        case 12:
        if (tic_tac_toe_array_current_vacancy[2][1] == 1 && user_element_selection_X == 12){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 12){                                                                                  
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
        }
        else{
        tic_tac_toe_array[2][1] = 'X';
        tic_tac_toe_array_current_vacancy[2][1] = 1;
        user_input_validty = 1;
        }
        break;
        case 13:
        if (tic_tac_toe_array_current_vacancy[2][2] == 1 && user_element_selection_X == 13){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 13){                                                                                  
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
        }
        else{
        tic_tac_toe_array[2][2] = 'X';
        tic_tac_toe_array_current_vacancy[2][2] = 1;
        user_input_validty = 1;
        }
        break;
        case 14:
        if (tic_tac_toe_array_current_vacancy[2][3] == 1 && user_element_selection_X == 14){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 14){                                                                                  
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
        }
        else{
        tic_tac_toe_array[2][3] = 'X';
        tic_tac_toe_array_current_vacancy[2][3] = 1;
        user_input_validty = 1;
        }
        break;
        case 15:
        if (tic_tac_toe_array_current_vacancy[2][4] == 1 && user_element_selection_X == 15){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 15){                                                                                  
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
        }
        else{
        tic_tac_toe_array[2][4] = 'X';
        tic_tac_toe_array_current_vacancy[2][4] = 1;
        user_input_validty = 1;
        }
        break;
        case 16:
        if (tic_tac_toe_array_current_vacancy[3][0] == 1 && user_element_selection_X == 16){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 16){                                                                                  
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
        }
        else{
        tic_tac_toe_array[3][0] = 'X';
        tic_tac_toe_array_current_vacancy[3][0] = 1;
        user_input_validty = 1;
        }
        break;
        case 17:
        if (tic_tac_toe_array_current_vacancy[3][1] == 1 && user_element_selection_X == 17){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 17){                                                                                  
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
        }
        else{
        tic_tac_toe_array[3][1] = 'X';
        tic_tac_toe_array_current_vacancy[3][1] = 1;
        user_input_validty = 1;
        }
        break;
        case 18:
        if (tic_tac_toe_array_current_vacancy[3][2] == 1 && user_element_selection_X == 18){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 18){                                                                                  
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
        }
        else{
        tic_tac_toe_array[3][2] = 'X';
        tic_tac_toe_array_current_vacancy[3][2] = 1;
        user_input_validty = 1;
        }
        break;
        case 19:
        if (tic_tac_toe_array_current_vacancy[3][3] == 1 && user_element_selection_X == 19){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 19){                                                                                  
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
        }
        else{
        tic_tac_toe_array[3][3] = 'X';
        tic_tac_toe_array_current_vacancy[3][3] = 1;
        user_input_validty = 1;
        }
        break;
        case 20:
        if (tic_tac_toe_array_current_vacancy[3][4] == 1 && user_element_selection_X == 20){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 20){                                                                                  
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
        }
        else{
        tic_tac_toe_array[3][4] = 'X';
        tic_tac_toe_array_current_vacancy[3][4] = 1;
        user_input_validty = 1;
        }
        break;
        case 21:
        if (tic_tac_toe_array_current_vacancy[4][0] == 1 && user_element_selection_X == 21){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 21){                                                                                  
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
        }
        else{
        tic_tac_toe_array[4][0] = 'X';
        tic_tac_toe_array_current_vacancy[4][0] = 1;
        user_input_validty = 1;
        }
        break;
        case 22:
        if (tic_tac_toe_array_current_vacancy[4][1] == 1 && user_element_selection_X == 22){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 22){                                                                                  
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
        }
        else{
        tic_tac_toe_array[4][1] = 'X';
        tic_tac_toe_array_current_vacancy[4][1] = 1;
        user_input_validty = 1;
        }
        break;
        case 23:
        if (tic_tac_toe_array_current_vacancy[4][2] == 1 && user_element_selection_X == 23){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 23){                                                                                  
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
        }
        else{
        tic_tac_toe_array[4][2] = 'X';
        tic_tac_toe_array_current_vacancy[4][2] = 1;
        user_input_validty = 1;
        }
        break;
        case 24:
        if (tic_tac_toe_array_current_vacancy[4][3] == 1 && user_element_selection_X == 24){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 24){                                                                                  
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
        }
        else{
        tic_tac_toe_array[4][3] = 'X';
        tic_tac_toe_array_current_vacancy[4][3] = 1;
        user_input_validty = 1;
        }
        break;
        case 25:
        if (tic_tac_toe_array_current_vacancy[4][4] == 1 && user_element_selection_X == 25){
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
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O || user_element_selection_X == 25){                                                                                  
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
        }
        else{
        tic_tac_toe_array[4][4] = 'X';
        tic_tac_toe_array_current_vacancy[4][4] = 1;
        user_input_validty = 1;
        }
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
            if (tic_tac_toe_array[P][R] < 10){
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

    int user_input_validty_O = 0;
    while (user_input_validty_O == 0){     
    switch (user_element_selection_O){
        case 1:
        if (tic_tac_toe_array_current_vacancy[0][0] == 1 && user_element_selection_O == 1){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 1){                                                                                  
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
        }
        else {
        tic_tac_toe_array[0][0] = 'O';
        tic_tac_toe_array_current_vacancy[0][0] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 2:
        if (tic_tac_toe_array_current_vacancy[0][1] == 1 && user_element_selection_O == 2){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 2){                                                                                  
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
        }
        else {
        tic_tac_toe_array[0][1] = 'O';
        tic_tac_toe_array_current_vacancy[0][1] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 3:
        if (tic_tac_toe_array_current_vacancy[0][2] == 1 && user_element_selection_O == 3){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 3){                                                                                  
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
        }
        else {
        tic_tac_toe_array[0][2] = 'O';
        tic_tac_toe_array_current_vacancy[0][2] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 4:
        if (tic_tac_toe_array_current_vacancy[0][3] == 1 && user_element_selection_O == 4){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 4){                                                                                  
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
        }
        else {
        tic_tac_toe_array[0][3] = 'O';
        tic_tac_toe_array_current_vacancy[0][3] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 5:
        if (tic_tac_toe_array_current_vacancy[0][4] == 1 && user_element_selection_O == 5){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 5){                                                                                  
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
        }
        else {
        tic_tac_toe_array[0][4] = 'O';
        tic_tac_toe_array_current_vacancy[0][4] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 6:
        if (tic_tac_toe_array_current_vacancy[1][0] == 1 && user_element_selection_O == 6){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 6){                                                                                  
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
        }
        else {
        tic_tac_toe_array[1][0] = 'O';
        tic_tac_toe_array_current_vacancy[1][0] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 7:
        if (tic_tac_toe_array_current_vacancy[1][1] == 1 && user_element_selection_O == 7){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 7){                                                                                  
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
        }
        else {
        tic_tac_toe_array[1][1] = 'O';
        tic_tac_toe_array_current_vacancy[1][1] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 8:
        if (tic_tac_toe_array_current_vacancy[1][2] == 1 && user_element_selection_O == 8){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 8){                                                                                  
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
        }
        else {
        tic_tac_toe_array[1][2] = 'O';
        tic_tac_toe_array_current_vacancy[1][2] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 9:
        if (tic_tac_toe_array_current_vacancy[1][3] == 1 && user_element_selection_O == 9){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 9){                                                                                  
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
        }
        else {
        tic_tac_toe_array[1][3] = 'O';
        tic_tac_toe_array_current_vacancy[1][3] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 10:
        if (tic_tac_toe_array_current_vacancy[1][4] == 1 && user_element_selection_O == 10){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 10){                                                                                  
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
        }
        else {
        tic_tac_toe_array[1][4] = 'O';
        tic_tac_toe_array_current_vacancy[1][4] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 11:
        if (tic_tac_toe_array_current_vacancy[2][0] == 1 && user_element_selection_O == 11){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 11){                                                                                  
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
        }
        else {
        tic_tac_toe_array[2][0] = 'O';
        tic_tac_toe_array_current_vacancy[2][0] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 12:
        if (tic_tac_toe_array_current_vacancy[2][1] == 1 && user_element_selection_O == 12){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 12){                                                                                  
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
        }
        else {
        tic_tac_toe_array[2][1] = 'O';
        tic_tac_toe_array_current_vacancy[2][1] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 13:
        if (tic_tac_toe_array_current_vacancy[2][2] == 1 && user_element_selection_O == 13){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 13){                                                                                  
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
        }
        else {
        tic_tac_toe_array[2][2] = 'O';
        tic_tac_toe_array_current_vacancy[2][2] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 14:
        if (tic_tac_toe_array_current_vacancy[2][3] == 1 && user_element_selection_O == 14){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 14){                                                                                  
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
        }
        else {
        tic_tac_toe_array[2][3] = 'O';
        tic_tac_toe_array_current_vacancy[2][3] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 15:
        if (tic_tac_toe_array_current_vacancy[2][4] == 1 && user_element_selection_O == 15){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 15){                                                                                  
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
        }
        else {
        tic_tac_toe_array[2][4] = 'O';
        tic_tac_toe_array_current_vacancy[2][4] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 16:
        if (tic_tac_toe_array_current_vacancy[3][0] == 1 && user_element_selection_O == 16){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 16){                                                                                  
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
        }
        else {
        tic_tac_toe_array[3][0] = 'O';
        tic_tac_toe_array_current_vacancy[3][0] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 17:
        if (tic_tac_toe_array_current_vacancy[3][1] == 1 && user_element_selection_O == 17){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 17){                                                                                  
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
        }
        else {
        tic_tac_toe_array[3][1] = 'O';
        tic_tac_toe_array_current_vacancy[3][1] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 18:
        if (tic_tac_toe_array_current_vacancy[3][2] == 1 && user_element_selection_O == 18){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 18){                                                                                  
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
        }
        else {
        tic_tac_toe_array[3][2] = 'O';
        tic_tac_toe_array_current_vacancy[3][2] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 19:
        if (tic_tac_toe_array_current_vacancy[3][3] == 1 && user_element_selection_O == 19){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 19){                                                                                  
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
        }
        else {
        tic_tac_toe_array[3][3] = 'O';
        tic_tac_toe_array_current_vacancy[3][3] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 20:
        if (tic_tac_toe_array_current_vacancy[3][4] == 1 && user_element_selection_O == 20){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 20){                                                                                  
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
        }
        else {
        tic_tac_toe_array[3][4] = 'O';
        tic_tac_toe_array_current_vacancy[3][4] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 21:
        if (tic_tac_toe_array_current_vacancy[4][0] == 1 && user_element_selection_O == 21){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 21){                                                                                  
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
        }
        else {
        tic_tac_toe_array[4][0] = 'O';
        tic_tac_toe_array_current_vacancy[4][0] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 22:
        if (tic_tac_toe_array_current_vacancy[4][1] == 1 && user_element_selection_O == 22){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 22){                                                                                  
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
        }
        else {
        tic_tac_toe_array[4][1] = 'O';
        tic_tac_toe_array_current_vacancy[4][1] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 23:
        if (tic_tac_toe_array_current_vacancy[4][2] == 1 && user_element_selection_O == 23){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 23){                                                                                  
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
        }
        else {
        tic_tac_toe_array[4][2] = 'O';
        tic_tac_toe_array_current_vacancy[4][2] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 24:
        if (tic_tac_toe_array_current_vacancy[4][3] == 1 && user_element_selection_O == 24){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 24){                                                                                  
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
        }
        else {
        tic_tac_toe_array[4][3] = 'O';
        tic_tac_toe_array_current_vacancy[4][3] = 1;
        user_input_validty_O = 1;
        }
        break;
        case 25:
        if (tic_tac_toe_array_current_vacancy[4][4] == 1 && user_element_selection_O == 25){
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
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X || user_element_selection_O == 25){                                                                                  
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
        }
        else {
        tic_tac_toe_array[4][4] = 'O';
        tic_tac_toe_array_current_vacancy[4][4] = 1;
        user_input_validty_O = 1;
        }
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
