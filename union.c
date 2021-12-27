#include <stdio.h>

int main(){
    int A[10], B[10], C[20], a, b, i, j, k=0;
    printf("\nEnter the no. of elements in set A: ");
    scanf("%d", &a);
    printf("Enter the elements of set A: ");
    for(i = 0; i < a; i++) scanf("%d", &A[i]);
    printf("Enter the no. of elements in set B: ");
    scanf("%d", &b);
    printf("Enter the elements of set B: ");
    for(i = 0; i < b; i++) scanf("%d", &B[i]);
    for(i = 0; i < a; i++){
        for(j = 0; j < k; j++){
            if(C[j] == A[i]) break;
        }
        if(j == k){
            C[k] = A[i];
            k++;
        }
    }
    for(i = 0; i < b; i++){
        for(j = 0; j < k; j++){
            if(A[j] == B[i]) break;
        }
        if(j == k){
            C[k] = B[i];
            k++;
        }
    }
    printf("\nUnion of set A and set B:\n{");
    for(i = 0; i < k; i++) printf(" %d,", C[i]);
    printf("\b }\n");
    return 0;
}