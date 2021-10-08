#include<stdio.h>
int main(){
    int a,b,A[10],B[10],i,j,c=0;
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
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            if(A[i]==B[j]) c++;
        }
    }
    if(c==b) printf("B is the subset of A.");
    else printf("B is the not the subset of A.");
    return 0;
}
