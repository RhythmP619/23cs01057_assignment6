#include <stdio.h>

int prime(int n){
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int upper, lower;
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);
    for (int i = lower; i <= upper; i++){
        if (prime(i)){
            printf("%d ", i);
        }
    }
    printf("\n");

}