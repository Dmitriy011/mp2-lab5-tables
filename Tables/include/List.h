#pragma once

#include <iostream>

using namespace std;

template <class ValType>
struct Node
{
	ValType value;
	Node<ValType>* next;
	Node<ValType>* prev;

	Node() : next(nullptr), prev(nullptr) {}
};

template <class ValType>
class List
{
public:
	List() : head(nullptr), tail(nullptr), size(0) {}

	size_t getSize() const
	{
		return size;
	}

	Node<ValType>* getHead() const
	{
		return head;
	}

	Node<ValType>* getTail() const
	{
		return tail;
	}

	void setSize(size_t _s)
	{
		size = _s;
	}

	void add(ValType _val)
	{
		Node <ValType>* tmp_n1 = new Node<ValType>;
		tmp_n1->value = _val;

		if (size == 0)
		{
			head = tmp_n1;
		}
		else
		{
			Node<ValType>* current = nullptr;
			Node<ValType>* tmp_n2 = head;

			if (_val > head->value)
			{
				head->prev = tmp_n1;
				tmp_n1->next = head;
				head = tmp_n1;
			}
			else
			{
				while ((tmp_n2->value > _val) && (tmp_n2->next != nullptr))
				{
					tmp_n2 = tmp_n2->next;
				}
				if (tmp_n2->next != nullptr)
				{
					current = tmp_n2->prev;
					tmp_n1->next = current->next;
					current->next->prev = tmp_n1;
					current->next = tmp_n1;
					tmp_n1->prev = current;
				}
				else
				{
					tmp_n2->next = tmp_n1;
					tmp_n1->prev = tmp_n2;
				}
			}
		}
		size++;
	}

	void clear()
	{
		while (head != nullptr)
		{
			tail = head->next;
			delete head;
			head = tail;
		}

		head = nullptr;
		size = 0;
	}

	void printList() const
	{
		Node<ValType>* tmp = tail;

		while (tmp != nullptr)
		{
			cout << tmp->value << " ";
			tmp = tmp->prev;
		}
		cout << endl;
	}

	void merge(Node<ValType>* _p1, Node<ValType>* _p2)
	{
		_p1->value = _p1->value + _p2->value;
		_p1->next = _p2->next;

		if (_p2->next != nullptr)
		{
			_p2->next->prev = _p1;
		}

		delete _p2;
	}

	~List() 
	{
		//clear();
	}

private:
	Node<ValType>* head;
	Node<ValType>* tail;
	size_t size;
};