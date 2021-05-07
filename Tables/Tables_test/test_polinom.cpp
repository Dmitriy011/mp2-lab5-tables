#include "pch.h"
#include "..\\Include\\Polinom.h"

#include <vector>

TEST(Polinom, can_create_int_polinom)
{
	ASSERT_NO_THROW(Polinom<int> a);
}

TEST(Polinom, can_create_float_polinom)
{
	ASSERT_NO_THROW(Polinom<float> a);
}

TEST(Polinom, can_add_int_polinom_with_2monom)
{
	Polinom<int> a;
	Polinom<int> b;

	vector<int> _cf1;
	vector<size_t> _index1;
	vector<int> _cf2;
	vector<size_t> _index2;

	_cf1.push_back(1);
	_cf1.push_back(2);
	_index1.push_back(1);
	_index1.push_back(2);

	_cf2.push_back(2);
	_cf2.push_back(4);
	_index2.push_back(1);
	_index2.push_back(3);

	a.init(2, _index1, _cf1);
	b.init(2, _index2, _cf2);

	ASSERT_NO_THROW(a + b);
}

TEST(Polinom, can_add_float_polinom_with_2monom)
{
	Polinom<float> a;
	Polinom<float> b;

	vector<float> _cf1;
	vector<size_t> _index1;
	vector<float> _cf2;
	vector<size_t> _index2;

	_cf1.push_back(1.0f);
	_cf1.push_back(2.0f);
	_index1.push_back(1);
	_index1.push_back(2);

	_cf2.push_back(2.0f);
	_cf2.push_back(4.0f);
	_index2.push_back(1);
	_index2.push_back(3);

	a.init(2, _index1, _cf1);
	b.init(2, _index2, _cf2);

	ASSERT_NO_THROW(a + b);
}

TEST(Polinom, can_multi_int_polinom_with_2monom)
{
	Polinom<int> a;
	Polinom<int> b;

	vector<int> _cf1;
	vector<size_t> _index1;
	vector<int> _cf2;
	vector<size_t> _index2;

	_cf1.push_back(1);
	_cf1.push_back(2);
	_index1.push_back(1);
	_index1.push_back(2);

	_cf2.push_back(2);
	_cf2.push_back(4);
	_index2.push_back(1);
	_index2.push_back(3);

	a.init(2, _index1, _cf1);
	b.init(2, _index2, _cf2);

	ASSERT_NO_THROW(a * b);
}

TEST(Polinom, can_multi_float_polinom_with_2monom)
{
	Polinom<float> a;
	Polinom<float> b;

	vector<float> _cf1;
	vector<size_t> _index1;
	vector<float> _cf2;
	vector<size_t> _index2;

	_cf1.push_back(1.0f);
	_cf1.push_back(2.0f);
	_index1.push_back(1);
	_index1.push_back(2);

	_cf2.push_back(2.0f);
	_cf2.push_back(4.0f);
	_index2.push_back(1);
	_index2.push_back(3);

	a.init(2, _index1, _cf1);
	b.init(2, _index2, _cf2);

	ASSERT_NO_THROW(a * b);
}

TEST(Polinom, can_sub_int_polinom_with_2monom)
{
	Polinom<int> a;
	Polinom<int> b;

	vector<int> _cf1;
	vector<size_t> _index1;
	vector<int> _cf2;
	vector<size_t> _index2;

	_cf1.push_back(1);
	_cf1.push_back(2);
	_index1.push_back(1);
	_index1.push_back(2);

	_cf2.push_back(2);
	_cf2.push_back(4);
	_index2.push_back(1);
	_index2.push_back(3);

	a.init(2, _index1, _cf1);
	b.init(2, _index2, _cf2);

	ASSERT_NO_THROW(a - b);
}

TEST(Polinom, can_sub_float_polinom_with_2monom)
{
	Polinom<float> a;
	Polinom<float> b;

	vector<float> _cf1;
	vector<size_t> _index1;
	vector<float> _cf2;
	vector<size_t> _index2;

	_cf1.push_back(1.0f);
	_cf1.push_back(2.0f);
	_index1.push_back(1);
	_index1.push_back(2);

	_cf2.push_back(2.0f);
	_cf2.push_back(4.0f);
	_index2.push_back(1);
	_index2.push_back(3);

	a.init(2, _index1, _cf1);
	b.init(2, _index2, _cf2);

	ASSERT_NO_THROW(a - b);
}

TEST(Polinom, can_bringing_similar_after_add_int_polinom_with_2monom)
{
	Polinom<int> a;
	Polinom<int> b;
	Polinom<int> c;

	vector<int> _cf1;
	vector<size_t> _index1;
	vector<int> _cf2;
	vector<size_t> _index2;

	_cf1.push_back(1);
	_cf1.push_back(2);
	_index1.push_back(1);
	_index1.push_back(2);

	_cf2.push_back(2);
	_cf2.push_back(4);
	_index2.push_back(1);
	_index2.push_back(3);

	a.init(2, _index1, _cf1);
	b.init(2, _index2, _cf2);

	c = a + b;

	ASSERT_NO_THROW(c.bringing_similar());
}

TEST(Polinom, can_bringing_similar_after_add_float_polinom_with_2monom)
{
	Polinom<float> a;
	Polinom<float> b;
	Polinom<float> c;

	vector<float> _cf1;
	vector<size_t> _index1;
	vector<float> _cf2;
	vector<size_t> _index2;

	_cf1.push_back(1.0f);
	_cf1.push_back(2.0f);
	_index1.push_back(1);
	_index1.push_back(2);

	_cf2.push_back(2.0f);
	_cf2.push_back(4.0f);
	_index2.push_back(1);
	_index2.push_back(3);

	a.init(2, _index1, _cf1);
	b.init(2, _index2, _cf2);

	c = a + b;

	ASSERT_NO_THROW(c.bringing_similar());
}


