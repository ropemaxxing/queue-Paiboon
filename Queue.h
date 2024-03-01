#include "Node.h"

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int order, int amount){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
  new_node->order_number=order;
  new_node->q=amount;
  new_node->nextPtr=NULL;
  if(q->headPtr==NULL)q->headPtr=new_node;
  else q->tailPtr->nextPtr=new_node;
  q->tailPtr=new_node;
  printf("My order is %d\n", order);
 }
 q->size++;
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
   char food[32];

    int price = 0;
    int value = 0;
    int pay = 0;
    int noFood = 0;
    int static count = 1;
    if(t){//t!=NULL
      switch(t->order_number){
        case 1: value=100; strcpy(food, "Ramen"); break;
        case 2: value=20; strcpy(food, "Tempura"); break;
        case 3: value=50; strcpy(food, "Fried Chicken"); break;
        default: printf("No Food\n\n"); noFood=1;
      }
      if(noFood==0){
        price=value*t->q;
        printf("\nCustomer No.%d\n",count);
        printf("%s\n",food);
        printf("You have to pay %d\n",price);
        while(1){
          printf(":");
        scanf("%d", &pay);
        if (pay == price)
        {
          printf("Thank you\n");
          break;
        }
        else if (pay > price)
        {
          printf("Thank you\n");
          printf("Change is %d\n", pay - price); // หากจ่ายเกินราคา ก็จะแสดงเงินทอนออกมา ซึ่งมีค่าเท่ากับ เงินที่จ่าย ลบ ราคาที่ต้องจ่าย
          break;
        }
          else
          {
            printf("You have to pay %d\n",price);
          }
        }
      }
      q->headPtr = q->headPtr->nextPtr;
    free(t);
    q->size--;
    count++;
    return value;
    }
    return 0;
}

