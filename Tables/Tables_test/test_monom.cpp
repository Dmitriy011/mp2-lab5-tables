#include "pch.h"

#include "..\\Include\\Monom.h"

TEST(Monom, can_create_default_monom_int)
{
	ASSERT_NO_THROW(Monom<int> a);
}

TEST(Monom, can_create_default_monom_float)
{
	ASSERT_NO_THROW(Monom<float> a);
}

TEST(Monom, can_create_monom_int_ñf1_index1)
{
	ASSERT_NO_THROW(Monom<int> a(1, 1));
}

TEST(Monom, can_create_monom_CFfloat_index1)
{
	ASSERT_NO_THROW(Monom<float> a(1.5f, 1));
}

TEST(Monom, can_create_monom_int_ñf10_index10)
{
	ASSERT_NO_THROW(Monom<int> a(10, 10));
}

TEST(Monom, can_create_monom_CFfloat_index10)
{
	ASSERT_NO_THROW(Monom<float> a(10.5, 10));
}

TEST(Monom, can_create_monom_int_ñf100_index100)
{
	ASSERT_NO_THROW(Monom<int> a(100, 100));
}

TEST(Monom, can_create_monom_CFfloat_index100)
{
	ASSERT_NO_THROW(Monom<int> a(100.5f, 100));
}

TEST(Monom, cant_create_monom_int_index1000)
{
	ASSERT_ANY_THROW(Monom<int> a(1, 1000));
}

TEST(Monom, cant_create_monom_CFfloat_index1000)
{
	ASSERT_ANY_THROW(Monom<float> a(1.5f, 1000));
}

TEST(Monom, cant_create_monom_int_index_minus1)
{
	ASSERT_ANY_THROW(Monom<int> a(1, -1));
}

TEST(Monom, cant_create_monom_CFfloat_index_minus1)
{
	ASSERT_ANY_THROW(Monom<float> a(1.5f, -1));
}

TEST(Monom, can_init_created_default_monom_int_to_default_cf_and_index)
{
	Monom<int> a;

	ASSERT_NO_THROW(a.init(1, 0));
}

TEST(Monom, can_init_created_default_monom_CFfloat_to_default_cf_and_index)
{
	Monom<float> a;

	ASSERT_NO_THROW(a.init(1.5f, 0));
}

TEST(Monom, can_init_created_default_monom_int_to_cf1_index1)
{
	Monom<int> a;

	ASSERT_NO_THROW(a.init(1, 1));
}

TEST(Monom, can_init_created_default_float_monom_to_CFfloat_index1)
{
	Monom<float> a;

	ASSERT_NO_THROW(a.init(1.5f, 1));
}

TEST(Monom, can_init_created_default_monom_int_to_cf10_index10)
{
	Monom<int> a;

	ASSERT_NO_THROW(a.init(10, 10));
}

TEST(Monom, can_init_created_default_float_monom_to_CFfloat_index10)
{
	Monom<float> a;

	ASSERT_NO_THROW(a.init(10.5, 10));
}

TEST(Monom, can_init_created_default_monom_int_to_cf100_index100)
{
	Monom<int> a;

	ASSERT_NO_THROW(a.init(100, 100));
}

TEST(Monom, can_init_created_default_float_monom_to_CFfloat_index100)
{
	Monom<float> a;

	ASSERT_NO_THROW(a.init(100.5, 100));
}

TEST(Monom, cant_init_created_default_monom_int_to_cf1_index1000)
{
	Monom<int> a;

	ASSERT_NO_THROW(a.init(1, 100));
}

TEST(Monom, cant_init_created_default_float_monom_to_CFfloat_index1000)
{
	Monom<float> a;

	ASSERT_NO_THROW(a.init(1.5, 100));
}

TEST(Monom, can_init_created_monom_cf1_index1_int_to_same)
{
	Monom<int> a(1, 1);

	ASSERT_NO_THROW(a.init(1, 1));
}

