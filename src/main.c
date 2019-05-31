#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print ();
void Top ();
void pop ();
void push (int x);

struct node
{
  int data;
  struct node *next;
};

struct node *top=NULL;

void main ()
{
  int n, i, x;
  printf("===================BEGIN====================\n");
  puts ("How many numbers?\n");
  scanf ("%d", &n);
  printf("--------------------------------------------\n");
  printf ("input the data: \n");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &x);
      push (x);
    }
    printf("--------------------------------------------\n");
    print();
    
    pop();
    print();
    
    pop();
    print();
    
    push(985);
    print();
    
    Top();
    
    printf("=====================END====================\n");

}


void print ()
{
  if (top == NULL)
    {
      printf ("Stack Empty!!");
      printf("--------------------------------------------\n");
      return;
    }
  struct node *temp = top;
  while (temp != NULL)
    {
      printf ("%d\n", temp->data);
      temp = temp->next;
    }
    printf("--------------------------------------------\n");
}


void Top ()
{
  printf ("%d\n", top->data);
  printf("--------------------------------------------\n");
}

void pop ()
{
  if (top == NULL)
    {
      printf ("Stack EMPTY!");
      printf("--------------------------------------------\n");
      return;

    }
  struct node *temp;
  temp = top;
  top = top->next;
  free (temp);

}

void push (int x)
{
  struct node *temp=(struct node*)malloc(sizeof(struct node));
  temp->data = x;
  temp->next = top;
  top = temp;
}