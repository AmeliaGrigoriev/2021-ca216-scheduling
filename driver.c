/**
 * 
 * the work was divided evenly upon both of us 50/50
 * Driver.c
 *
 * Schedule is in the format
 *
 *  [name] [priority] [CPU burst]
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "task.h"
#include "list.h"
#include "schedulers.h"

#define SIZE    100

int main(int argc, char *argv[])
{
    FILE *in;
    char *temp;
    char task[SIZE];

    char *name;
    int priority;
    int burst;

    in = fopen(argv[1],"r");
    
    while (fgets(task,SIZE,in) != NULL) {
        temp = strdup(task);
        name = strsep(&temp,",");
        priority = atoi(strsep(&temp,","));
        burst = atoi(strsep(&temp,","));

        // add the task to the scheduler's list of tasks
        add(name,priority,burst);

        free(temp);
    }

    fclose(in);

    // invoke the scheduler
    schedule();

    return 0;
}

/*References:

We used code from this website to help understand linked lists a bit better for this assignment(https://www.geeksforgeeks.org/linked-list-set-1-introduction/)


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
