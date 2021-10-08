#include<stdio.h>
int main(){
    int a,b,A[10],B[10],i,j;
    printf("Enter the no. of elements in set A: ");
    scanf("%d",&a);
    printf("Enter the no. of elements in set B: ");
    scanf("%d",&b);
    printf("Enter the elements of set A: ");
    for(i=0;i<a;i++){
        scanf("%d",&A[i]);
    }
    printf("Enter the elements of set B: ");
    for(i=0;i<b;i++){
        scanf("%d",&B[i]);
    }
    printf("Casterian product of A and B:\n");
    printf("{");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            if(j==b-1) printf(" (%d,%d)",A[i],B[j]);
            else printf(" (%d,%d),",A[i],B[j]);
        }
    }
    printf(" }");
    return 0;
}
