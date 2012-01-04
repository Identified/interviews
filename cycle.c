#include <stdbool.h>

typedef struct node {
  struct node *next;
} node_t;

bool func(node_t *head)
{
  node_t *s = head;
  node_t *t = head;

  while (t && t->next) {
    s = s->next;
    t = t->next->next;

    if (s == t) return true;
  }

  return false;
}
