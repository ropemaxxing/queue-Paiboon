//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#ifndef Node_h
#define Node_h

typedef struct node{
   int order_number;
   int q;//quantity
   struct node *nextPtr;
}Node;

typedef struct node* NodePtr;


#endif
