#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
    int data;
    struct s_list *next;

} t_list;

t_list  *lst_new(int data)
{
    t_list  *new_list;
    new_list = (t_list*)malloc(sizeof(t_list));
    if(!new_list)
        return(NULL);
    new_list->data = data;
    new_list->next = NULL;
    return(new_list);
}

void    lstadd_back(t_list *lst, t_list *content)
{
    if(!lst || !content)
        return;
    while(lst->next != NULL)
        lst = lst->next;
    lst->next = content;
}

int main()
{
    t_list *root;
    root = lst_new(10);
    
}