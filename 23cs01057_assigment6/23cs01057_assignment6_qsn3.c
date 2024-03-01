#include <stdio.h>

void rev(int a[], int start, int end){
    if (start == end){
        return;
    }
    int temp;
    temp = a[start];
    a[start] = a[end];
    a[end] = temp;
    rev(a, start + 1, end - 1);
}

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    rev(a, 0, n - 1);
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}