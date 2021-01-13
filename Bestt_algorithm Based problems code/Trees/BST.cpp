#include <stdio.h>
#include <stdlib.h>
struct node
{
	char x;
	struct node *left;
	struct node *right;
};
struct node * create (char value)
{
	struct node * newnode;
	newnode = malloc(sizeof(struct node));
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->x = value;
	return newnode;
}
void insert (struct node * current, char value)
{
	if (current == NULL)
		current = create(value);
		else if (current->x > value)
			insert(current->left, value);
			else insert(current->right, value);
}
void fill (struct node * root)
{
	while (1)
	{
		fflush(stdin);
		char c = getchar();
		if (c == ' ')
			return;
		insert(root, c);
	}
}
int main()
{
	struct node *root;
	char head = getchar();
	root = create(head);
	fill(root);
	return 0;
}
