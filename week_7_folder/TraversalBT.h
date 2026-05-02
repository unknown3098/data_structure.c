#pragma once

typedef char element;

// 연결 자료구조로 구성하기 위해 트리의 노드 정의
typedef struct treeNode {
    element data;
    struct treeNode* left;   // 왼쪽 서브 트리에 대한 링크 필드
    struct treeNode* right;  // 오른쪽 서브 트리에 대한 링크 필드
} treeNode;

// 함수 선언부
treeNode* makeRootNode(element data, treeNode* leftNode, treeNode* rightNode);
void preorder(treeNode* root);  // 전위 순회
void inorder(treeNode* root);   // 중위 순회
void postorder(treeNode* root); // 후위 순회