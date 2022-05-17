//Linked File Allocation

#include <stdio.h>

#include <stdlib.h>  
 
struct node
{  
    int data;

    struct node *next;  
};      
   
 
struct node *head, *tail = NULL;  
    
void addFile(int data) 
{  
      
    struct node *newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = data;

    newNode->next = NULL;  
        
    if(head == NULL) {  
         
        head = newNode; 

        tail = newNode;  
    }  
    else {  
          
        tail->next = newNode;  
        
        tail = newNode;  
    }  
}  
   
  
void display() 
{  
  
    struct node *current = head;  
      
    if(head == NULL) 
    {  
        printf("Memory Is Empty\n");

        return;  
    }  
    printf("\nBlocks That Are Linked Are \n"); 

    while(current != NULL) 
    {  
          
        printf("%d-->", current->data);  

        current = current->next;  
    }   
}  
      
int main()  
{  

    int n,start,end,num,i;

    printf("\nEnter The Start Index Of The File\n");

    scanf("%d",&start);

    printf("\nEnter The End Index Of The File\n");

    scanf("%d",&end);

    addFile(start);

    printf("\nEnter The Number Previously Allocated Files\n");

    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
        int file_no;

        printf("\nEnter The Index OF Previously Registered Files In The Memory\n");

        scanf("%d",&file_no);

        addFile(file_no);
    }

    printf("\n-----Linked File Traversal-----\n");
     
    display();

    printf("%d",end);  
   
    return 0;  
}  