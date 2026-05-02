#pragma once
int FolderSize;

// 트리의 노드 구조 정의
typedef struct treeNode {
    int size;                // 데이터 필드 (폴더/파일 용량)
    struct treeNode* left;   // 왼쪽 서브 트리에 대한 링크 필드
    struct treeNode* right;  // 오른쪽 서브 트리에 대한 링크 필드
} treeNode;

// 함수 선언
treeNode* makeRootNode(int size, treeNode* leftNode, treeNode* rightNode);
int postorder_FolderSize(treeNode* root);