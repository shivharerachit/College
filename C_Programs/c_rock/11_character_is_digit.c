#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if (ch=='0' || ch=='1' || ch=='2' || ch=='3' || ch=='4'|| ch=='5' || ch=='6' || ch=='7' || ch=='8' || ch=='9'){
        printf("Character is a digit.");
        
    }
    else{
        printf("Character is not a digit.");
    }
    return 0;
}