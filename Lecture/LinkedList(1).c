#include <stdio.h>
#include <stdlib.h>
typedef struct list List;

struct list
{
    int value;
    List *next;
};

List *new_list(int value)
{
    List *list=malloc(sizeof(List));
    list->value=value;
    list->next=NULL;
    return (list);
}

void append_list(List *list, int value)
{
    List *element=new_list(value);
    while ((list->next)!=NULL)
    {
        list=list->next;
    }
    list->next=element;
}

void print_list(List *list)
{
    while (list!=NULL)
    {
        printf("Value is %d\n",list->value);
        list=list->next;
    }
    printf("Printed all elements of the list\n");
}

int main()
{
    List *ptr=NULL;         /* pointer List; points to nothing */
    ptr=new_list(1);        /* create a list with one element */
    append_list(ptr,23);    /* append to the list */
    append_list(ptr,12);
    print_list(ptr);
    return 0;
}
