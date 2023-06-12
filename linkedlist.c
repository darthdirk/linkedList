#include <stdlib.h>
#include <stdio.h>


struct node{
	int value;
	struct node* next;
};
typedef struct node node_t;

void printlist(node_t *head){
	node_t *temporary = head;
	
	while (temporary != NULL){
          printf("%d - ", temporary->value);
          temporary = temporary->next;
        }
        printf("\n");
    }
/*
  Function Name: create_new_node(int value)

  Inputs:
    value - integer argument

  Outputs
    node_t - the new linked node
	sets next pointer to point to the head
	
  Return Values
    node_t pointer - pointer to the new node

  Description:  This function creates new nodes allocated with malloc
*/
node_t *create_new_node(int value){
	node_t *result = malloc(sizeof(node_t));
	result->value = value;
	result->next = NULL;
	return result;
}
/*
  Function Name: insert_at_head(node_t *head, node_t *node_to_insert)

  Inputs:
	node_t - pointer to the head
	node_t - pointer to the new node i want to add

  Outputs
    node_t - the new linked node
	sets next pointer to point to the head
	
  Return Values
    node_to_insert- pointer to address of the new node

  Description:  This function creates new nodes allocated with malloc
*/

node_t *insert_at_head(node_t **head, node_t *node_to_insert){
	node_to_insert->next = *head;
	*head = node_to_insert;
	return node_to_insert;
}

/*
Function name: find_node(node_t *head, int value)

Inputs:
node_t - pointer to head
value to find

Outputs:
found node

Return Values:

Description:

*/

node_t *find_node(node_t *head, int value){
	node_t *tmp = head;
	while (tmp != NULL){
		if (tmp->value == value) return tmp;
		tmp = tmp->next;
	}
	return NULL;
	
}

void *insert_after_node(node_t *node_to_insert_after, node_t* newnode){
	newnode->next = node_to_insert_after->next;
	node_to_insert_after->next
}
int main(){   
	node_t *head = NULL;
	node_t *tmp;
	
	for (int i=0; i<25; i++) {
		tmp = create_new_node(i);
		insert_at_head(&head, tmp);
		
	}
	
	
	tmp = find_node(head, 13);
	printf("found node with value %d\n", tmp->value);
	
	
	printlist(head);



	return(0);
}

