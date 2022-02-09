#include <stdio.h>
#include <stdlib.h>

void written_9(void){
       
    for (int length = 24; length < 101; length++){
      for (int a = 0; a < 100; a++){
        for (int b = 0; b < 100; b++){
            if ((((a*4)+(b*9)) == length)){
                printf("\n\n %d  multiple of 4m   and   %d  multiple 9m gives %dm \n\n", a,b,length);
            }
        }
    }
  }
}

int main(void){
   
   written_9();

}