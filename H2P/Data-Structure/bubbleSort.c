//
//  bubbleSort.c
//  
//
//  Created by H2P on 2018/8/12.
//

#include <stdio.h>

int bubbleSort(int* array, int lenOfArray);

int bubbleSort(int* array, int lenOfArray){
    int hasExchanged = 1;
    for( int i = 0 ; i < lenOfArray - 1 && hasExchanged == 1 ; i++ ){
        hasExchanged = 0;
        for( int j = 0 ; j < lenOfArray - 1 - i ; j++ ){
            if( *( array + j) > *( array + j + 1 ) ){
                int temp = *( array + j );
                *( array + j ) = *( array + j + 1 );
                *( array + j + 1 ) = temp;
                hasExchanged = 1;
            }
        }
    }
    return 0;
}

int main(){
    int myArray[10] = {3, 1, 7, 2, 10, 25, 4, 8, 6, 17};
    bubbleSort( myArray, 10 );
    for( int i = 0 ; i < 10 ; i++ ){
        printf("%d  ", *( myArray + i ));
    }
    printf("\n");
}
