#include <stdio.h>

void check(int a[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
    }

    float avg = sum / n;
    for (int i = 0; i < n; i++){
        if (a[i] > avg){
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    check(a, n);    
}