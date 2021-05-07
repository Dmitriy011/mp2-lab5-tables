#pragma once

#include "iostream"

#include "List.h"

using namespace std;

#define ERR_DEG 111111

template <class ValType>
class Monom
{
public:

	ValType cf;
	size_t index;

	Monom(ValType _cf = 1, size_t _index = 0) 
	{
		if ((_index > 999) || (_index < 0))
		{
			throw "ERROR:(_index > 999) || (_index < 0)";
		}
		else
		{
			cf = _cf;
			index = _index;
		}
	};

	void init(ValType _cf, size_t _index)
	{
		if ((_index > 999) || (_index < 0))
		{
			throw "ERROR:(_index > 999) || (_index < 0)";
		}
		else
		{
			cf = _cf;
			index = _index;
		}
	}

	ValType GetCf() const
	{ 
		return cf; 
	}

	size_t GetIndex() const
	{
		return index;
	}

	void SetCf(int _cf)
	{
		cf = _cf;
	}

	void SetIndex(int _index)
	{
		index = _index;
	}

	Monom operator +(const Monom& _m)
	{
		if (index == _m.index)
		{
			Monom result(cf + _m.cf, index);

			return result;
		}
		else
		{
			throw "ERROR: index isn`t eq";
		}
	}

	Monom operator *(const Monom& _m)
	{
		Monom result;
		size_t a, b, c;

		result.cf = cf * _m.cf;
		result.index = index + _m.index;

		a = index / 100 + _m.index / 100;
		b = index % 100 / 10 + _m.index % 100 / 10;
		c = index % 10 + _m.index % 10;
		if ((a > 9) || (b > 9) || (c > 9))
		{
			result.index = ERR_DEG;
		}

		return result;
	}

	Monom& operator=(const Monom& _m) 
	{
		cf = _m.cf;
		index = _m.index;

		return *this;
	}

	int operator==(const Monom& _m) const 
	{
		return (index == _m.index);
	}

	int operator<(const Monom& _m) const
	{
		return (index < _m.index);
	}

	int operator>(const Monom& _m) const
	{
		return index > _m.index;
	}
};
