#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    int data;

    struct s_list *next;

} t_list ;

t_list*  liste_ekle(t_list *list, int data)
{
    while(list->next != NULL)
        list = list->next;
    list->next = (t_list*)malloc(sizeof(t_list));
    list = list->next;
    list->data = data;
    list->next = NULL;
    return(list);
}

void liste_yazdir(t_list *list)
{
    while(list != NULL)
    {
        printf("%d    ", list->data);
        list = list->next;
    }
}

int  main()
{
    t_list *root;

    root = (t_list *)malloc(sizeof(t_list));

    root->data = 43;
    root->next = NULL;

     t_list *iter;
    
    iter = root;
    for(int i = 20; i <= 50; i = i*2)
    {
       iter =liste_ekle(root, i);
    }

    liste_yazdir(root);
}