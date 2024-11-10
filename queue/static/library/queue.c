//
// Created by 1 on 2023/12/17.
//
#include "queue.h"
#include "stdlib.h"
#include "stdio.h"

// 初始化队列
void initQueue(Queue ** queue){
    *queue = (Queue *) malloc(sizeof(Queue));
    Queue *q = *queue;
    q->dataList = (QueueDataList *) malloc(sizeof(QueueDataList));
    q->dataList->data = NULL;
    q->dataList->next = NULL;
}

// 判断队列是否为空
bool checkQueueEmpty(Queue *queue){
    return !(queue->dataList->next);
}

// 入队
void enQueue(Queue *queue, void * item){
    QueueDataList *data = (QueueDataList *) malloc(sizeof(QueueDataList));
    data->data = item;
    data->next = NULL;
    QueueDataList *p = queue->dataList;
    data->next = p->next;
    p->next = data;
}

// 出队
void *deQueue(Queue *queue){
    if (checkQueueEmpty(queue)){
        printf("stack empty\n");
        return NULL;
    }
    QueueDataList *t = queue->dataList;
    QueueDataList *p = queue->dataList->next;
    while (p->next){
        p = p->next;
        t = t->next;
    }
    void * data = p->data;
    t->next = NULL;
    free(p);

    return data;
}

// 读队头元素
void *getQueueHead(Queue *queue){
    if (checkQueueEmpty(queue)){
        printf("stack empty\n");
        return NULL;
    }
    QueueDataList *p = queue->dataList->next;
    while (p->next){
        p = p->next;
    }
    void * data = p->data;

    return data;
}

// 销毁队列
void destroyQueue(Queue *queue) {
    QueueDataList *p = queue->dataList;
    QueueDataList *t;
    while (p){
        t = p->next;
        free(p);
        p = t;
    }
    free(queue);
}