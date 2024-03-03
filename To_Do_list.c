#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a task
struct Task {
    char description[100];
    int completed;
    struct Task* next;
};

// Function to add a new task to the list
struct Task* addTask(struct Task* head, const char* description) {
    struct Task* newTask = (struct Task*)malloc(sizeof(struct Task));
    if (!newTask) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    strcpy(newTask->description, description);
    newTask->completed = 0;
    newTask->next = head;

    return newTask;
}

// Function to display the list of tasks
void displayTasks(struct Task* head) {
    printf("Task List:\n");
    while (head) {
        printf("%s - %s\n", (head->completed ? "[X]" : "[ ]"), head->description);
        head = head->next;
    }
}

// Function to mark a task as completed
void markCompleted(struct Task* head, const char* description) {
    while (head) {
        if (strcmp(head->description, description) == 0) {
            head->completed = 1;
            printf("Task marked as completed: %s\n", head->description);
            return;
        }
        head = head->next;
    }

    printf("Task not found: %s\n", description);
}

// Function to free the memory used by the task list
void freeTasks(struct Task* head) {
    while (head) {
        struct Task* temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct Task* taskList = NULL;
    char input[100];

    while (1) {
        printf("\n1. Add Task\n2. Display Tasks\n3. Mark Task as Completed\n4. Exit\n");
        printf("Enter your choice: ");
        fgets(input, sizeof(input), stdin);

        switch (atoi(input)) {
            case 1:
                printf("Enter task description: ");
                fgets(input, sizeof(input), stdin);
                input[strcspn(input, "\n")] = '\0';  // Remove trailing newline
                taskList = addTask(taskList, input);
                break;

            case 2:
                displayTasks(taskList);
                break;

            case 3:
                printf("Enter task description to mark as completed: ");
                fgets(input, sizeof(input), stdin);
                input[strcspn(input, "\n")] = '\0';  // Remove trailing newline
                markCompleted(taskList, input);
                break;

            case 4:
                freeTasks(taskList);
                exit(EXIT_SUCCESS);

            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    }

    return 0;
}
