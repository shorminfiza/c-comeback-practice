// 1. Print numbers 1 to 10
// 2. Take a number input and check if it's even or odd
// 3. Print sum of elements in an array of 5 integers

#include<stdio.h>

int main(){

    printf("1. Print numbers from 1 to 10\n");
    for(int i=1;i<11;i++){
    printf("%d ",i);
    }
    printf("\n");
    
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%2 != 0){
    printf("ODD\n");
    }
    else{ 
    printf("EVEN\n");
    }
    
     

    int i,ar[5];
    int sum=0;
    printf("Enter 5 numbers:");
    for(i=0;i<5;i++){
    scanf("%d",&ar[i]);
    sum=sum+ar[i];
    }
    printf("Sum= %d",sum);

    return 0;

}