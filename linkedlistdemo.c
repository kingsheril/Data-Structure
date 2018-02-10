#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
	};
typedef struct node nd;
void display(nd *temp)
{
	while(temp!=NULL){
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
int main(void) {
	nd *head,*one,*two,*three;
	head=(nd*)malloc(sizeof(nd));
	one=(nd*)malloc(sizeof(nd));
	two=(nd*)malloc(sizeof(nd));
	three=(nd*)malloc(sizeof(nd));
	head->data=1;
	head->next=one;
	one->data=2;
	one->next=two;
	two->data=3;
	two->next=three;
	three->data=4;
	three->next=NULL;
	display(head);
	return 0;
}
