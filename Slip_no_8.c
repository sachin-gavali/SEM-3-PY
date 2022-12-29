#include <stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;
}*start;

void create(){
    struct node *temp , *q;
    temp = (struct node*)malloc(sizeof(struct node));
    printf(" Enter data : ");
    scanf("%d",&temp->data);
     temp->next = NULL;
     if(start == NULL){
        start = temp;
     }
     else{
        q = start;
        while(q->next != NULL){
            q = q->next ;

        }
        q->next = temp;
     }
    
}


void display(){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp = start;
    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
   
}
int main()
{
    int ch;
    start = NULL;
    while (1)
    {
        printf("\n1.Create\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;
       
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }
}