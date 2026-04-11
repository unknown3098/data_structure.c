#include <stdio.h>
#include <stdlib.h>
#define Q_SIZE 4

typedef char element;

// 순차 큐 구조체 정의
typedef struct {
    element queue[Q_SIZE];
    int front, rear;
} QueueType;

// 큐 생성 및 초기화
QueueType* createQueue() {
    QueueType* Q = (QueueType*)malloc(sizeof(QueueType));
    Q->front = -1; // front 초기화
    Q->rear = -1;  // rear 초기화
    return Q;
}

// 큐가 비어있는지 확인
int isEmpty(QueueType* Q) {
    return (Q->front == Q->rear);
}

// 큐가 가득 찼는지 확인
int isFull(QueueType* Q) {
    return (Q->rear == Q_SIZE - 1);
}

// 큐에 데이터 삽입
void enQueue(QueueType* Q, element item) {
    if (isFull(Q)) {
        printf("Queue is full!\n");
        return;
    }
    Q->rear++;
    Q->queue[Q->rear] = item;
}

// 큐에서 데이터 삭제
element deQueue(QueueType* Q) {
    if (isEmpty(Q)) {
        printf("Queue is empty!\n");
        return 0;
    }
    Q->front++;
    return Q->queue[Q->front];
}

// 큐의 가장 앞에 있는 데이터 확인 (삭제하지 않음)
element peek(QueueType* Q) {
    if (isEmpty(Q)) {
        printf("Queue is empty!\n");
        return 0;
    }
    return Q->queue[Q->front + 1];
}

// 큐의 현재 상태 출력
void printQ(QueueType* Q) {
    printf("Queue : [ ");
    for (int i = Q->front + 1; i <= Q->rear; i++) {
        printf("%c ", Q->queue[i]);
    }
    printf("]");
}

int main(void) {
    QueueType* Q = createQueue();
    element data;

    printf("***** 순차 큐 연산 *****\n\n");

    printf("삽입 A>> ");
    enQueue(Q, 'A');
    printQ(Q);
    printf("\n");

    printf("삽입 B>> ");
    enQueue(Q, 'B');
    printQ(Q);
    printf("\n");

    printf("삽입 C>> ");
    enQueue(Q, 'C');
    printQ(Q);
    printf(" peek item : %c\n\n", peek(Q)); // peek 연산 출력

    printf("삭제  >> ");
    data = deQueue(Q);
    printQ(Q);
    printf("\t\t삭제 데이터 : %c\n", data);

    printf("삭제  >> ");
    data = deQueue(Q);
    printQ(Q);
    printf("\t\t삭제 데이터 : %c\n", data);

    printf("삭제  >> ");
    data = deQueue(Q);
    printQ(Q);
    printf("\t\t삭제 데이터 : %c\n", data);

    printf("삽입 D>> ");
    enQueue(Q, 'D');
    printQ(Q);
    printf("\n");

    printf("삽입 E>> ");
    enQueue(Q, 'E'); // 여기서 isFull이 감지되어 "Queue is full!"이 출력됨
    printf("         "); // 줄바꿈 후 출력 위치를 맞추기 위한 공백
    printQ(Q);
    printf("\n");

    // 동적 할당 해제
    free(Q);

    return 0;
}