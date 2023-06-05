#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct dlist
{
	int data;
	struct dlist *lptr, *rptr;
} node;

node *start = NULL;
node *last = NULL;

void insert_first();
void insert_last();
//void insert_specified();
void delete_first();
void delete_last();
//void delete_specified();
void traverse();

int main()
{
	int ch;

	do
	{
		printf("\n1. Insert First");
		printf("\n2. Insert Last");
		printf("\n3. Insert Specified");
		printf("\n4. Delete First");
		printf("\n5. Delete Last");
		printf("\n6. Delete Specified");
		printf("\n7. Traverse");
		printf("\nEnter your choice: ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			insert_first();
			break;
		case 2:
			insert_last();
			break;
		case 3:
			//insert_specified();
			break;
		case 4:
			delete_first();
			break;
		case 5:
			delete_last();
			break;
		case 6:
			//delete_specified();
			break;
		case 7:
			traverse();
			break;
		default:
			printf("\nWrong choice");
		}
	} while (ch != 7);

	return 0;
}

void insert_first()
{
	int item;
	node *ptr;

	printf("\nEnter the element: ");
	scanf("%d", &item);

	ptr = (node *)malloc(sizeof(node));
	ptr->data = item;
	ptr->lptr = ptr->rptr = NULL;

	if (start == NULL)
		start = last = ptr;
	else
	{
		ptr->rptr = start;
		start->lptr = ptr;
		ptr->lptr = last;
		start = ptr;
	}
}

void insert_last()
{
	int item;
	node *ptr;

	printf("Enter the element: ");
	scanf("%d", &item);

	ptr = (node *)malloc(sizeof(node));
	ptr->lptr = ptr->rptr = NULL;
	ptr->data = item;

	if (last == NULL)
		start = last = ptr;
	else
	{
		last->rptr = ptr;
		ptr->lptr = last;
		last = ptr;
	}
}

void delete_first()
{
	node *temp;

	if (start == NULL)
		printf("\nNo list is created");
	else
	{
		if (start->lptr == NULL && start->rptr == NULL)
		{
			temp = start;
			start = last = NULL;
		}
		else
		{
			temp = start;
			start = start->rptr;
			start->lptr = NULL;
		}
	}

	printf("\nThe deleted element is: %d", temp->data);
	free(temp);
}

void delete_last()
{
	node *temp;

	if (last == NULL)
		printf("\nNo list is created");
	else
	{
		if (last->lptr == NULL)
		{
			temp = last;
			start = last = NULL;
		}
		else
		{
			temp = last;
			last = last->lptr;
			last->rptr = NULL;
		}
	}

	printf("\nThe deleted element is: %d", temp->data);
	free(temp);
}

void traverse()
{
	node *p;

	if (start == NULL)
		printf("\nNo list is created");
	else
	{
		p = start;
		printf("\nThe elements from start to last: ");

		while (p != NULL)
		{
			printf("%d ", p->data);
			p = p->rptr;
		}

		p = last;
		printf("\nThe elements from last to start: ");

//		while (p != NULL)
//		{
//			printf("%d ", p->data);
//			p = p->lptr;
//		}
	}
}