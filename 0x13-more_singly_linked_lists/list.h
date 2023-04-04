#ifndef LISTS_H
#define LISTS_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/**
 * struct listint_s 
 * @n:data
 * @link:contains the address of the next node of the list
 *
 * Description:single linked list made up of nodes for ALX project
 */
typedef struct listint_s
{
	int d;
	struct listint_s*link;
}listint_t;
        
size_t print_listint(const listint_t*h);
size_t listint_len(const listint_t*h);
listint_t*addd_nodeint(listint_t**head, const int d);
listint_t*add_nodeint_end(listint_t**head, const int d);
void free_listint(listint_t*head);
void free_listint2(listint_t**head);
int pop_listint(listint_t**head);
listint*get_nodeint_at_index(listint_t*head,unsigned int index);
int sum_listint(listint_t8head);
listint_t *insert_nodeint_at_index(listint_t**head,unsigned int idx, int d);
int sum_listint(listint_t*head);
listint_t*insert_nodeint_at_index(listint_t**head,unsigned int index);
listint_t*reverse_listint(listint_t**head);
size_t print_listint_safe(const listint_t*head);
size_t free_listint_safe(listint_t**h);
int delete_nodeint_at_index(listint_t**head,unsigned int index);
listint_t*find_listint_loop(listint_t*head);

#endif

