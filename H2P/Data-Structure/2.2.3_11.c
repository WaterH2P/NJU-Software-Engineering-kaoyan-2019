#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define LENOFA 5
#define LENOFB 7
#define WRONG -9999

#define MAX_LEN 100000

/*
 * 一个长度为 L(L>=1) 的升序列 S，处在第 ceil(L/2.0) 个位置的数称为 S 的中位数。
 * 例如，若序列 S1 = (11, 13, 15, 17, 19)，则 S1 的中位数是 15。
 * 两个序列的中位数是含他们所有元素的升序列序列的中位数。
 * 例如，若 S2 = (2, 4, 6, 8, 20)，则 S1 和 S2 的中位数是 11。
 * 现在有两个等长升序序列 A 和 B，试设计一个在时间和空间两方面都尽可能搞笑的算法，找出两个序列的中位数。
 */

// 未考虑题目中的 等长
int findMedianFromTwoOrderlyArrays_N( int* arrayA, int lenOfA, int* arrayB, int lenOfB );
int findMedianFromTwoOrderlyArrays_logN( int* arrayA, int lenOfA, int* arrayB, int lenOfB );
int M_Search(int A[], int B[], int n);

// 时间复杂度 O(n)
// 空间复杂度 O(1)
// 遍历两个序列，用变量 median 存储中位数的数值并返回。
int findMedianFromTwoOrderlyArrays_N( int* arrayA, int lenOfA, int* arrayB, int lenOfB ){
    clock_t clock_start = clock();
    
    if( lenOfA <=0 && lenOfB <=0 ){
        return WRONG;
    }
    if( lenOfA <= 0 ){
        return *( arrayB + (int)ceil(lenOfB / 2.0) - 1 );
    }
    if( lenOfB <=0 ){
        return *( arrayA + (int)ceil(lenOfA / 2.0) - 1 );
    }
    if( lenOfA == 1 && lenOfB == 1 ){
        return *arrayA < *arrayB ? *arrayA : *arrayB;
    }
    
    int median = WRONG;
    int indexOfMedian = ceil( ( lenOfA + lenOfB ) / 2.0 ) - 1;
    
    int iA = 0;
    int iB = 0;
    while( iA < lenOfA && iB < lenOfB && iA + iB < indexOfMedian ){
        if( *( arrayA + iA ) <= *( arrayB + iB ) ){
            median = *( arrayB + iB );
            iA++;
        }
        else {
            median = *( arrayA + iA );
            iB++;
        }
    }
    
    while ( iA < lenOfA && iA + iB < indexOfMedian ) {
        median = *( arrayA + iA );
        iA++;
    }
    while ( iB < lenOfB && iA + iB < indexOfMedian ) {
        median = *( arrayB + iB );
        iB++;
    }
    
    clock_t clock_end = clock();
    printf( "clock : %lu -> %lu : %lu\n", clock_start, clock_end, ( clock_end - clock_start ) );
    
    return median;
}

