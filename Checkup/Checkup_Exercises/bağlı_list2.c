#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    int data;
    struct s_list *next;

} t_list;

t_list* list_list_ekle(t_list *list, t_list *dest)
{
    printf("%p list  \n", list);
    while(list->next != NULL)
        list = list->next;
    list->next = (t_list*)malloc(sizeof(t_list));
    if(!list->next)
        return(NULL);
printf("%p list  \n", list);
    list->next = dest;
    printf("%p list  \n", list);
    return(list);
}

void    list_yazdir(t_list *list)
{
    while(list != NULL)
    {
        printf("%d    ", list->data);
        list = list->next;
    }
}

int main()
{
    t_list *root;

    root = (t_list*)malloc(sizeof(t_list));
    if(!root)
        return(-1);
    root->data =10;
    root->next = NULL;

    t_list *dest;
    printf("%p  main \n", root);
    dest = (t_list*)malloc(sizeof(t_list));
    if(!root)
        return(-1);
    dest->data = 20;
    dest->next = NULL;

   dest = list_list_ekle(root, dest);
   printf("%p main  \n", root);

    list_yazdir(root);
}