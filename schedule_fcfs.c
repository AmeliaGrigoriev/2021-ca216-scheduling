#include <stdio.h>
#include <stdlib.h>
#include "schedulers.h"
#include "cpu.h"
#include "task.h"
#include "list.h"

struct node *head;
head = NULL;

struct node 
{
    Task *task;
    struct node *next;
}


struct node *head;
head = NULL;

// add a task to the list 
void add(char *name, int priority, int burst)


// invoke the scheduler

static void schedule(struct node *head)
{
    struct node* previous = NULL;
    struct node* current = &head;
    struct node* next = NULL;
    if (current = NULL)
    {
        return NULL;
    }
    else{
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    head = previous;
}
  
/*References:

We used this website to help with this fcfs algorithm for this assignment(https://www.geeksforgeeks.org/reverse-a-linked-list/)


STATEMENT OF NON-PLAGIARISM

	I herby declare that all information in this assignment has been obtained and presented in accordance with academic rules and ethical conduct and the work I am submitting in this document, except where I have indicated, is my own work.

	Student Number: 19386196
	Student Name: Jayne Nyhan
	Date: 11/04/2021

    I herby declare that all information in this assignment has been obtained and presented in accordance with academic rules and ethical conduct and the work I am submitting in this document, except where I have indicated, is my own work.

	Student Number: 19348241
	Student Name: Amelia Grigoriev
	Date: 11/04/2021
*/