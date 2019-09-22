
#include <stdlib.h>
#include <stdio.h>


struct mynode {                   //                           _mynode_
    int const value;              //my node has 3 entrees     | value  |
    struct mynode *next;          //                          | next   | ->
    struct mynode *prev;          //                       <- | pre    |
};

int main(){
    
    //allocate space and assign ptr for head and current
    struct mynode* head = malloc(sizeof(struct mynode));
    struct mynode* current = head;
    head->prev = NULL;
    head->next = NULL;
    
    
    //linkedlist generator
    int sizeoflist;
    printf("Please how number of values: \n");
    scanf("%d", &sizeoflist);
    
    for (int i = 0; i < sizeoflist; i++){
    
    //checks if list is empty before allocating memory
        if(head->next == NULL){
           scanf("%d", &head->value);
        }
    //allocates memory for new node and creats ptr newnode
        else{
            struct mynode* newnode = malloc(sizeof(struct mynode));
            //receive user input assigns to newnode
            printf("Please enter value for node: \n");
            scanf("%d", &newnode->value);
    
            //assign new node to back of list change current to back of list
            current->next = newnode;
            newnode->prev = current;
            current = newnode;
        }
        
    }
    
    struct mynode* temp = head;
    for(int i = 0; i < sizeoflist; i++){
        if(i == sizeoflist -1){
            printf("%d", temp->value);
        }
        else
         printf("%d<==>", temp->value);
        temp = temp -> next;
    
    }
    printf("\n");
    
    
    
    
    
}

