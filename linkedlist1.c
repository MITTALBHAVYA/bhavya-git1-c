#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//*define struct here ....
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
//*initialize
//*printlist
//*numberofnodes
//*deletefirstelement
//*deletelastelement
//*insertatlast
//*insertatfirst
//*deletefrompos
//*insertatpos
//*here we are going to initialize alist of len length with return node value head
Node *initializelist(int len)
{
    Node *head, *p, *temp;
    int i;
    for (i = 1; i <= len; i++)
    {
        p = (Node *)malloc(sizeof(Node));
        printf("ENTER %d data ", i);
        scanf("%d", &p->data);
        p->next = NULL;
        if (i == 1)
        {
            head = temp = p;
        }
        else
        {
            temp->next = p;
            temp = p;
        }
    }
    return head;
}
//*here we are going to print our list;
void printlist(Node *p)
{
    while (p != NULL)
    {
        printf("%d \n", p->data);
        p = p->next;
    }
}
// here we are going to count number of numberofnodes
void numberofnodes(Node *p)
{
    int i = 0;
    while (p != NULL)
    {
        i++;
        p = p->next;
    }
    printf("NUMBER OF NODES ARE %d\n", i);
}
// here we are going to delete last element
void deletelastelement(Node *p)
{
    int i = 0;
    printf("DELETING LAST NODE INITIATED\n");
    while (p->next->next != NULL)
    {
        p = p->next;
        i++;
    }
    p->next = NULL;
}
// here we are going to delete first element
void deletefirstelement(Node **head)
{
    printf("DELETING FIRST ELEMENT INITIATED\n");
    Node *temp;
    if (head == NULL || *head == NULL)
    {
        printf("LIST IS ALREADY EMPTY");
    }
    else
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}
// here we are going to enter data in last element
void insertatlast(Node *head, int newdata)
{
    Node *p = head;
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = newdata;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = newNode;
    newNode->next = NULL;
}
// here we are going to enter data in first element
void insertatfirst(Node **head, int newdata)
{
    Node *new = (Node *)malloc(sizeof(Node));
    new->data = newdata;
    Node *temp;
    temp = *head;
    *head = new;
    new->next = temp;
}
//*search the element in linked list at position
int searchNodefromhead(Node *head, int pos)
{
    Node *p = head;
    for (int i = 1; i < pos; i++)
    {
        p = p->next;
    }
    return p->data;
}
//*function to delete from a given position
void deleteFromPos(Node *head, int pos)
{
    Node *p = head;
    Node *del;
    for (int i = 1; i < pos - 1; i++)
    {
        p = p->next;
    }
    del = p->next;
    printf("DELETING [%d] from list:::::\n", del->data);
    p->next = p->next->next;
    free(del);
}
//*function to insert at a given position
void insertFromPos(Node *head, int pos, int data)
{
    Node *p = head;
    Node *justnext;
    for (int i = 1; i < pos - 1; i++)
    {
        p = p->next;
    }
    justnext = p->next;
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->data = data;
    p->next = newnode;
    newnode->next = justnext;
}
int main()
{
    Node *head;
    int len, newdata, newdata2, finddata;
    printf("ENTER LENGTH OF LIST ::: ");
    scanf("%d", &len);
    head = initializelist(len);
    printlist(head);
    numberofnodes(head);
    deletelastelement(head);
    printlist(head);
    deletefirstelement(&head);
    printlist(head);
    //*insert at last
    printf("ENTER NEW DATA TO BE INSERT:::: ");
    scanf("%d", &newdata);
    insertatlast(head, newdata);
    printf("\n");
    printlist(head);
    printf("ENTER NEW DATA TO BE INSERT:::: ");
    scanf("%d", &newdata2);
    insertatfirst(&head, newdata2);
    printlist(head);
    printf("FINDED DATA AT 3 POSITION %d\n", searchNodefromhead(head, 3));
    deleteFromPos(head, 3);
    printlist(head);
    printf("INSERTED DATA LIST IS::::\n");
    insertFromPos(head, 5, 100);
    printlist(head);
    return 0;
}