#include <stdio.h>
#include <math.h>

void printPowerSet(int S[], int size){
    int powerset_size = pow(2, size);
    int i, j;
    printf("{");
    for(i=0; i<powerset_size; i++){
        printf(" {");
        for(j=0; j<size; j++){
            if(i & (1<<j))
            printf("%d, ", S[j]);
        }
        printf("\b\b},");
    }
    printf("\b}\n");
}

int main(){
    int S[10], n, i;
    printf("\nEnter the no. of elements in set: ");
    scanf("%d", &n);
    printf("Enter the elements of set: ");
    for(i = 0; i < n; i++) scanf("%d", &S[i]);
    printf("\nPower Set of set:\n{");
    printPowerSet(S, n);
    printf("\b\n");
    return 0;
}