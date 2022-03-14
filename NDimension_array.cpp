#include <iostream>
#include <new>
#include <array>
#include <string>

using namespace std;

void print_array_2D(int **array,int array_row, int array_column){
    cout <<"\n";
    for (int h = 0; h < array_row; h++){
        for (int j = 0; j < array_column; j++){
            cout << *(*(array+h)+j)<< " ";
        }
        cout <<"\n";
    }
}
void print_array_3D(int ***array,int array_length, int array_width, int array_height){
    cout <<"\n";
    for (int h = 0; h < array_length; h++){
        for (int j = 0; j < array_width; j++){
            for (int k = 0; k < array_height; k++){
                cout << *(*(*(array+h)+j)+k)<< " ";
            }
            cout <<"\n";
        }
        cout <<"\n\n";
    }
    cout <<"\n";
}
void print_array_4D(int ****array,int array_length, int array_width, int array_height, int fourth_dimention){
    cout <<"\n";
    for (int h = 0; h < array_length; h++){
        for (int j = 0; j < array_width; j++){
            for (int k = 0; k < array_height; k++){
                for (int p = 0; p < fourth_dimention; p++){
                    cout << *(*(*(*(array+h)+j)+k)+p)<< " ";
                }
                cout <<"\n";
            }
            cout <<"\n\n";
        }
        cout <<"\n\n\n";
    }
    cout <<"\n";
}
void print_array_5D(int *****array,int array_length, int array_width, int array_height, int fourth_dimention,int fifth_dimention){
    cout <<"\n";
    for (int h = 0; h < array_length; h++){
        for (int j = 0; j < array_width; j++){
            for (int k = 0; k < array_height; k++){
                for (int p = 0; p < fourth_dimention; p++){
                    for (int w = 0; w < fifth_dimention; w++){
                        cout << *(*(*(*(*(array+h)+j)+k)+p)+w)<< " ";
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
    // double array_stack[1000000] = {0};
    // cout <<"\n The size of the stack is: "<<((sizeof(array_stack))*0.000001)<<" MBs\n";
    // double* array_heap = new double[1000000000];
    // for (int k = 0; k < 1000000000; k++){
    //     array_heap[k] = 1;
    // }
    // cout <<"\n The size of the heap is: "<<((sizeof(array_heap)))<<" GBs\n\n";



    int array_row = 0;
    int array_column = 0;
    int incrementor = 10;

    cout <<"\n\n 2 Dimension array ";
    cout <<"\n What should the array rows be? ";
    cin >> array_row;
    cout <<"\n What should the array columns be? ";
    cin >> array_column;

    int ** Two_D_array = new int*[array_row];

    for (int k = 0; k < array_row; k++){
        Two_D_array[k] = new int[array_column];
    }
    for (int h = 0; h < array_row; h++){
        for (int j = 0; j < array_column; j++){
            Two_D_array[h][j] = incrementor;
            incrementor++;
        }
    }
    print_array_2D(Two_D_array,array_row,array_column);
    cout <<"\n";

    delete[] Two_D_array;


    int array_length = 0;
    int array_width = 0;
    int array_height = 0;
    int incrementor_second = 10;

    cout <<"\n\n 3 Dimension array ";
    cout <<"\n What should the array length be? ";
    cin >> array_length;
    cout <<"\n What should the array width be? ";
    cin >> array_width;
    cout <<"\n What should the array height be? ";
    cin >> array_height;

    int *** Three_D_array = new int**[array_length];

    for (int k = 0; k < array_length; k++){
        Three_D_array[k] = new int*[array_width];
            for (int u = 0; u < array_width; u++){
                Three_D_array[k][u] = new int[array_height];
            }
        }
    for (int h = 0; h < array_length; h++){
        for (int j = 0; j < array_width; j++){
            for (int g = 0; g < array_height; g++){
                Three_D_array[h][j][g] = incrementor_second;
                incrementor_second++;
            }
        }
    }

    print_array_3D(Three_D_array,array_length,array_width,array_height);

    delete[] Three_D_array;

    int array_length_four = 0;
    int array_width_four = 0;
    int array_height_four = 0;
    int array_fourth_dimension = 0;
    int incrementor_third = 100;

    cout <<"\n\n 4 Dimension array ";
    cout <<"\n What should the array length be? ";
    cin >> array_length_four;
    cout <<"\n What should the array width be? ";
    cin >> array_width_four;
    cout <<"\n What should the array height be? ";
    cin >> array_height_four;
    cout <<"\n What should the fourth dimesntion be? ";
    cin >> array_fourth_dimension;

    int **** Four_D_array = new int***[array_length_four];

    for (int k = 0; k < array_length_four; k++){
        Four_D_array[k] = new int**[array_width_four];
            for (int u = 0; u < array_width_four; u++){
                Four_D_array[k][u] = new int*[array_height_four];
                    for (int v = 0; v < array_height_four; v++){
                        *(*(*(Four_D_array+k)+u)+v) = new int[array_fourth_dimension];
                    }
            }
    }
    for (int h = 0; h < array_length_four; h++){
        for (int j = 0; j < array_width_four; j++){
            for (int g = 0; g < array_height_four; g++){
                for (int v = 0; v < array_fourth_dimension; v++){
                    *(*(*(*(Four_D_array+h)+j)+g)+v) = incrementor_third;
                    incrementor_third++;
                }
            }
        }
    }

    print_array_4D(Four_D_array, array_length_four, array_width_four, array_height_four, array_fourth_dimension);

    delete[] Four_D_array;

    int array_length_five = 0;
    int array_width_five = 0;
    int array_height_five = 0;
    int array_fourth_dimension_five = 0;
    int array_fifth_dimension = 0;
    int incrementor_fourth = 1000;

    cout <<"\n\n\n 5 Dimension array ";
    cout <<"\n What should the array length be? ";
    cin >> array_length_five;
    cout <<"\n What should the array width be? ";
    cin >> array_width_five;
    cout <<"\n What should the array height be? ";
    cin >> array_height_five;
    cout <<"\n What should the fourth dimesntion be? ";
    cin >> array_fourth_dimension_five;
    cout <<"\n What should the fifth dimesntion be? ";
    cin >> array_fifth_dimension;

    int ***** Five_D_array = new int****[array_length_five];

    for (int k = 0; k < array_length_five; k++){
        Five_D_array[k] = new int***[array_width_five];
            for (int u = 0; u < array_width_five; u++){
                Five_D_array[k][u] = new int**[array_height_five];
                    for (int v = 0; v < array_height_five; v++){
                        *(*(*(Five_D_array+k)+u)+v) = new int*[array_fourth_dimension_five];
                            for (int z = 0; z < array_fourth_dimension_five; z++){
                                *(*(*(*(Five_D_array+k)+u)+v)+z) = new int[array_fifth_dimension];
                            }
                    }
            }
    }
    for (int h = 0; h < array_length_five; h++){
        for (int j = 0; j < array_width_five; j++){
            for (int g = 0; g < array_height_five; g++){
                for (int v = 0; v < array_fourth_dimension_five; v++){
                    for (int z = 0; z < array_fifth_dimension; z++){
                        *(*(*(*(*(Five_D_array+h)+j)+g)+v)+z) = incrementor_fourth;
                        incrementor_fourth++;
                    }
                }
            }
        }
    }

    print_array_5D(Five_D_array, array_length_five, array_width_five, array_height_five, array_fourth_dimension_five, array_fifth_dimension);

    delete[] Five_D_array;


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

    long long int incrementor_ten = 0;

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







    // for (int h = 0; h < array_row; h++){
    //     for (int j = 0; j < array_column; j++){
    //         cout << Two_D_array[h][j]<< " ";
    //     }
    //     cout <<"\n";
    // }







    // string user_reply;
    // cout <<"\n Do you want to try 3D array?\n";
    // getline(cin,user_reply);
    // cout <<"\n Your response was:  "<<user_reply<<" \n\n";
    // if (user_reply == "yes "){
    //     cout <<"\n OKAY \n\n";
    // }
}