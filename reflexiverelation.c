#include<stdio.h>
int main(){
    int arr[3][3],i,j,flag=0;
    printf("Enter the relation in 0 or 1 format in 3x3 matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr[i][j]!=0 && i==j) flag++;
        }
    }
    if(flag>0){
        printf("\nYes,it is a reflex relation.");
        printf("\nThe Reflexive relation, R= { ");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(arr[i][j]!=0 && i==j) printf("(%d,%d), ",i,j);
            }
        }
        printf("\b\b }\n");
    }
    else if(flag==0)printf("\nNo, it is not a reflexive relation!\n");
}
