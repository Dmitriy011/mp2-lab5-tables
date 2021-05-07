#pragma once

#include <iostream>
#include <vector>

#include "Polinom.h"

using namespace std;

template <class ValType, class KeyType>
struct row_unnordered_massive
{
	KeyType key;
	ValType value;

	row_unnordered_massive() {}

	row_unnordered_massive(ValType _value, KeyType _key)
	{
		value = _value;
		key = _key;
	}
};

template <class ValType, class KeyType>
class Unordered_massive
{
public:
	int  operations;

	Unordered_massive(size_t _size = 10);

	void insert(row_unnordered_massive<ValType, KeyType> _el);
	void del_el(KeyType _key);
	ValType find_value(KeyType _key);
	ValType operator[](KeyType _key);
	
	friend ostream& operator<<(ostream& out, const Unordered_massive<ValType, KeyType>& u)
	{
		for (int i = 0; i < u.size; i++)
		{
			if (u.table[i].key != "")
			{
			out << u.table[i].key << "   " << u.table[i].value << endl;
			}
		}

		return out;
	}
	
	~Unordered_massive();

private:
	row_unnordered_massive<ValType, KeyType>* table;
	size_t size;
	int head;

	bool IsFull() const;
	bool IsEmpty() const;
};

template <class ValType, class KeyType>
Unordered_massive<ValType, KeyType>::Unordered_massive(size_t _size)
{
	size = _size;
	operations = 0;
	table = new row_unnordered_massive<ValType, KeyType>[size];
	head = -1;
}

template<class ValType, class KeyType>
inline void Unordered_massive<ValType, KeyType>::insert(row_unnordered_massive<ValType, KeyType> _el)
{
	operations = 0;

	if (IsFull() == 0)
	{
		table[++head] = _el;
	}
	else
	{
		size = size * 2;
		row_unnordered_massive<ValType, KeyType>* tmp = new row_unnordered_massive<ValType, KeyType>[size];

		for (int i = 0; i < head + 1; i++)
		{
			tmp[i] = table[i];
		}

		delete[] table;
		table = tmp;
		table[++head] = _el;
	}

	operations++;
}

template<class ValType, class KeyType>
inline void Unordered_massive<ValType, KeyType>::del_el(KeyType _key)
{
	operations = 0;
	bool found_key = 0;
	if (IsEmpty())
	{
		throw "ERROR: can`t delite 1el cause table <unnordered_massive> is empty";
	}
	else
	{
		for (size_t i = 0; i < size; i++)
		{
			if (table[i].key == _key && found_key == 0)
			{
				row_unnordered_massive<ValType, KeyType> tmp;
				tmp = table[size - 1];
				table[size - 1] = table[i];
				table[i] = tmp;
				size--;
				head--;
				found_key = 1;
			}
			operations++;
		}
	}

	if (found_key == 0)
	{
		throw "ERROR: el wasn`t found";
	}
}

template<class ValType, class KeyType>
inline ValType Unordered_massive<ValType, KeyType>::find_value(KeyType _key)
{
	operations = 0;

	for (size_t i = 0; i < size; i++)
	{
		if (table[i].key == _key)
		{
			return table[i].value;
		}
		operations++;
	}


	throw "ERROR: el wasn`t found";
}

template<class ValType, class KeyType>
inline ValType Unordered_massive<ValType, KeyType>::operator[](KeyType _key) 
{
	operations = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (this->table[i].key == _key)
		{
			return table[i].value;
		}
		operations++;
	}

	cout << "el with this _key wasn`t found" << endl;
}

template<class ValType, class KeyType>
inline Unordered_massive<ValType, KeyType>::~Unordered_massive()
{
	delete[] table;
	size = 0;
	head = -1;
}

template<class ValType, class KeyType>
inline bool Unordered_massive<ValType, KeyType>::IsFull() const
{
	if (head == size - 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<class ValType, class KeyType>
inline bool Unordered_massive<ValType, KeyType>::IsEmpty() const
{
	if (head == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
