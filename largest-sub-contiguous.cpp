#include <iostream>
#include <string>

using namespace std;

 int maximum_sum(int *nums,int length){
    int *sub_array_copy = new int[length*length*length];
    int *sub_array_addition = new int[length*length];
    int array_inc = 0;
    int sub_array_length = 0;
    if (length < 1){
        return 0;
    }
    int addition_inc = 0;
    int negative_count = 0;
    for (int k = 0; k < length; k++){
        if (*(nums+k) < 0){
            negative_count++;
            if (negative_count == length){
                return 0;
            }
        }
    }
    for (int t = 0; t < length; t++){
        int incrementor = 0;
        for (int h = t; h < length; h++){
             int addition_first = 0;
            if (t == 0){
                for (int g = t; g < (length-1-incrementor); g++){
                    addition_first += *(nums+g);
                    *(sub_array_copy+array_inc) = *(nums+g);
                    array_inc++;
                }
                *(sub_array_addition+addition_inc) = addition_first;
                addition_inc++;
                incrementor++;
        }
        else {
             int addition_second = 0;
            for (int g = t; g < (length-incrementor); g++){
                addition_second += *(nums+g);
                *(sub_array_copy+array_inc) = *(nums+g);
                sub_array_length++;
                array_inc++;
            }
            *(sub_array_addition+addition_inc) = addition_second;
            addition_inc++;
            incrementor++;
        }
        }
    }
    int largest = *(sub_array_addition);
    for (int h = 0; h < length*length; h++){
        if (largest < *(sub_array_addition+h))
        largest = *(sub_array_addition+h);
    }
    return largest;
 }