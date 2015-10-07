#ifndef LIST_H
#define LIST_H

typedef int item_t;
typedef struct node* link_t;
struct node{
	item_t item;
	link_t next;
}; 
typedef link_t node_t;

void initNodes(int);
link_t newNode(int);
void freeNode(link_t);
void insertNext(link_t,link_t);
link_t deleteNext(link_t);
link_t Next(link_t);
int Item(link_t);

#endif
