#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start;

void display(struct node *temp)
{

    if (temp != NULL)
    {
        printf("Linklist is : ");
        while (temp != NULL)
        {
            printf("%d-> ", temp->data);
            temp = temp->next;
        }
    }
    else
    {
        printf("List is empty");
    }
}

void create(struct node *temp)
{

    struct node *start;
    start = (struct node *)malloc(sizeof(struct node));
    struct node *newNode_2;
    newNode_2 = (struct node *)malloc(sizeof(struct node));
    struct node *newNode_3;
    newNode_3 = (struct node *)malloc(sizeof(struct node));
    struct node *newNode_4;
    newNode_4 = (struct node *)malloc(sizeof(struct node));
    start->next = newNode_2;
    newNode_2->next = newNode_3;
    newNode_3->next = newNode_4;
    newNode_4->next = NULL;

    temp = (struct node *)malloc(sizeof(struct node));
    temp = start;

    while (temp != NULL)
    {
        printf("Enter data in Node:  ");
        scanf("%d", &temp->data);
        temp = temp->next;
    }
    // parat temp = head karun takaych karan ki ata ouput karayach ahe

    display(start);
}

void delate(struct node *temp)
{
    create(start);
    struct node *p;
    int pos;
    printf(" \n Enter Position You can delate Node : ");
    scanf("%d", &pos);
    int nodeIdx = -1;
    temp = start;
    if (pos == 1)
    {
        start = start->next;
        free(temp);
        printf("\n Node Delated ");
    }
    display(start);
}

int main()
{

    int item;
    start = NULL;
    while (1)
    {
        int op;
        printf(" \n 1.Create()  ");
        printf(" \n 2.Display() ");
        printf(" \n 3.Delate() \n");
        printf(" \n Which Opertion You can Do : ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
        {
            create(start);
            break;
        }
        case 2:
        {
            // insert();
            break;
        }
        case 3:
        {
            delate(start);
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