// 时间复杂度 O(logN)
// 空间复杂度 O(1)
// 设 indexOfA 和 indexOfB，初始值为对应序列的中位数下标。
// 比较该位置的两个及其前后共 6 个数值（若在某个序列开头或结尾，另讨论）。
// 若比较得出中位数在此 6 个数值内，则找出并返回。
// 若中位数不在此 6 个数值内，则利用二分法的思想改变 indexOfA 和 indexOfB 的数值。
// 注：indexOfA + indexOfB = 两个序列所有元素的升序列序列的中位数的下标（特别考虑两个序列数值个数均为奇数时）。
int findMedianFromTwoOrderlyArrays_logN( int* arrayA, int lenOfA, int* arrayB, int lenOfB ){
    clock_t clock_start = clock();
    
    if( lenOfA <=0 && lenOfB <=0 ){
        return WRONG;
    }
    if( lenOfA <= 0 ){
        return *( arrayB + (int)ceil( lenOfB / 2.0 ) - 1 );
    }
    if( lenOfB <=0 ){
        return *( arrayA + (int)ceil( lenOfA / 2.0 ) - 1 );
    }
    if( lenOfA == 1 && lenOfB == 1 ){
        return *arrayA < *arrayB ? *arrayA : *arrayB;
    }
    
    int median = WRONG;
    
    int twoOddLen = ( lenOfA % 2 == 1 ) && ( lenOfB % 2 == 1 ) ? 1 : 0;
    
    // S : shorter ; L : longer
    // 这里主要根据长度较短的序列进行 index 的改变，以确保长度较长的序列其 index 不会超出合法范围。
    int* arrayS  = lenOfA >= lenOfB ? arrayB : arrayA;
    int lenOfS   = lenOfA >= lenOfB ? lenOfB : lenOfA;
    int indexOfS = ceil( lenOfS / 2.0 ) - 1;
    int* arrayL  = lenOfA >= lenOfB ? arrayA : arrayB;
    int lenOfL   = lenOfA >= lenOfB ? lenOfA : lenOfB;
    int indexOfL = ceil( lenOfL / 2.0 ) - 1;
    
    while(1){
        int moveDistance = lenOfS;
        
        if( indexOfS == 0 && indexOfL == 0 ){
            if( *( arrayS + indexOfS ) >= *( arrayL + indexOfL ) ){
                if( *( arrayS + indexOfS ) <= *( arrayL + indexOfL + 1 ) ){
                    median = *( arrayS + indexOfS );
                    break;
                }
                else {
                    median = *( arrayL + indexOfL + 1 );
                    break;
                }
            }
        }
        else if( indexOfS == 0 ){
            if( *( arrayS + indexOfS ) <= *( arrayL + indexOfL ) ){
                if( *( arrayS + indexOfS ) >= *( arrayL + indexOfL - 1 ) ){
                    median = !twoOddLen ? *( arrayL + indexOfL ) : *( arrayS + indexOfS );
                    break;
                }
                else {
                    if( indexOfS == lenOfS - 1 ){
                        median = !twoOddLen ? *( arrayL + indexOfL ) : *( arrayL + indexOfL - 1 );
                        break;
                    }
                    else if( *( arrayS + indexOfS + 1 ) >= *( arrayL + indexOfL ) ){
                        median = !twoOddLen ? *( arrayL + indexOfL ) : *( arrayS + indexOfS );
                        break;
                    }
                    else {
                        moveDistance = ceil( moveDistance / 2.0 );
                        indexOfS += moveDistance;
                        indexOfL -= moveDistance;
                    }
                }
            }
            else {
                median = !twoOddLen ? *( arrayS + indexOfS ) : *( arrayL + indexOfL );
                break;
            }
        }
        else if( indexOfS == lenOfS - 1 ){
            if( *( arrayS + indexOfS ) >= *( arrayL + indexOfL ) ){
                if( *( arrayS + indexOfS ) <= *( arrayL + indexOfL + 1 ) ){
                    median = !twoOddLen ? *( arrayS + indexOfS ) : *( arrayL + indexOfL );
                    break;
                }
                else {
                    if( indexOfS == 0 ){
                        median = !twoOddLen ? *( arrayL + indexOfL + 1 ) : *( arrayL + indexOfL );
                        break;
                    }
                    else if( *( arrayS + indexOfS - 1 ) <= *( arrayL + indexOfL ) ){
                        median = !twoOddLen ? *( arrayL + indexOfL ) : *( arrayS + indexOfS );
                    }
                    else {
                        moveDistance = ceil( moveDistance / 2.0 );
                        indexOfS -= moveDistance;
                        indexOfL += moveDistance;
                    }
                }
            }
            else if( *( arrayS + indexOfS ) <= *( arrayL + indexOfL ) ){
                median = !twoOddLen ? *( arrayL + indexOfL ) : *( arrayS + indexOfS );
                break;
            }
        }
        else if( *( arrayS + indexOfS ) >= *( arrayL + indexOfL ) && *( arrayS + indexOfS ) <= *( arrayL + indexOfL + 1 )  ){
            median = !twoOddLen ? *( arrayS + indexOfS ) : *( arrayL + indexOfL );
            break;
        }
        else if( *( arrayS + indexOfS ) >= *( arrayL + indexOfL ) && *( arrayS + indexOfS - 1 ) <= *( arrayL + indexOfL) ){
            median = !twoOddLen ? *( arrayL + indexOfL + 1 ) : *( arrayL + indexOfL );
            break;
        }
        else if( *( arrayS + indexOfS ) >= *( arrayL + indexOfL ) && *( arrayS + indexOfS ) >= *( arrayL + indexOfL + 1 ) ){
            moveDistance = ceil( moveDistance / 2.0 );
            indexOfS -= moveDistance;
            indexOfL += moveDistance;
        }
        else if( *( arrayS + indexOfS ) <= *( arrayL + indexOfL ) && *( arrayS + indexOfS ) >= *( arrayL + indexOfL - 1 ) ){
            median = !twoOddLen ? *( arrayL + indexOfL ) : *( arrayS + indexOfS );
            break;
        }
        else if( *( arrayS + indexOfS ) <= *( arrayL + indexOfL ) && *( arrayS + indexOfS + 1 ) >= *( arrayL + indexOfL) ){
            median = !twoOddLen ? *( arrayL + indexOfL ) : *( arrayL + indexOfL - 1 );
            break;
        }
        else if( *( arrayS + indexOfS ) <= *( arrayL + indexOfL ) && *( arrayS + indexOfS ) <= *( arrayL + indexOfL - 1 ) ){
            moveDistance = ceil( moveDistance / 2.0 );
            indexOfS += moveDistance;
            indexOfL -= moveDistance;
        }
        else {
            printf( "ERROR\n" );
            break;
        }
    }
    
    clock_t clock_end = clock();
    printf( "clock : %lu -> %lu : %lu\n", clock_start, clock_end, ( clock_end - clock_start ) );
    
    return median;
}

