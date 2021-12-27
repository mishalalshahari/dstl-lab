#include <stdio.h>

int main(){
    int A[10], B[10], C[10], D[10], SymDiff[10], a, b, l, i, j, k=0, m=0, n=0;
    printf("\nEnter the no. of elements in set A: ");
    scanf("%d", &a);
    printf("Enter the elements of set A: ");
    for(i = 0; i < a; i++) scanf("%d", &A[i]);
    printf("Enter the no. of elements in set B: ");
    scanf("%d", &b);
    printf("Enter the elements of set B: ");
    for(i = 0; i < b; i++) scanf("%d", &B[i]);
    // for A-B
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            if(B[j]==A[i]) break;
        }
        if(j==b){
            for(l=0;l<k;l++){
                if(C[l]==A[i]) break;
            }
            if(l==k){
                C[k]=A[i];
                k++;
            }
        }
    }
    // for B-A
    for( i=0;i<b;i++){
        for(j=0;j<a;j++){
            if(B[i]==A[j]) break;
        }
        if(j==a){
            for(l=0;l<m;l++){
                if(D[l]==B[i]) break;
            }
            if(l==m){
                D[m]=B[i];
                m++;
            }
        }
    }
    //for symmetric Difference
    for(i=0;i<k;i++){
        SymDiff[n]=C[i];
        n++;
    }
    for(i=0;i<m;i++){
        SymDiff[n]=D[i];
        n++;
    }
    printf("\nSymmetric Difference of set A and set B:\n{");
    for(i=0;i<k;i++) printf(" %d,",SymDiff[i]);
    printf("\b }\n");
    return 0;
}