TEST(Monom, can_init_created_monom_CFfloat_index1_to_same)
{
	Monom<float> a(1.5, 1);

	ASSERT_NO_THROW(a.init(1.5, 1));
}

TEST(Monom, can_init_created_monom_cf1_index10_int_to_same)
{
	Monom<int> a(10, 10);

	ASSERT_NO_THROW(a.init(10, 10));
}

TEST(Monom, can_init_created_monom_CFfloat_index10_to_same)
{
	Monom<float> a(1.5, 1);

	ASSERT_NO_THROW(a.init(10.5, 10));
}

TEST(Monom, can_init_created_monom_cf1_index100_int_to_same)
{
	Monom<int> a(100, 100);

	ASSERT_NO_THROW(a.init(100, 100));
}

TEST(Monom, can_init_created_monom_CFfloat_index100_to_same)
{
	Monom<float> a(100.5, 100);

	ASSERT_NO_THROW(a.init(100.5, 100));
}

TEST(Monom, cant_init_created_default_monom_int_to_default_cf_and_index1000)
{
	Monom<int> a;

	ASSERT_ANY_THROW(a.init(1, 1000));
}

TEST(Monom, cant_init_created_default_monom_CFfloat_to_default_cf_and_index1000)
{
	Monom<float> a;

	ASSERT_ANY_THROW(a.init(1, 1000));
}

TEST(Monom, cant_init_created_monom_CFfloat_index1_to_index1000)
{
	Monom<float> a(1.5, 1);

	ASSERT_ANY_THROW(a.init(1.5, 1000));
}

TEST(Monom, cant_init_created_monom_cf1_index10_int_to_index1000)
{
	Monom<int> a(10, 10);

	ASSERT_ANY_THROW(a.init(10, 1000));
}

TEST(Monom, cant_init_created_monom_CFfloat_index10_to_index1000)
{
	Monom<float> a(1.5, 1);

	ASSERT_ANY_THROW(a.init(10.5, 1000));
}

TEST(Monom, cant_init_created_monom_cf1_index100_int_to_index1000)
{
	Monom<int> a(100, 100);

	ASSERT_ANY_THROW(a.init(100, 1000));
}

TEST(Monom, cant_init_created_monom_CFfloat_index100_to_index1000)
{
	Monom<float> a(100.5, 100);

	ASSERT_ANY_THROW(a.init(100.5, 1000));
}

TEST(Monom, can_get_index1_int_monom)
{
	Monom<int> a(1, 1);

	ASSERT_NO_THROW(a.GetIndex());
}

TEST(Monom, can_get_index1_float_monom_cfFloat)
{
	Monom<float> a(1.5, 1);

	ASSERT_NO_THROW(a.GetIndex());
}

TEST(Monom, can_get_index10_int_monom)
{
	Monom<int> a(10, 10);

	ASSERT_NO_THROW(a.GetIndex());
}

TEST(Monom, can_get_index10_float_monom_cfFloat)
{
	Monom<float> a(10.5, 10);

	ASSERT_NO_THROW(a.GetIndex());
}

TEST(Monom, can_get_index100_int_monom)
{
	Monom<int> a(100, 100);

	ASSERT_NO_THROW(a.GetIndex());
}

TEST(Monom, can_get_index100_float_monom_cfFloat)
{
	Monom<float> a(100.5, 100);

	ASSERT_NO_THROW(a.GetIndex());
}

TEST(Monom, compare_getting_index1_int_monom)
{
	Monom<int> a(1, 1);

	EXPECT_EQ(a.GetIndex(), 1);
}

TEST(Monom, compare_getting_index1_float_monom_cfFloat)
{
	Monom<float> a(1.5, 1);

	EXPECT_EQ(a.GetIndex(), 1);
}

TEST(Monom, compare_getting_index10_int_monom)
{
	Monom<int> a(10, 10);

	EXPECT_EQ(a.GetIndex(), 10);
}

