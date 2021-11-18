#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size,f,r;
    int *arr;
};

int isEmpty(struct queue * ptr){
    if( ptr->f==ptr->r){
        // printf("The queue is EMPTY...!!!");
        return 1;
    }
    return 0;
}

int isFull(struct queue * ptr){
    if(ptr->r==ptr->size-1){
        // printf("\nThe queue is FULL...!!!");
        return 1;
    }
    return 0;
}

void enqueue(struct queue * ptr, int val){
    if(isFull(ptr)){
        printf("\nThe queue is Full...");
        // return ;
    }
    else{
        ptr->r++;
        ptr->arr[ptr->r]=val;
        printf("\nElement enqueued: %d",ptr->arr[ptr->r]=val );
    }
}

int dequeue(struct queue * ptr){
    if(isEmpty(ptr)){
        printf("\nThe queue is EMPTY...");
        // return;
    }
    else{
        ptr->f++;//ptr->f=(ptr->f+1)%ptr->size;
        return ptr->arr[ptr->f];
    }
}

/*void display(struct queue * ptr){
    // int i=ptr->f;
    for(int i=ptr->f; i< ptr->r; ptr->f++){
        printf("\n%d, ",ptr->arr[ptr->f]);
    }
    return;
}*/

int main()
{
    struct queue q;
    q.size=3;
    q.f=q.r=0;
    q.arr= (int *) malloc ( q.size* sizeof(int));
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    printf("\nElement dequeued: %d",dequeue(&q));
    printf("\nElement dequeued: %d",dequeue(&q));
    printf("\nElement dequeued: %d",dequeue(&q));

    // if(isEmpty(&q)){
    //     printf("\nEMPTY");
    // }
    // if(isFull(&q)){
    //     printf("\nFULL");
    // }

    return 0;
}