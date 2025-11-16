#include<bits/stdc++.h>
#define MAX 5
int queue[MAX];
int front = 0;
int rear = -1;
void enqueue(){
    int n;
    if(rear ==  MAX-1) printf("queue overflow\n") ;

    printf("enter coustomer id : \n");
    scanf("%d",&n);

    queue[rear= rear+1] = n;

}

void dequeue(){
    int n;
    if(front == -1) printf("queue underflow\n");

    printf("customer served.customer id : %d\n", queue[front++]);
}

void show(){
    for(int i = front; i<=rear;i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}


int main(){
    int n;
    while(1){
        printf("1.enqueue\n 2.dequeue\n 3.show\n 4.exit\n");
        scanf("%d",&n);

        if(n==1)  enqueue();
        else if(n==2)  dequeue();
        else if(n==3)  show();
        else if(n==4) return 0;

    }
}