TEST(Monom, compare_getting_index10_float_monom_cfFloat)
{
	Monom<float> a(10.5, 10);

	EXPECT_EQ(a.GetIndex(), 10);
}

TEST(Monom, compare_getting_index100_int_monom)
{
	Monom<int> a(100, 100);

	EXPECT_EQ(a.GetIndex(), 100);
}

TEST(Monom, compare_getting_index100_float_monom_cfFloat)
{
	Monom<float> a(100.5, 100);

	EXPECT_EQ(a.GetIndex(), 100);
}

TEST(Monom, can_get_cf_int_monom_index1)
{
	Monom<int> a(1, 1);

	ASSERT_NO_THROW(a.GetIndex());
}

TEST(Monom, can_get_CFfloat_monom_index1)
{
	Monom<float> a(1.5, 1);

	ASSERT_NO_THROW(a.GetIndex());
}

TEST(Monom, can_get_cf_int_monom_index10)
{
	Monom<int> a(10, 10);

	ASSERT_NO_THROW(a.GetIndex());
}

TEST(Monom, can_get_CFfloat_monom_index10)
{
	Monom<float> a(10.5, 10);

	ASSERT_NO_THROW(a.GetIndex());
}

TEST(Monom, can_get_cf_int_monom_index100)
{
	Monom<int> a(100, 100);

	ASSERT_NO_THROW(a.GetIndex());
}

TEST(Monom, can_get_CFfloat_monom_index100)
{
	Monom<float> a(100.5, 100);

	ASSERT_NO_THROW(a.GetIndex());
}

TEST(Monom, compare_getting_cf_int_monom_index1)
{
	Monom<int> a(1, 1);

	EXPECT_EQ(a.GetCf(), 1);
}

TEST(Monom, compare_getting_CFfloat_monom_index1)
{
	Monom<float> a(1.5, 1);

	EXPECT_EQ(a.GetCf(), 1.5);
}

TEST(Monom, compare_getting_cf_int_monom_index10)
{
	Monom<int> a(10, 10);

	EXPECT_EQ(a.GetCf(), 10);
}

TEST(Monom, compare_getting_CFfloat_int_monom_index10)
{
	Monom<float> a(10.5, 10);

	EXPECT_EQ(a.GetCf(), 10.5);
}

TEST(Monom, compare_getting_cf_int_monom_index100)
{
	Monom<int> a(100, 100);

	EXPECT_EQ(a.GetCf(), 100);
}

TEST(Monom, compare_getting_CFfloat_monom_index100)
{
	Monom<float> a(100.5, 100);

	EXPECT_EQ(a.GetCf(), 100.5);
}

TEST(Monom, can_set_same_index_to_default_int_monom)
{
	Monom<int> a(1, 1);

	ASSERT_NO_THROW(a.SetIndex(1));
}

TEST(Monom, can_set_same_index_float_monom)
{
	Monom<float> a(1.5, 1);

	ASSERT_NO_THROW(a.SetIndex(1));
}

TEST(Monom, can_set_index10_to_default_int_monom)
{
	Monom<int> a(1, 1);

	ASSERT_NO_THROW(a.SetIndex(10));
}

TEST(Monom, can_set_index10_float_monom)
{
	Monom<float> a(1.5, 1);

	ASSERT_NO_THROW(a.SetIndex(10));
}

TEST(Monom, can_set_index100_to_default_int_monom)
{
	Monom<int> a(1, 0);

	ASSERT_NO_THROW(a.SetIndex(100));
}

TEST(Monom, can_set_index100_float_default_monom)
{
	Monom<float> a(1.5, 0);

	ASSERT_NO_THROW(a.SetIndex(100));
}

/*
TEST(Monom, cant_set_index1000_to_default_int_monom)
{
	Monom<int> a(1, 0);

	ASSERT_ANY_THROW(a.SetIndex(1000));
}

TEST(Monom, cant_set_index1000_to_default_float_monom)
{
	Monom<float> a(1.5, 0);

	ASSERT_ANY_THROW(a.SetIndex(1000));
}
*/