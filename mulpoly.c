#include<stdio.h>
#include<stdlib.h>

struct node{
    int coeff;
    int expo;
    struct node* link;
};

struct node *p1,*p2,*p3;

struct node* readpoly(){
    struct node *newNode,*ptr,*head=NULL;
    int n,i;
    printf("Enter the number of terms of polynomial:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter coefficient %d",i+1);
        scanf("%d",&newNode->coeff);
        printf("Enter exponent %d",i+1);
        scanf("%d",&newNode->expo);
        newNode->link = NULL;

        if(head == NULL){
            head = newNode;
            ptr = head;
        }
        else{
            ptr->link = newNode;
            ptr = newNode;
        }
    }
    return head;
}

struct node* mulpoly(struct node* p1,struct node* p2){
    struct node *p,*q,*head=NULL,*newNode,*r=NULL,*prev = NULL;

    for(p = p1;p!=NULL;p=p->link){
        for(q = p2;q!=NULL;q = q->link){
            newNode = (struct node*)malloc(sizeof(struct node));
            newNode->coeff = p->coeff*q->coeff;
            newNode->expo = p->expo+q->expo;
            newNode->link = NULL;

            if(head == NULL){
                head = newNode;
            }
            else{
                r = head;
                struct node* prev = NULL;
                while(r->link!=NULL && r->expo >= newNode->expo){
                    if(r->expo == newNode->expo){
                        r->coeff += newNode->coeff;
                        break;
                    }
                    prev = r;
                    r =r->link;
                } 
                if(r == NULL){
                    prev->link = newNode;
                    prev = newNode;
                }
                else if(r->expo != newNode->expo){
                    newNode->link = r;
                    if(prev == NULL){
                        head = newNode;
                    }
                    else{
                        prev->link = newNode;
                    }
                }     
            }
        }
    }
    return head;
}

void dislaypoly(struct node* p){
    while(p->link!=NULL){
        printf("%d X^%d",p->coeff,p->expo);
        p = p->link;
        printf(" + ");
    }
    printf("%d X^%d",p->coeff,p->expo);
    printf("\n");
}

int main(){
    p1 = readpoly();
    p2 = readpoly();

    dislaypoly(p1);
    dislaypoly(p2);

    p3 = mulpoly(p1,p2);
    dislaypoly(p3);
}