// 书中参考解答（感觉书中注释有错误）
// 分别求两个升序序列 A 和 B 的中位数，设为 a 和 b。
// 1. 若 a=b，则 a 或 b 即所求中位数，算法结束。
// 2. 若 a<b，则舍弃序列 A 中较 小 的一半，同时舍弃序列 B 中较 大 的一半，要求两次舍弃的长度相等。
// 3. 若 a>b，则舍弃序列 A 中较 大 的一半，同时舍弃序列 B 中较 小 的一半，要求两次舍弃的长度相等。
// 4. 在保留的两个升序序列中，重复过程 1/2/3，直到两个序列中均只含一个元素时为止，较小者即为所求的中位数。
int M_Search(int A[], int B[], int n){
    int s1=0, d1=n-1, m1, s2, d2=n-1, m2;
    // 分别表示升序 A 和 B 的首位数，末位数和中位数
    while( s1 != d1 || s2 != d2 ){
        m1 = ( s1 + d1 ) / 2;
        m2 = ( s2 + d2 ) / 2;
        if( A[m1] == B[m2] ){
            return A[m1];                       // 满足条件 1
        }
        if( A[m1] < B[m2] ){                    // 满足条件 2
            if( ( s1 + d1 ) % 2 == 0 ){         // 若元素个数为奇数
                s1 = m1;                        // 舍弃 A 中间点 以前 部分且保留中间点
                d2 = m2;                        // 舍弃 B 中间点 以后 部分且保留中间点
            }
            else {                              // 元素个数为偶数
                s1 = m1 + 1;                    // 舍弃 A 中间点以及中间点 以前 部分
                d2 = m2;                        // 舍弃 B 中间点 以后 部分且保留中间点
            }
        }
        else {                                  // 满足条件 3
            if( ( s2 + d2 ) % 2 == 0 ){         // 若元素个数为奇数
                d1 = m1;                        // 舍弃 A 中间点 以后 部分且保留中间点
                s2 = m2;                        // 舍弃 B 中间点 以前 部分且保留中间点
            }
            else {                              // 元素个数为偶数
                d1 = m1;                        // 舍弃 A 中间点 以后 部分且保留中间点
                s2 = m2 + 1;                    // 舍弃 B 中间点以及中间点 以前 部分
            }
        }
    }
    return A[s1] < B[s2] ? A[s1] : B[s2];
}

int main(){
    int arrayA[LENOFA] = {1, 5, 8, 12, 22};

    int arrayB[LENOFB] = {0, 2, 3, 6, 15, 17, 23};

    int median_N = findMedianFromTwoOrderlyArrays_N( arrayA, LENOFA, arrayB, LENOFB );
    int median_logN = findMedianFromTwoOrderlyArrays_logN( arrayA, LENOFA, arrayB, LENOFB );
    
    printf( "median_N    : %d\n", median_N );
    printf( "median_logN : %d\n", median_logN );
    printf( "\n" );
    
    int* arrayA_1 = (int*)malloc( MAX_LEN * sizeof(int) );
    for( int i = 0 ; i < MAX_LEN ; i++ ){
        *( arrayA_1 + i ) = 1 + 2 * i;
    }
    int* arrayB_1 = (int*)malloc( MAX_LEN * sizeof(int) );
    for( int i = 0 ; i < MAX_LEN ; i++ ){
        *( arrayB_1 + i ) = 0 + 2 * i;
    }

    median_N = findMedianFromTwoOrderlyArrays_N( arrayA_1, MAX_LEN, arrayB_1, MAX_LEN );
    median_logN = findMedianFromTwoOrderlyArrays_logN( arrayA_1, MAX_LEN, arrayB_1, MAX_LEN );

    printf( "median_N    : %d\n", median_N );
    printf( "median_logN : %d\n", median_logN );
    printf( "\n" );

    free(arrayA_1);
    free(arrayB_1);
    
}

// gcc 2.2.3_11.c -o median && ./median


