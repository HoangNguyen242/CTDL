#include <iostream>
using namespace std;
template <class T>
struct Node
{
	T data;
	Node *next;	
};
template <class T>
class BubleSort
{
private:
	Node<T> *head;
public:
	BubleSort()
	{
		head = 0;
	}
	void CreatList()
	{
		head = NULL;
	}
	void Add_Last(T x)
	{
		Node<T> *p = new Node<T>;
		p->data = x;
		p->next = NULL;
		if (head == NULL)
		{
			head = p;
		}
		else
		{
			Node<T> *q = new Node<T>;
			q = head;
			while(q->next != NULL)
			{
				q = q->next;
			}
		}	
	}
	void Sort()
	{
		Node<T> *q = new Node<T>;
		q = head;
		Node<T> *p = new Node<T>;
		p = q->next;
		while(q != 0)
		{
			p = q->next;
			while(p != 0)
			{
				if (q->data > p->data)
				{
					int temp = p->data;
					p->data = q->data;
					q->data = temp;
				}
				p = p->next;
			}
			q = q->next;
		}
	}
};
int main()
{
	BubleSort<int> a;
	a.CreatList();
	a.Add_Last();
	a.Sort();
	return 0;
}