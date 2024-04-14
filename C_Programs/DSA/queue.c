#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

    //global variable

struct node * putdata(int n){
    int value,i;
    struct node *new1, *p;
    struct node *head;
    for(i=0;i<n;i++){
        printf("Enter the value:");
        scanf("%d",&value);
        new1=(struct node *)malloc(sizeof(struct node));
        new1->data=value;
        new1->next=NULL;   
        if(i==0){
            head=new1;
        }
        else{
            p->next=new1;
        }
        p=new1;
    }
    return head;
}

void getdata(int n,struct node *head){
    int ans,i=0;
    struct node *new1;//,*p;
    new1=head;
    while(i!=n){
        ans=new1->data;
        printf("The value is %d.\n",ans);
        new1=new1->next;
//        p=new1;
        i++;
    }
}

int main(){
    int n,key,var=0;
    struct node *head;
    gift:
    printf("Enter the key:");
    scanf("%d",&key);
    switch(key){
    	case 1:
			printf("Enter the number of terms:");
	    	scanf("%d",&n);
	    	head=putdata(n);
	    	break;
    	case 2:
    		getdata(n,head);
			break;
		case 3:
			var=1;		
    		
	}
	if (var==0){
		goto gift;
	}
	else{
		printf("Exit");
	}
    return 0;
}