//
// Created by 1 on 2024/11/11.
//

#include "stdio.h"

#include "queue.h"

int main(void) {
    printf("test queue.\n");
    printf("init queue.\n");
    int arr[] = {1, 2, 3};
    Queue *queue = NULL;
    initQueue(&queue);

    printf("enQueue.\n");
    enQueue(queue, &arr[0]);
    enQueue(queue, &arr[1]);
    enQueue(queue, &arr[2]);

    printf("deQueue.\n");
    while (!checkQueueEmpty(queue)){
        int *x =(int *) deQueue(queue);
        printf("%d ", *x);
    }
    puts("");

    printf("destroyQueue.\n");
    destroyQueue(queue);
    return 0;
}