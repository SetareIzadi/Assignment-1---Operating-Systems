
/* You are not allowed to use <stdio.h> */
#include "io.h"
#include <stdlib.h>

// Using a double linked list for the data structure 
typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

// Function to add a node to the end of the list
void add_to_end(Node** head, int value) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->data = value;
    new_node->next = NULL;

    if (*head == NULL) {
        new_node->prev = NULL;
        *head = new_node;
    } else {
        Node* last = *head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = new_node;
        new_node->prev = last;
    }
}

// Function to remove the last node from the list
void remove_last_node(Node** head) {
    if (*head == NULL) {
        return;  // If the list is empty, do nothing
    }

    Node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }

    if (last->prev != NULL) {
        last->prev->next = NULL;  // Adjust the second-to-last node
    } else {
        *head = NULL;  // If there was only one node, the list is now empty
    }

    free(last);  // Free the memory of the removed node

}

// Function to print the collection using read and write from #Task 1
void print_collection(Node* head) {
    Node* current = head;
    int first = 1;  // Used to manage the commas between integers
    while (current != NULL) {
        if (!first) {
            write_char(',');  // Add a comma after the first element
        }
        write_int(current->data);  // Print the integer value
        first = 0;
        current = current->next;
    }
    write_char(';');  // End with a semicolon
    write_char('\n');  // Newline after semicolon
}
return 0; 



/**
 * @name  main
 * @brief This function is the entry point to your program
 * @return 0 for success, anything else for failure
 *
 *
 * Then it has a place for you to implementation the command 
 * interpreter as  specified in the handout.
 */



