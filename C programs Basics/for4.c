// print natural numbers from n to 1 in reverse order 

#include <stdio.h>
int main (){
    int i, n;
    printf("Enter the number from which you want to print the number in the reverse order : ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--){
        printf("%d", i);
    }
    return 0;
}