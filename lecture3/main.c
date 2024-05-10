#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* pNext;
};
struct Node* head = NULL;

void addNewElement(int data){
    if(head == NULL){
        head|?>  = (struct Node*) malloc(sizeof(struct Node));
        head->data = data;
        head->pNext = NULL;
    }else {
        struct Node* temp = head;
        temp->pNext = (struct Node*)malloc(sizeof(struct Node));
        temp->data = data;
        temp->pNext = head;
        head = temp;
    }
}

void printList (){
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d",temp->data);
        temp = temp->pNext;
    }
}

int main()
{
    addNewElement(5);
    addNewElement(6);
    printList();
    return 0;
}
