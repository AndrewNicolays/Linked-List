#include "MyList.h"


pNode MyList::CreateNode()
{
	pNode p = (pNode)malloc(sizeof(Node));
	p->next = NULL;
	return p;
}

void MyList::InsertNode(pNode head, templat date)
{
	pNode p = (pNode)malloc(sizeof(Node));
	p->date = date;
	p->next = NULL;

	while (head->next != NULL)
	{
		head = head->next;
	}
	head->next = p;
}

void MyList::DeleteNode(pNode head, templat date)
{
	if (head->next == NULL)
	{
		return;
	}

	pNode p = NULL;
	while (head->next != NULL)
	{
		if (head->next->date == date)
		{
			p = head->next;
			head->next = p->next;
			free(p);
			break;
		}
		head = head->next;
	}
	return;
}

void MyList::UpdateNode(pNode head, templat date, templat x)
{
	while (head->next != NULL)
	{
		if (head->next->date == date)
		{
			head->next->date = x;
			break;
		}
		head = head->next;
	}
	return;
}

void MyList::Each(pNode head)
{
	while (head->next != NULL)
	{
		cout << head->next->date << " ";
		head = head->next;
	}
	cout << endl;
}
