#include <stdio.h>
#include <stdlib.h> 

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

struct node *create_list(struct node *start) {
    struct node *new_node, *ptr;
    int num;
    printf("Enter the data (-1 to end): ");
    scanf("%d", &num);
    while (num != -1) {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
        new_node->next = NULL;

        if (start == NULL) {
            start = new_node;
        } else {
            ptr = start;
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = new_node;
        }
        printf("Enter the data (-1 to end): ");
        scanf("%d", &num);
    }
    return start;
}


int count_nodes(struct node *start) {
    int count = 0;
    struct node *ptr =start;
    while (ptr!=NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;

}

int main() {
    start = create_list(start);
    printf("The number of nodes in the list: %d\n", count_nodes(start));
    return 0;
}