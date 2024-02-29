

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x, int z){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
    new_node->ordernumber=x;
    new_node->nextPtr=NULL;

   if(q->size==0)
      q->headPtr=new_node;
   else q->tailPtr->nextPtr=new_node;
    
    q->tailPtr=new_node;
    q->size++;

  /*Finish enqueue */
 }
}


int dequeue_struct(Queue *q){
   int price, cash;
   NodePtr t=q->headPtr;
   if(t){
   int value= t->ordernumber;
       switch(value){
            case 1: 
               printf("Ramen\n");
               price = 100*t->q;
               printf("You have to pay %d\n", price);
               while(1){
                  printf("Cash : \n");
                  scanf("%d", &cash);
                  if(cash == price){
                     printf("Thank you.\n");
                     break;
                  }
                  else if(cash > price){
                     printf("Thank you.\n");
                     printf("Change is %d\n", cash-price);
                  }
               }
               break;
            case 2: 
               printf("Somtum\n");
               price = 20*t->q;
               printf("You have to pay %d\n", price);
               break;
            case 3: 
               printf("Fried Chicken\n");
               price = 50*t->q;
               printf("You have to pay %d\n", price);
               break;
            default:
               printf("No Food\n");
               
       }
       q->headPtr=t->nextPtr;
       if(q->size==1)
          q->tailPtr==NULL;
       q->size--;
       free(t);
       return value;
   }
   printf("Empty queue\n");
   return 0;
}

