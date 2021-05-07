#pragma once

#include <string>
#include <iostream>

using namespace std;

template <class ValType>
struct row_hash_table
{
	ValType value;
	string key;
	bool empty;

	row_hash_table()
	{
		empty = true;
	}

	row_hash_table(ValType _value, string _key)
	{
		value = _value;
		key = _key;
		empty = true;
	}

	bool GetEmpty()
	{
		return empty;
	}
};

template <class ValType>
class Hash_table
{
public:
	size_t operations;

	Hash_table(size_t _size = 999);

	size_t hashFunc(string _key, size_t count);

	void add(ValType p1, string _key);
	void remove(string _key);
	row_hash_table<ValType> find_row(string _key);
	ValType find_el(string _key);

	void print_all();
	
	~Hash_table();

private:
	row_hash_table<ValType>* row;
	size_t size;
};

template<class ValType>
inline Hash_table<ValType>::Hash_table(size_t _size)
{
	size = _size;
	operations = 0;
	row = new row_hash_table<ValType>[size];
}

template<class ValType>
inline size_t Hash_table<ValType>::hashFunc(string _key, size_t count)
{
	size_t tmp = _key.length() % 10 + count * 5 + count * count * 5;

	return tmp;
}

template<class ValType>
inline void Hash_table<ValType>::add(ValType p1, string _key)
{
	operations = 0;
	size_t hash_index = _key.length();
	size_t i = 0;

	while (!row[hash_index].empty)
	{
		hash_index = hashFunc(_key, i);

		if (hash_index > size)
		{
			cout << "hash table is full";
			return;
		}

		operations++;
		i++;
	}

	if (row[hash_index].empty)
	{
		operations++;
		row[hash_index].value = p1;
		row[hash_index].key = _key;
		row[hash_index].empty = false;
	}
}

template<class ValType>
inline void Hash_table<ValType>::remove(string _key)
{
	operations = 0;
	size_t hash_index = _key.length();
	size_t i = 0;

	while (row[hash_index].key != _key)
	{
		hash_index = hashFunc(_key, i);

		operations++;
		i++;
	}

	if (row[hash_index].key == _key)
	{
		operations++;
		row[hash_index].empty = true;
	}
}

template<class ValType>
inline row_hash_table<ValType> Hash_table<ValType>::find_row(string _key)
{
	size_t hash_index = _key.length();
	size_t i = 0;
	operations = 0;

	while (row[hash_index].key != _key)
	{
		hash_index = hashFunc(_key, i);

		operations++;
		i++;
	}

	if (row[hash_index].key == _key)
	{
		operations++;
		return row[hash_index];
	}
}

template<class ValType>
inline ValType Hash_table<ValType>::find_el(string _key)
{
	size_t hash_index = _key.length();
	size_t i = 0;
	operations = 0;

	while (row[hash_index].key != _key)
	{
		hash_index = hashFunc(_key, i);

		operations++;
		i++;
	}

	if (row[hash_index].key == _key)
	{
		operations++;
		return row[hash_index].value;
	}
}

template<class ValType>
inline void Hash_table<ValType>::print_all()
{
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		if (row[i].empty == false)
		{
			cout << row[i].key << "                " << row[i].value << endl;
		}
	}
}

template<class ValType>
inline Hash_table<ValType>::~Hash_table()
{
	delete[] row;
	this->size = 0;
}
