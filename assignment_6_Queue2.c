#include "queueS.h"

int main(void) {
    QueueType* Q1 = createQueue(); // 큐 생성
    element data;

    createQueue()
        Q[n];
    front < -- - 1;
    rear < -- - 1;
    end createQuene()

        isQueneEmpty(Q)
        if (front == rear) then return true;
        else return false;
    end isQueueEmpty()

        isQueueFull(Q)
        if (rear == n - 1) then return true;
        else return false;
    end isQueueFull()

        deQueue(Q)
        if (isQueueEmpty(Q)) then Queue_Empty();
        else {
            front < --front + 1;
            return Q[front];
        }
    end deQueue()

        peekQ(Q)
        if (isQueueEmpty(Q)) then Queue_Empty();
        else returnQ[front + 1];
    end peekQ()
    printf("\n ***** 순차 큐 연산 ***** \n");

    printf("\n 삽입 A>>");  enQueue(Q1, 'A'); printQ(Q1);
    printf("\n 삽입 B>>");  enQueue(Q1, 'B'); printQ(Q1);
    printf("\n 삽입 C>>");  enQueue(Q1, 'C'); printQ(Q1);

    data = peekQ(Q1);    printf(" peek item : %c \n", data);

    printf("\n 삭제  >>");  data = deQueue(Q1); printQ(Q1);
    printf("\t삭제 데이터: %c", data);

    printf("\n 삭제  >>");  data = deQueue(Q1); printQ(Q1);
    printf("\t삭제 데이터: %c", data);

    printf("\n 삭제  >>");  data = deQueue(Q1); printQ(Q1);
    printf("\t\t삭제 데이터: %c", data);

    printf("\n 삽입 D>>");  enQueue(Q1, 'D'); printQ(Q1);
    printf("\n 삽입 E>>");  enQueue(Q1, 'E'); printQ(Q1);

    getchar(); return 0;
}