#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
    char chosen_word[15];
    int random_number = 0;
    int length_incrementor = 0;
    printf("\n Welcome to hangman! \n\n To start select a number between 1 and 10 inclusive\n\n");
    scanf("%d",&random_number);
    while (random_number > 10 || random_number < 1){
        printf("\n Error\n\n Select a number between 1 and 10 inclusive\n\n");
        scanf(" %d",&random_number);
    }
    if (random_number == 1){
        char word_one[] = {'l','i','v','e','\0'};
        //
        for (int G = 0; G < strlen(word_one); G++){
        chosen_word[G] = word_one[G];
        while (word_one[G] != 0){
            length_incrementor++;
            break;
        }
        }
        
    }
    else if (random_number == 2){
        char word_two[] = {'p','r','o','g','r','a','m','m','i','n','g','\0'};
        for (int H = 0; H < strlen(word_two); H++){
        chosen_word[H] = word_two[H];
        while (word_two[H] != 0){
            length_incrementor++;
            break;
        }
        }
    }
    else if (random_number == 3){
        char word_three[] = {'h','a','n','g','m','a','n','\0'};
        for (int Q = 0; Q < strlen(word_three); Q++){
        chosen_word[Q] = word_three[Q];
        while (word_three[Q] != 0){
            length_incrementor++;
            break;
        }
        }
    }
    else if (random_number == 4){
        char word_four[] = {'w','a','t','e','r','\0'};
        for (int K = 0; K < strlen(word_four); K++){
        chosen_word[K] = word_four[K];
        while (word_four[K] != 0){
            length_incrementor++;
            break;
        }
        }
    }
    else if (random_number == 5){
        char word_five[] = {'c','a','l','c','u','l','a','t','o','r','\0'};
        for (int X = 0; X < strlen(word_five); X++){
        chosen_word[X] = word_five[X];
        while (word_five[X] != 0){
            length_incrementor++;
            break;
        }
        }
    }
    else if (random_number == 6){
        char word_six[] = {'k','e','y','b','o','a','r','d','\0'};
        for (int Z = 0; Z < strlen(word_six); Z++){
        chosen_word[Z] = word_six[Z];
        while (word_six[Z] != 0){
            length_incrementor++;
            break;
        }
        }
    }
    else if (random_number == 7){
        char word_seven[] = {'g','a','m','i','n','g','\0'};
        for (int L = 0; L < strlen(word_seven); L++){
        chosen_word[L] = word_seven[L];
        while (word_seven[L] != 0){
            length_incrementor++;
            break;
        }
        }
    }
    else if (random_number == 8){
        char word_eight[] = {'b','o','o','k','s','\0'};
        for (int P = 0; P < strlen(word_eight); P++){
        chosen_word[P] = word_eight[P];
        while (word_eight[P] != 0){
            length_incrementor++;
            break;
        }
        }
    }
    else if (random_number == 9){
        char word_nine[] = {'m','u','s','i','c','\0'};
        for (int V = 0; V < strlen(word_nine); V++){
        chosen_word[V] = word_nine[V];
        while (word_nine[V] != 0){
            length_incrementor++;
            break;
        }
        }
    }
    else if (random_number == 10){
        char word_ten[] = {'s','a','l','i','s','b','u','r','y','\0'};
        for (int A = 0; A < strlen(word_ten); A++){
        chosen_word[A] = word_ten[A];
        while (word_ten[A] != 0){
            length_incrementor++;
            break;
        }
        }
    }
    // printf("\n The word length was %d\n",length_incrementor);
    int lives = 6;
    char user_guessed_letter[2];
    char guessed_letters[15];
    while (lives > 0){
    printf("\n Enter a letter: ");
    //printf("\n");
    for (int G = 0; G < length_incrementor; G++){
        if (chosen_word[G] != '\0' && (chosen_word[G] != guessed_letters[G])){
            printf(" _");
        }
       // else /*if (chosen_word[G] == guessed_letters[G])*/{
           printf(" %c",chosen_word[G]);
     //  }
       
    }
    printf("\n");
    scanf("%c",user_guessed_letter);
    for (int G = 0; G < 15; G++){
        if (user_guessed_letter[0] == chosen_word[G]){
            printf("\n You guessed a letter! ");
            guessed_letters[G] = chosen_word[G];
           // printf("")
        }
    }
    for (int G = 0; G < 15; G++){
        if (user_guessed_letter[0] != chosen_word[G]){
            printf("\n Wrong ");
            //guessed_letters[G] = chosen_word[G];
           // printf("")
           lives--;

        }
    }

    }

    printf("\n\n");  
    for (int G = 0; G < 15; G++){
        while (chosen_word[G] != '\0'){
            printf("\n\n The correct word was: \n\n%c",chosen_word[G]);
            break; 
        }
       
    }
    
    printf("\n\n");
    
}// while != '\0'length_incrementor++