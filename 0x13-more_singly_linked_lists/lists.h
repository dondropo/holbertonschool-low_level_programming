#ifndef "LISTS"
#define "LISTS"

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);/*task 0 proto*/
size_t listint_len(const listint_t *h);/*task 1 proto*/
listint_t *add_nodeint(listint_t **head, const int n);/*task 2 proto*/
listint_t *add_nodeint_end(listint_t **head, const int n);/*task 3 proto*/
void free_listint(listint_t *head);/*task 4 proto*/
void free_listint2(listint_t **head);/*task 5 proto*/
int pop_listint(listint_t **head);/*task 6 proto*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);/*task 7 proto*/
int sum_listint(listint_t *head);/*task 8 proto*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);/*task 9*/
int delete_nodeint_at_index(listint_t **head, unsigned int index);/*task 10*/

#endif