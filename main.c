#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
  int data;
  struct node *next;
};

struct node *top=NULL;

void
main ()
{
  int n, i, x;
  puts ("How many numbers?\n");
  scanf ("%d", &n);
  printf ("input the data: \n");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &x);
      push (x);
      print();
      printf ("\n-------------\n");
    }
    pop();
    print();
    pop();
    print();
    push(985);
    print();
    Top();

}

void
push (int x)
{
  struct node *temp=(struct node*)malloc(sizeof(struct node));
  temp->data = x;
  temp->next = top;
  top = temp;
}

void
pop ()
{
  if (top == NULL)
    {
      printf ("Stack EMPTY!");
      return;

    }
  struct node *temp;
  temp = top;
  top = top->next;
  free (temp);

}

void
Top ()
{
  printf ("%d", top->data);
}

void
print ()
{
  if (top == NULL)
    {
      printf ("Stack Empty!!");
      return;
    }
  struct node *temp = top;
  while (temp != NULL)
    {
      printf ("%d\n", temp->data);
      temp = temp->next;
    }
}
