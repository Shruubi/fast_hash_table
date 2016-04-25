#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HASH_CONST 1023

// Nodes used for binary tree
struct TreeNode {
  //binary tree left/right
  struct TreeNode* left;
  struct TreeNode* right;

  //top level for linked-list
  struct ListNode* listRoot;

  //index val
  int index;
};

// Nodes for linked list
struct ListNode {
  struct ListNode* next;
  void* val;
};

int hash_string(const char* str) {
  int hashVal = 0;

  for(int i = 0; i < strlen(str); i++) {
    char tmp = testStr[i];
    hashVal = tmp * HASH_CONST + hashVal;
  }

  hashVal = hashVal & HASH_CONST;

  return hashVal;
}

struct TreeNode* append_tree_node(struct TreeNode* tree, int index) {
  
}

void add_item(struct TreeNode* tree, const char* key, void* val) {
  
}

void create_list_node(void* val) {
  struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
  node->val = val;
  return node;
}

void add_item_to_list(struct ListNode* list, void* val) {
  struct ListNode* ptr = list;
  struct ListNode* prev = NULL;
  
  while(ptr != NULL) {
    prev = ptr;
    ptr = ptr->next;
  }

  prev->next = 
}

int main(int argc, char** argv) {
  char* testStr = "Edgar Codd";


  printf("hash val is: %d\n", hashVal);
  return 0;
}
