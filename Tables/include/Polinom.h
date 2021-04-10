#pragma once

#include "Monom.h"

template <class T>
class Polinom
{
public:
	Polinom()
	{

	}

	size_t Get_max_index() const
	{
		return pm.getHead()->value.index;
	}

	void bringing_similar()
	{
		Node<Monom<T>>* tmp1 = pm.getHead();
		Node<Monom<T>>* tmp2 = tmp1->next;

		while (tmp2 != nullptr)
		{
			if (tmp1->value == tmp2->value)
			{
				pm.merge(tmp1, tmp2);
				pm.setSize(pm.getSize() - 1);

				tmp2 = tmp1->next;
			}
			else
			{
				tmp1 = tmp1->next;
				tmp2 = tmp2->next;
			}
		}
	}

	void Input()
	{
		size_t count_monoms;
		size_t _index = 1;
		T _cf;
		Monom<T> m;

		cout << endl << "Set numbers of monoms: " << endl;
		cin >> count_monoms;
		cout << "count of monoms: " << count_monoms << endl;
		for (int i = 0; i < count_monoms; i++)
		{
			cout << "Set coefficient of the monom: ";
			cin >> _cf;
			cout << "coefficient: " << _cf << endl;
			cout << "Set index of monom: " << endl;
			cin >> _index;
			cout << "index: " << _index << endl;

			while ((_index > 999) || (_index < 0))
			{
				cout << "U`ve set index > 999 or _index < 0. Do it again, _index: " << endl;
				cin >> _index;
			}

			if (_cf != 0)
			{
				m.init(_cf, _index);
				pm.add(m);
			}
		}

		bringing_similar();
	}

	friend ostream& operator<<(ostream& ostr, const Polinom<T>& _pm)
	{
		List<Monom<T>> l1 = _pm.pm;
		Node<Monom<T>>* tmp_node = l1.getHead();

		if (_pm.pm.getSize() == 0)
		{
			ostr << 0;
		}
		else
		{
			while (tmp_node != nullptr)
			{
				if (tmp_node != l1.getHead())
				{
					if (tmp_node->value.cf > 0)
					{
						ostr << " +";
					}
				}
				if (tmp_node->value.cf != 1)
				{
					ostr << tmp_node->value.cf << "*";
				}
				if (tmp_node->value.index / 100 != 0)
				{
					ostr << "x^" << tmp_node->value.index / 100;
				}
				if (tmp_node->value.index % 100 / 10 != 0)
				{
					ostr << " y^" << tmp_node->value.index % 100 / 10;
				}
				if (tmp_node->value.index % 10)
				{
					ostr << " z^" << tmp_node->value.index % 10;
				}

				tmp_node = tmp_node->next;
			}
		}

		return ostr;
	}

	Polinom<T>& operator= (List<Monom<T>>& _pm)
	{
		List<Monom<T>>::operator=(_pm);

		return(*this);
	}

	Polinom<T>& operator +(const Polinom<T>& _pm)
	{
		Polinom<T> result;
		Node<Monom<T>>* tmp1 = pm.getHead();
		Node<Monom<T>>* tmp2 = _pm.pm.getHead();
		Monom<T> tmp_m;

		while ((tmp1 != nullptr) && (tmp2 != nullptr))
		{
			if (tmp1->value > tmp2->value)
			{
				result.pm.add(tmp1->value);
				tmp1 = tmp1->next;
			}
			else
			{
				if (tmp1->value == tmp2->value)
				{
					tmp_m = tmp2->value + tmp1->value;
					if (tmp_m.cf != 0)
					{
						result.pm.add(tmp2->value + tmp1->value);
					}

					tmp1 = tmp1->next;
					tmp2 = tmp2->next;
				}
				else
				{
					result.pm.add(tmp2->value);

					tmp2 = tmp2->next;
				}
			}
		}

		if ((tmp1 == nullptr) && (tmp2 != nullptr))
		{
			while (tmp2 != nullptr)
			{
				result.pm.add(tmp2->value);
				tmp2 = tmp2->next;
			}
		}

		if ((tmp1 != nullptr) && (tmp2 == nullptr))
		{
			while (tmp1 != nullptr)
			{
				result.pm.add(tmp1->value);
				tmp1 = tmp1->next;
			}
		}

		return result;
	}

	Polinom<T>& operator *(T _val)
	{
		Polinom<T> result;
		Node<Monom<T>>* tmp = pm.getHead();
		Monom<T> m;

		if (_val != 0)
		{
			while (tmp != nullptr)
			{
				m = tmp->value;
				m.cf *= _val;
				result.pm.add(m);
				tmp = tmp->next;
			}
		}
		else
		{
			m.init(0, 0);
			result.pm.add(m);
		}

		return result;
	}

	Polinom<T>& operator-(Polinom<T>& _pm)
	{
		Polinom<T> tmp;
		Polinom<T> result;

		tmp = (_pm * (-1));
		result = *this + tmp;

		return result;
	}

	Polinom<T> operator *(Polinom<T>& _pm)
	{
		Polinom result;
		Node<Monom<T>>* tmp1 = pm.getHead();
		Node<Monom<T>>* tmp2;
		Monom<T> tmp_m;

		while (tmp1 != nullptr)
		{
			tmp_m = tmp1->value;
			tmp2 = _pm.pm.getHead();

			while (tmp2 != nullptr)
			{
				tmp_m = tmp_m * tmp2->value;
				result.pm.add(tmp_m);
				tmp2 = tmp2->next;
				tmp_m = tmp1->value;
			}

			tmp1 = tmp1->next;
		}

		result.bringing_similar();

		return result;
	}

	List<Monom<T>> pm;
};


