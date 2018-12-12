#include <iostream>
using namespace std;
template <class T>
struct Node
{
	T data;
	Node *next;
	Node *pre;
};
template <class T>
class DoubleLinked
{
private:
	Node<T> *head;
	Node<T> *tail;
public:
	DoubleLinked()
	{
		T head = 0;
		T tail = 0;
	}
	void CreatLinked()
	{
		T head = NULL;
		T tail = NULL;
	}
	bool CheckEmptyList()
	{
		return (head == NULL);
	}
	void Add_Head(T x)
	{
		Node<T> *q = new Node<T>;
		q->data = x;
		q->next = NULL;
		q->pre = NULL;
		if (head = NULL && tail == NULL)
		{
			head = q;
			tail = q;
		}
		else
		{
			Node<T> *p = new Node<T>;
			while (p->next != NULL);
			{
				p->next = head;
				head->pre = p;
				head = p;
			}
		}
	}
	void Add_Tail(T x)
	{
		Node<T> *q = new Node<T>;
		q->data = x;
		q->next = NULL;
		q->tail = NULL;
		if (head = NULL && tail = NULL)
		{
			head = q;
			tail = q;
		}
		else
		{
			Node<T> *p = new Node<T>;
			tail->next = p;
			p->pre = tail;
			tail = p;
		}
	}
	void Delete_Head()
	{
		Node<T> *q = new Node<T>;
		q = head;
		q = q->next;
		delete q;
	}
	void Delete_Tail()
	{
		Node<T> *q = new Node<T>;
		q = tail;
		q->pre = tail;
		q->next = NULL;
	}
	void Insert(T value, int k)
	{
		Node<T> *q = new Node<T>;
		q = head;
		Node<T> *p = new Node<T>;
		p = tail;
		Node<T> *e = new Node<T>;
		e->data = value;
		for (int i=2;i<k;i++)
		{
			q = q->next;
		}
		q->next = e;
		e->pre = q;
		e->next = p;
		p->pre = e;
	}
};
int main()
{
	return 0;
}