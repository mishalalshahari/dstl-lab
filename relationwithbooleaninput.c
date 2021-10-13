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
            if(arr[i][j]!=0) flag++;
        }
    }
    if(flag>0){
        printf("\nThe Relation, R= { ");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(arr[i][j]!=0) printf("(%d,%d), ",i,j);
            }
        }
        printf("\b\b }");
    }
    else if(flag==0)printf("\nNo relation!");
}
