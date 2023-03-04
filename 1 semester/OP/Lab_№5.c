#include <stdio.h>

int main(){
    int arr[7];
    for (int i = 1; i < 8; i++ ) {
        arr[i - 1] = i * 10;
        printf("%d ", arr[i - 1]);
    }
    int A[2][2] = {1, 2, 3 ,1};
    int B[2][2] = {1, 1, 0, 2};
    int AB[2][2] = {(A[0][0] * B[0][0]) + (A[0][1] * B[1][0]), (A[0][0] * B[0][1]) + (A[0][1] * B[1][1]),(A[1][0] * B[0][0]) + (A[1][1] * B[1][0]), (A[1][0] * B[0][1]) + (A[1][1] * B[1][1])};
    printf("\n");
    for (int i = 0; i < 2; i ++){
        printf("%d ", AB[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 2; i ++){
        printf("%d ", AB[i][0]);
    }
    return 0;
}
