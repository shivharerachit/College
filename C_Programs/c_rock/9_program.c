#include<stdio.h>
void main()
{
    int a,b,d,f,h;
    char *c,*e,*g,*i,*j;
    printf("Enter a four digit number:");
    scanf("%d",&a);
   
    b=a/1000;
    switch(b)
    {
        case 0:
        break;
        case 1:c="One";
        break;
        case 2:c="Two";
        break;
        case 3:c="Three";
        break;
        case 4:c="Four";
        break;
        case 5:c="Five";
        break;
        case 6:c="Six";
        break;
        case 7:c="Seven";
        break;
        case 8:c="Eight";
        break;
        case 9:c="Nine";
        break;
    }
   
    d=(a-b*1000)/100;
    switch(d)
    {
        case 0:
        break;
        case 1:e="One";
        break;
        case 2:e="Two";
        break;
        case 3:e="Three";
        break;
        case 4:e="Four";
        break;
        case 5:e="Five";
        break;
        case 6:e="Six";
        break;
        case 7:e="Seven";
        break;
        case 8:e="Eight";
        break;
        case 9:e="Nine";
        break;
    }
    
    f=(a-b*1000-d*100)/10;
    h=a%10;
    switch(f)
    {
        case 0:
        break;
        case 1:
        
        if((f*10)+h==11)
        g="Eleven";
        
        else if((f*10)+h==12)
        g="Twelve";
        
        else if((f*10)+h==13)
        g="Thirteen";
        
        else if((f*10)+h==14)
        g="Fourteen";
        
        else if((f*10)+h==15)
        g="Fifteen";
        
        else if((f*10)+h==16)
        g="Sixteen";
        
        else if((f*10)+h==12)
        g="Seventeen";
        
        else if((f*10)+h==12)
        g="Eighteen";
        
        else if((f*10)+h==12)
        g="Ninteen";
        
        i="";
        goto end;
        break;
        case 2:g="Twenty";
        break;
        case 3:g="Thirty";
        break;
        case 4:g="Fourty";
        break;
        case 5:g="Fifty";
        break;
        case 6:g="Sixty";
        break;
        case 7:g="Seventy";
        break;
        case 8:g="Eighty";
        break;
        case 9:g="Ninety";
        break;
    }
    
    switch(h)
    {
        case 0:
        break;
        case 1:i="One";
        break;
        case 2:i="Two";
        break;
        case 3:i="Three";
        break;
        case 4:i="Four";
        break;
        case 5:i="Five";
        break;
        case 6:i="Six";
        break;
        case 7:i="Seven";
        break;
        case 8:i="Eight";
        break;
        case 9:i="Nine";
        break;
    }
    end:
    printf("%s Thousand %s Hundred %s %s",c,e,g,i);
}