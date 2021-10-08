#include<stdio.h>
int main(){
    int a,b,A[10],B[10],i,j,flag=0;
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
    printf("Intersection of set A and set B:\n{");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            if(A[i]==B[j]) printf(" %d,",A[i]);
        }
    }
    printf("\b }");
    return 0;
}
