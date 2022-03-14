#include <iostream>
#include <new>
#include <array>

using namespace std;

void print_array_10D(long long int **********array,int array_length, int array_width, int array_height, int fourth_dimension,int fifth_dimension,int six_dimension,int seventh_dimension,int eighth_dimension,int ninth_dimension,int tenth_dimension){
    cout <<"\n";
    for (int a = 0; a < array_length; a++){
        for (int b = 0; b < array_width; b++){
            for (int c = 0; c < array_height; c++){
                for (int d = 0; d < fourth_dimension; d++){
                    for (int e = 0; e < fifth_dimension; e++){
                        for (int f = 0; f < six_dimension; f++){
                            for (int g = 0; g < seventh_dimension; g++){
                                for (int h = 0; h < eighth_dimension; h++){
                                    for (int i = 0; i < ninth_dimension; i++){
                                        for (int j = 0; j < tenth_dimension; j++){
                                            cout << *(*(*(*(*(*(*(*(*(*(array+a)+b)+c)+d)+e)+f)+g)+h)+i)+j)<< " ";
                                        }
                                        cout <<"\n";
                                    }
                                    cout <<"\n";
                                }
                                cout <<"\n";
                            }
                            cout <<"\n";
                        }
                        cout <<"\n";
                    }
                    cout <<"\n";
                }
                cout <<"\n\n";
            }
            cout <<"\n\n";
        }
        cout <<"\n\n\n\n\n\n\n\n";
    }
    cout <<"\n";
}


int main(){
    int array_length_ten = 0;
    int array_width_ten = 0;
    int array_height_ten = 0;
    int array_fourth_dimension_ten = 0;
    int array_fifth_dimension_ten = 0;
    int array_sixth_dimension = 0;
    int array_seventh_dimension = 0;
    int array_eighth_dimension = 0;
    int array_nineth_dimension = 0;
    int array_tenth_dimension = 0;

    long long int incrementor_ten = 1;

    cout <<"\n\n\n\n\n\n 10 Dimension Array ";
    cout <<"\n What should the array length be? ";
    cin >> array_length_ten;
    cout <<"\n What should the array width be? ";
    cin >> array_width_ten;
    cout <<"\n What should the array height be? ";
    cin >> array_height_ten;
    cout <<"\n What should the 4th dimesntion be? ";
    cin >> array_fourth_dimension_ten;
    cout <<"\n What should the 5th dimesntion be? ";
    cin >> array_fifth_dimension_ten;
    cout <<"\n What should the 6th dimesntion be? ";
    cin >> array_sixth_dimension;
    cout <<"\n What should the 7th dimesntion be? ";
    cin >> array_seventh_dimension;
    cout <<"\n What should the 8th dimesntion be? ";
    cin >> array_eighth_dimension;
    cout <<"\n What should the 9th dimesntion be? ";
    cin >> array_nineth_dimension;
    cout <<"\n What should the 10th dimesntion be? ";
    cin >> array_tenth_dimension;


    long long int ********** Ten_D_array = new long long int*********[array_length_ten];

    for (int a = 0; a < array_length_ten; a++){
        Ten_D_array[a] = new long long int********[array_width_ten];
            for (int b = 0; b < array_width_ten; b++){
                Ten_D_array[a][b] = new long long int*******[array_height_ten];
                    for (int c = 0; c < array_height_ten; c++){
                        *(*(*(Ten_D_array+a)+b)+c) = new long long int******[array_fourth_dimension_ten];
                            for (int d = 0; d < array_fourth_dimension_ten; d++){
                                *(*(*(*(Ten_D_array+a)+b)+c)+d) = new long long int*****[array_fifth_dimension_ten];
                                    for (int e = 0; e < array_fifth_dimension_ten; e++){
                                        Ten_D_array[a][b][c][d][e] = new long long int****[array_sixth_dimension];
                                            for (int f = 0; f < array_sixth_dimension; f++){
                                                Ten_D_array[a][b][c][d][e][f] = new long long int***[array_seventh_dimension];
                                                    for (int g = 0; g < array_seventh_dimension; g++){
                                                        Ten_D_array[a][b][c][d][e][f][g] = new long long int**[array_eighth_dimension];
                                                            for (int h = 0; h < array_eighth_dimension; h++){
                                                                *(*(*(*(*(*(*(*(Ten_D_array+a)+b)+c)+d)+e)+f)+g)+h) = new long long int*[array_nineth_dimension];
                                                                    for (int i = 0; i < array_nineth_dimension; i++){
                                                                        Ten_D_array[a][b][c][d][e][f][g][h][i] = new long long int[array_tenth_dimension];
                                                                    }
                                                            }
                                                    }
                                            }
                                    }
                            }
                    }
            }
    }

    for (int a = 0; a < array_length_ten; a++){
        for (int b = 0; b < array_width_ten; b++){
            for (int c = 0; c < array_height_ten; c++){
                for (int d = 0; d < array_fourth_dimension_ten; d++){
                    for (int e = 0; e < array_fifth_dimension_ten; e++){
                        for (int f = 0; f < array_sixth_dimension; f++){
                            for (int g = 0; g < array_seventh_dimension; g++){
                                for (int h = 0; h < array_eighth_dimension; h++){
                                    for (int i = 0; i < array_nineth_dimension; i++){
                                        for (int j = 0; j < array_tenth_dimension; j++){
                                            *(*(*(*(*(*(*(*(*(*(Ten_D_array+a)+b)+c)+d)+e)+f)+g)+h)+i)+j) = incrementor_ten;
                                            incrementor_ten++;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout <<"\n\n The Size of the 10D array is: "<<sizeof(Ten_D_array)<<"\n\n";

    print_array_10D(Ten_D_array, array_length_ten, array_width_ten, array_height_ten, array_fourth_dimension_ten, array_fifth_dimension_ten, array_sixth_dimension, array_seventh_dimension, array_eighth_dimension, array_nineth_dimension, array_tenth_dimension);                                   

    delete[] Ten_D_array;

}