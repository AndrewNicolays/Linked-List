#pragma once
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
using namespace std;
#define templat int 
typedef struct Node
{
	templat date;
	struct Node* next;
}Node, * pNode;

class MyList
{
public:
	pNode CreateNode();
	void InsertNode(pNode head, templat date);
	void DeleteNode(pNode head, templat date);
	void UpdateNode(pNode head, templat date, templat x);
	void Each(pNode head);
};

