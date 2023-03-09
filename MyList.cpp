#include "MyList.h"


pNode MyList::CreateNode()
{
	pNode y = (pNode)malloc(sizeof(Node));
	y->date = (templat)0;
	y->next = NULL;
	return y;
}

void MyList::InsertNode(pNode head, templat date)
{
	pNode w = (pNode)malloc(sizeof(Node));
	w->date = date;
	w->next = NULL;

	while (head->next != NULL)
	{
		head = head->next;
	}
	head->next = w;
}

void MyList::DeleteNode(pNode head, templat date)
{
	if (IsEmpty(head))
	{
		cout << "this is empty linked list!!!";
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
			cout << "delete node date success!!!" << endl;
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

void MyList::Reversla(pNode head)
{
	if (IsEmpty(head))
	{
		cout << "this is empty linked list!!!";
		return;
	}

	pNode p = head->next;
	pNode c = p->next;
	pNode f = c->next;
	p->next = NULL;
	head->next = NULL;
	while (f != NULL)
	{
		c->next = p;
		p = c;
		c = f;
		f = f->next;
	}
	c->next = p;
	head->next = c;
	
	Each(head);
}

void MyList::IndexNode(pNode head, templat date)
{
	if (IsEmpty(head))
	{
		cout << "this is empty linked list!!!" << endl;
		return;
	}

	while (head->next != NULL)
	{
		if (head->next->date == date)
		{
			cout << "Find node data: " << date << endl;
			return;
		}
		head = head->next;
	}
	cout << "Not find node date!!!" << endl;
	return;
}

bool MyList::IsEmpty(pNode head)
{
	if (head->next == NULL)
		return true;
	else
		return false;
}
