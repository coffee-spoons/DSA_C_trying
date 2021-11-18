#include<stdio.h>
#include <stdlib.h>

struct circular_queue{
    int size, f, r, * arr;
};

int isEmpty(struct circular_queue * ptr ){
    if( ptr->f==ptr->r){
        return 1;
    }
    return 0;
}

int isFull(struct circular_queue * ptr ){
    if( (ptr->r+1)%(ptr->size)==ptr->f){
        return 1;
    }
    return 0;
}

void enqueue(struct circular_queue * ptr, int val){
    if(isFull(ptr)){
        printf("\nThe queue is Full...");
    }
    else{
    ptr->r = ( ptr->r +1)%ptr->size;
    ptr->arr[ptr->r]=val;
    printf("\nElement enqueued: %d",val);
}
}

int dequeue(struct circular_queue * ptr){
    int a= -1;
    if(isEmpty(ptr)){
        printf("\nthe queue is Empty...");
    }
    else{
    ptr->f = (ptr->f +1)% ptr->size;
    a= ptr->arr[ptr->f];
    }
    return a;

}

int main()
{
    struct circular_queue q;
    q.size=5;
    q.f=q.r=0;
    q.arr = (int * )malloc (q.size * sizeof(int));
    enqueue(&q, 45);
    enqueue(&q, 374);
    enqueue(&q, 456);
    printf("\nElement dequeued %d", dequeue(&q));
    printf("\nElement dequeued %d", dequeue(&q));
    printf("\nElement dequeued %d", dequeue(&q));
    enqueue(&q, 92);
    enqueue(&q, 792);

    printf("\nElement dequeued %d", dequeue(&q));
    enqueue(&q, 992);


    return 0;
}