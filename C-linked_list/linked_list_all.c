#include<stdio.h>
#include<stdlib.h>

typedef struct st{
    int data;
    struct st *next;
}ST;

void    add_node_atend(ST **head, int);
void    add_node_atbegin(ST **head, int);
void    add_node_after(ST **head, int);

void print(ST *);
void sort(ST **);
ST * createnode();
void delete(ST **head, int);
void delete_duplicate(ST **head);
void remove_duplicate_sorted(ST **head);
void search(ST *head, int);
void clear(ST **ptr);

int main()
{
    ST *head = NULL;
    add_node_atend(&head, 1);
    add_node_atend(&head, 2);
    add_node_atend(&head, 2);
    add_node_atbegin(&head, 3);
    add_node_atbegin(&head, 3);
    add_node_atend(&head, 6);
    add_node_atbegin(&head, 4);
    add_node_after(&head->next->next, 7);
    add_node_after(&head->next, 5);
    add_node_atend(&head, 6);
    add_node_atend(&head, 3);
    add_node_atend(&head, 8);
    print(head);
    //delete_duplicate(&head);
    //print(head);
    sort(&head);
    print(head);
    remove_duplicate_sorted(&head);
    print(head);
    delete(&head, 2);
    print(head);
    delete(&head, 3);
    print(head);
    delete(&head, 1);
    print(head);
    search(head, 4);
    print(head);
    search(head, 1);
    print(head);
    clear(&head);
    print(head);
}

void    add_node_atend(ST **head, int data)
{
        //printf("Inside un");
        ST *node = createnode();
        
        ST *temp = *head;
        node->data = data;

        //printf("%d", node->data);

        if(*head == NULL)
            *head = node;
        else
        {
            while(temp->next)
                temp = temp-> next;

            temp->next = node;            
        }

}

void    add_node_atbegin(ST **head, int data)
{
    ST *node = createnode();
    node->data = data;

    node->next = *head;
    *head = node; 
  
}

void    add_node_after(ST **head, int data)
{
    ST *node = createnode();
    node->data = data;

    ST *temp = *head;

    node->next = temp -> next;
    temp-> next = node;
}

        //{}


ST * createnode()
{
    ST *node = (ST*) malloc(sizeof(ST));
    node->next = NULL;
    return node;
}
void print(ST *ptr)
{
    while(ptr)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void sort(ST **head)
{

    ST *temp = *head, *temp1 = NULL;
    int num;

    while(temp)
    {
        temp1 = temp->next;
        while(temp1)
        {
            if(temp->data > temp1->data)
            {
                num = temp->data;
                temp->data = temp1->data;
                temp1->data = num;
            }
            temp1 = temp1->next;
        }
        temp = temp->next;
    }
}

void delete(ST **head, int key)
{
    ST *temp, *temp1;
    temp = *head;

    if(*head == NULL)
        return;
    if(temp != NULL && temp->data == key)
    {
            *head = temp->next;
            temp->next = NULL;
            free(temp);
            return;
    } 
    else
    {
    while(temp)
    {
        if(temp->data == key)
        {
            temp1->next = temp->next;
            free(temp);
            return;
        }   
        else
        {
            temp1 = temp;
            temp = temp->next;
            
        } 
    }
    }
}

void search(ST *ptr, int data)
{
    while(ptr)
    {
        if(ptr->data == data){
        printf("Data is found\n"); return; }
        else
        ptr = ptr->next;

    }
    if(ptr == NULL)
    printf("No Data is found\n");
}

void delete_duplicate(ST **head)
{
    ST *temp, *temp1, *dup;
    temp = *head;

    while(temp != NULL && temp->next != NULL)
    {
        temp1 = temp;
        while(temp1->next != NULL)
        {
            if(temp->data == temp1->next->data)
            {
                dup = temp1->next;
                temp1->next = temp1->next->next;
                free(dup);
            }
            else
            temp1 = temp1->next;
        }
        temp = temp->next;
    }

}

void remove_duplicate_sorted(ST **head)
{
    ST *temp1, *next_next;

    temp1 = *head;

    if(*head == NULL)
        return;

    while(temp1->next != NULL)
    {
        if(temp1->data == temp1->next->data)
        {
            next_next = temp1->next->next;
            free(temp1->next);
            temp1->next =next_next; 
        }
        else
        temp1 = temp1->next;
    }


}


void clear(ST **ptr)
{
    ST *temp, *temp1;
    temp = *ptr;
    while(temp)
    {
        temp1 = temp->next;
        free(temp);
        temp = temp1;
    }

    *ptr = NULL;
    
}