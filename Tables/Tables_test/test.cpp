#include "pch.h"

#include "List.h"

TEST(List, can_create_list_int)
{
	ASSERT_NO_THROW(List<int> a);
}

TEST(List, create_list_int_AND_compare_head)
{
	List<int> a;

	EXPECT_EQ(a.getHead(), nullptr);
}

TEST(List, create_list_int_AND_compare_tail)
{
	List<int> a;

	EXPECT_EQ(a.getTail(), nullptr);
}

TEST(List, create_list_int_AND_compare_size)
{
	List<int> a;

	EXPECT_EQ(a.getSize(), 0);
}

TEST(List, can_get_head_empty_list)
{
	List<int> a;

	ASSERT_NO_THROW(a.getHead());
}

TEST(List, can_get_head_list_with_1el)
{
	List<int> a;

	a.add(5);

	ASSERT_NO_THROW(a.getHead());
}

TEST(List, can_get_head_list_with_10el)
{
	List<int> a;

	for (size_t i = 1; i < 11; i++)
	{
		a.add(i);
	}

	ASSERT_NO_THROW(a.getHead());
}

TEST(List, compare_get_head_empty_list)
{
	List<int> a;

	EXPECT_EQ(a.getHead(), nullptr);
}

TEST(List, compare_get_prev_head_list_with_1el)
{
	List<int> a;

	a.add(5);

	EXPECT_EQ(a.getHead()->prev, nullptr);
}

TEST(List, compare_get_prev_head_list_with_10el)
{
	List<int> a;

	for (size_t i = 1; i < 11; i++)
	{
		a.add(i);
	}

	EXPECT_EQ(a.getHead()->prev, nullptr);
}

TEST(List, compare_value_head_el_after_get_head_list_with_10el)
{
	List<int> a;

	for (size_t i = 1; i < 11; i++)
	{
		a.add(i);
	}

	EXPECT_EQ(a.getHead()->value, 10);
}

