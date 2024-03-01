#include <stdio.h>

int main(){
    int n1, n2;
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);

    int a1[n1];
    printf("Enter the elements of first array: ");
    for (int i = 0; i < n1; i++){
        scanf("%d", &a1[i]);
    }

    
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);

    int a2[n2];
    printf("Enter the elements of second array: ");
    for (int i = 0; i < n2; i++){
        scanf("%d", &a2[i]);
    }
    
    for (int i2 = 0; i2 < n2; i2++){
        int flag = 0;
        for (int i1 = 0; i1 < n1; i1++){
            if (a2[i2] == a1[i1]){
                flag = 1;
                break;
            }
        }
        if (!flag){
                printf("The second array is not a subset of first array\n");
                return 0;
        }
    }
    printf("The second array is a subset of first array\n");
}