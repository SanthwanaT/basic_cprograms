#include <stdio.h>
int main(){
    int i,n;
    printf("Enter a number upto which you want to print the value of natural number: ");
    scanf ("%d", &n);
    for (i = 1; i <=n; i++){
        printf("%d\n", i);
    }
}