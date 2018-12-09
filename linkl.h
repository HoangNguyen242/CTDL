#ifndef linkl_h
#define linkl_h
#include "node.h"
template <class T>
class List
{
private:
	node<T> *item;
public:
	List()
	{
		item = 0;
	}
	void CreatList()
	{
		item = NULL;
	}
	void Add_Last(T x) // chen phan tu vao cuoi
	{
		node<T> *q = new node<T>;
		q->data = x;
		q->next = NULL;
		if (item == NULL)
		{
			item = q;
		}
		else
		{
			node<T> *p = new node<T>;
			p=item;
			while(p->next != NULL)
			{
				p = p->next;
			}
			p->next = q;
		}
	}
	void Add_Top(T x) // chen phan tu vao dau
	{
		node<T> *q = new node<T>;
		q->data = x;
		if (item = 0)
		{
			q->next = 0;
			item = q;
		}
		else
		{
			q->next = item;
			item = q;
		}
	}
	void Insert( T value, int x) // chen vao 1 vi tri bat ki
	{
		if (x == 1)
		{
			Add_Top(value);
		}
		else
		{
			node<T> *p = new node<T>;
			p = item;
			node<T> *q = new node<T>;
			q->data = value;
			for (int i=0;i<x-1;i++)
			{
				p = p->next;
			}
			q->next = p->next;
			p->next = p;
		}
	}
	void AddList(T x) // nhap list
	{
		for (int i=0;i<x;i++)

		{
			cin>>x;
			Add_Last(x);
		}
	}
	void CheckList() // duyet list
	{
		while (item != NULL)
		{
			cout<<item->data<<" ";
			item = item->next;
		}
	}
	void DeleteFirst() // xoa phan tu truoc
	{
		node<T> *q = new node<T>;
		q = item;
		q = q->next;
		delete q;
	}
	void DeleteLast() // xoa phan tu sau
	{
		node<T> *q = new node<T>;
		q = item;
		while (q->next != NULL)
		{
			q = q->next;
		}
		delete q;
	}
	void DeleteAnyposition(int x) // xoa phan tu vi tri bat ki
	{
		if (x == 1)
		{
			node<T> *q = new node<T>;
			q = item;
			q = q->next;
			delete q;
		}
		else
		{
			node<T> *q = new node<T>;
			q = item;
			for (int i=2;i<x;i++)
			{
				q = q->next;
			}
			node<T> *p = q->next;
			for (int i=2;i<x;i++)
			{
				p = q->next;
			}
			q->next = p->next->next;
			delete q;
		}
	}
	void Retrieve(int x) // lay phan tu o vi tri bat ki
	{
		node<T> *p = new node<T>;
		p = item;
		for (int i=0;i<x;i++)
		{
			p = p->next;
		}
		cout<<p->data<<endl;
	}
	void MaxValue()
	{
		node<T> *p = new node<T>;
		p = item;
		int max = 0;
		while(p!=0)
		{
			if (p->data > max)
			{
				max = p->data;
			}
			p = p->next;
		}
		return max;
	}
	void MinValue()
	{
		node<T> *p = new node<T>;
		p = item;
		int min = 0;
		while(p!=0)
		{
			if (p->data < min)
			{
				min = p->data;
			}
			p = p->next;
		}
		return min;
	}
};
#endif 