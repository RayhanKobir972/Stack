#include<stdio.h>
#define N 10
int queue[N];
int front = -1;
int rear = -1;

void enQueue(int x)
{
    if(rear == N-1)
    {
        printf("\nOverflow");
    }
    else if(rear==-1 && front==-1)
    {
        rear++,front++;
        queue[rear]=x;
        printf("\nInserted -> %d\n", x);
    }
    else
    {
        front++;
        rear++;
        queue[rear]=x;
        printf("Inserted -> %d\n", x);
    }
}
void dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("\nQueue is empty");
    }
    else if(front == rear)
    {
        front = rear =-1;
    }
    else
    {
        printf("\n%d",queue[front]);
        front++;
    }
}
void display() {
  if (rear == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", queue[i]);
  }
  printf("\n");
}


int main()
{


  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);
  enQueue(6);

  dequeue();

  display();
  return 0;
}

