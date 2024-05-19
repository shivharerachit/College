#include<stdio.h>
#include <stdbool.h>
#include <math.h>
bool isArmstrong(int n){
    int digit=0, sum=0, temp=n;
    int rem, mul, i;
    while(n>0){
        n=n/10;
        digit++;}
    n=temp;
    while(n>0){
        int rem=n%10;
        int mul=1;
        for(int i=0;i<digit;i++) 
            mul*=rem;
        sum=sum+mul;
        n=n/10;}
    if(sum==temp) 
        return true;
    else    
        return false;}
int main(){
    int number;
    printf("Enter number: ");
    scanf("%d",&number);
    if(isArmstrong(number)) 
        printf("%d is an Armstrong number.\n", number);
    else printf("%d is not an Armstrong number.\n", number);
    return 0;
}