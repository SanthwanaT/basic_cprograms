







/* 
 */



// odd numbers from 1 - 100

/* #include <stdio.h>
int main(){
    int i ;
    for (i = 1; i<=100; i++){
        if (i%2!=0){
            printf("%d\n", i );
        }
    }
} */







/// sum upto n terms 

/* #include <stdio.h>
int main(){
    int i, n;
    double sum;
    scanf("%d", &n);
    for (i = 1; i<= n; i++){
        sum = (n/2)*(2+(n-1));
    }
    printf("%f", sum );
    
} */



// sum of even numbers upto n terms 

/* #include <stdio.h>
int main(){
    int i, n;
    float sum;
    printf("Enter n : ");
    scanf("%d", &n);
    for ( i = 2; i<=n; i+2){
        if (i%2==0){
            sum = (n/2)*((2*i)+((n-1)*2));
        }
        
    }
    printf("%f", sum);
}
 */


// multiplication table of any number 

/* #include <stdio.h>
int main(){
    int any_num , i, n, x ;
    printf("Enter the number whose multiplication table has to be printed : ");
    scanf("%d", &any_num);
    printf("Enter upto which nummber you want to print : ");
    scanf("%d", &n);
    for (i = 1; i<=n; i++){
        x = any_num*i;
        printf("%d\n", x);
    }
    
}
 */




