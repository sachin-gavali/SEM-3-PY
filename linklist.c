#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start;

void display(){
    struct node *temp;
    

}

void create()
{
    struct node *newNode_1;
    newNode_1 = (struct node *)malloc(sizeof(struct node));
    struct node *newNode_2;
    newNode_2 = (struct node *)malloc(sizeof(struct node));
    struct node *newNode_3;
    newNode_3 = (struct node *)malloc(sizeof(struct node));
    struct node *newNode_4;
    newNode_4 = (struct node *)malloc(sizeof(struct node));
    newNode_1->next = newNode_2;
    newNode_2->next = newNode_3;
    newNode_3->next = newNode_4;
    newNode_4->next = NULL;

    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp = newNode_1;

    while (temp != NULL)
    {
        printf("Enter data in Node:  ");
        scanf("%d", &temp->data);
        temp = temp->next;
    }
    // parat temp = head karun takaych karan ki ata ouput karayach ahe 
     temp = newNode_1;
    printf(" Your Linklist is : ");
    while (temp != NULL)
    {
        printf("%d-> ", temp->data);
        temp = temp->next;
    }
}

int main()
{

    int item;
    start = NULL;
    while (1)
    {
        int op;
        printf(" \n Which Opertion You can Do : ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
        {
            create();
            break;
        }
        case 2:
        {
            // insert();
            break;
        }
        case 3:
        {
            // delete();
            break;
        }
        case 4:
        {
            // display();
            break;
        }
        default:
        {
            printf("Choose Opartion  form 1 to 4 ");
        }
        }
    }
    return 0;
}