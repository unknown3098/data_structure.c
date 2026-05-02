#include <stdio.h>
#include "traversalBT.h"

int main(void) {
    // (A * B - C / D) 수식 이진 트리 만들기
    // 하위 노드(피연산자)부터 생성하여 위로 연결해 나갑니다.
    treeNode* n7 = makeRootNode('D', NULL, NULL);
    treeNode* n6 = makeRootNode('C', NULL, NULL);
    treeNode* n5 = makeRootNode('B', NULL, NULL);
    treeNode* n4 = makeRootNode('A', NULL, NULL);

    // 연산자 노드를 생성하며 피연산자 노드들을 연결
    treeNode* n3 = makeRootNode('/', n6, n7); // C / D
    treeNode* n2 = makeRootNode('*', n4, n5); // A * B
    treeNode* n1 = makeRootNode('-', n2, n3); // (A * B) - (C / D)

    printf("\n preorder  : ");
    preorder(n1);

    printf("\n inorder   : ");
    inorder(n1);

    printf("\n postorder : ");
    postorder(n1);

    getchar();
    return 0;
}