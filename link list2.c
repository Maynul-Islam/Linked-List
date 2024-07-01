// link list implement by array
#include<stdio.h>
#include<stdlib.h>

struct Node{

int data;
struct Node *next;

};
struct Node *createLinkedList(int arr[],int size){

    struct Node *head = NULL, *temp = NULL, *current = NULL;
    int i;
    for(i =0;i<size;i++)
    {
        //printf("%d\n",arr[i]);
        temp = (struct Node*) malloc(sizeof(struct Node));
        temp->data = arr[i];
        temp->next = NULL;

        if(head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current = current->next;
        }
    }
    return head;
}

int main()
{
    int a[] = {5,10,30,50,90,1};
    struct Node *head;
    head = createLinkedList(a,6);
    while(head!= NULL)
    {
        printf("%d\n",head->data);
        head = head->next;
    }
    printf("NULL");
    return 0;
}

