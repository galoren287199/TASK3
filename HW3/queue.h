#pragma once
<<<<<<< HEAD
#include <windows.h>

struct Queue* createQueue(unsigned int capacity);
int isFull(struct Queue* queue);
int isEmpty(struct Queue* queue);
void enqueue(struct Queue* queue, int item);
int pop(struct Queue* queue);
int front(struct Queue* queue);
=======

#include <windows.h>
#include <limits.h> 
#include <stdio.h> 
#include <stdlib.h>
#include "Functions.h"
#include "HardCodedData.h"
/// "destroy queue" was not implemented yet
struct Queue {
    int front, rear, size;
    unsigned int capacity;
    int* array;
    HANDLE mutex_fifo; 
};
struct Queue* InitializeQueue(unsigned int capacity);
int isFull(struct Queue* queue);
int isEmpty(struct Queue* queue);
void push(struct Queue* queue, int item);
int pop(struct Queue* queue);
int Top(struct Queue* queue);
>>>>>>> 8ce8ee54f352a474e3a71ff9ad1902df3236f732
