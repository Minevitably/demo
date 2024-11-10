//
// Created by 1 on 2023/12/17.
//

#ifndef LEARN_QUEUE_H
#define LEARN_QUEUE_H
#include <stdbool.h>

typedef struct QueueDataList {
    void *data;
    struct QueueDataList *next;
} QueueDataList;

/**
 * 使用链表实现的泛型队列
 */
typedef struct {
    QueueDataList *dataList;
} Queue;

/**
 * 初始化队列
 * @param Queue
 * @return
 */
void initQueue(Queue ** Queue);

/**
 * 判断队列是否为空
 * @param Queue
 * @return
 */
bool checkQueueEmpty(Queue *Queue);

/**
 * 入队
 * @param Queue
 * @param item
 * @return
 */
void enQueue(Queue *Queue, void * item);

/**
 * 出队
 * @param Queue
 * @return
 */
void *deQueue(Queue *Queue);

/**
 * 读队头元素
 * @param Queue
 * @return
 */
void *getQueueHead(Queue *Queue);

/**
 * 销毁队列
 * @param Queue
 */
void destroyQueue(Queue *Queue);

#endif //LEARN_QUEUE_H
