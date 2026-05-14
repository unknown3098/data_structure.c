#include <stdio.h>
#include <stdlib.h>
#include "adjList.h"

int main(void) {
    int i;
    graphType* G1 = (graphType*)malloc(sizeof(graphType));
    graphType* G2 = (graphType*)malloc(sizeof(graphType));
    graphType* G3 = (graphType*)malloc(sizeof(graphType));
    graphType* G4 = (graphType*)malloc(sizeof(graphType));

    // G1 구성: 무방향 그래프 (정점 4개)
    createGraph(G1);
    for (i = 0; i < 4; i++) insertVertex(G1, i);
    insertEdge(G1, 0, 3); insertEdge(G1, 0, 1);
    insertEdge(G1, 1, 3); insertEdge(G1, 1, 2); insertEdge(G1, 1, 0);
    insertEdge(G1, 2, 3); insertEdge(G1, 2, 1);
    insertEdge(G1, 3, 2); insertEdge(G1, 3, 1); insertEdge(G1, 3, 0);

    // G2, G3, G4도 유사하게 구성 (이미지 내용 참조)
    // ... 중략 ...

    printf("\n G1의 인접 리스트"); print_adjList(G1);
    // ... G2, G3, G4 출력 ...

    getchar(); return 0;
}