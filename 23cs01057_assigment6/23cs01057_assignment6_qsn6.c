#include <stdio.h>

// noc = number of cities

void avg(int noc, int a[noc][7]){
    for (int city = 0; city < noc; city++){
        int sum = 0;
        for (int i = 0; i < 7; i++){
            sum += a[city][i];
        }
        printf("The average temperature of city%d: %.2f\n", city+1, ((float)sum / 7));
    }
}

int main(){
    int noc;
    printf("Enter the number of cities: ");
    scanf("%d", &noc);

    int a[noc][7];
    for (int i = 0; i < noc; i++){
        printf("Enter the temperatures of city%d: ", i + 1);
        for (int j = 0; j < 7; j++){
            scanf("%d", &a[i][j]);
        }
    }
    avg(noc, a);

}