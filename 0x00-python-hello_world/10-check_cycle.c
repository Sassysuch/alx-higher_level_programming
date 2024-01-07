#include "lists.h"

/**
 * check_cycle - To checks if linked list contains cycle
 * @list: linked list which will be checked
 *
 * Return: 1 if there is a cycle in list, 0 if there isnt't
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
