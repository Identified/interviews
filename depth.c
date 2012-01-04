#define MAX(a,b) ((a) > (b) ? (a) : (b))

typedef struct node {
  struct node *left;
  struct node *right;
} node_t;

int func(node_t *node)
{
  if (!node) return 0;

  return 1 + MAX(
      func(node->left),
      func(node->right)
    );
}
