#include "pch.h"

#include "..\\Include\\Hash_table.h"

#include <string>
using namespace std;

TEST(Hash_table, can_create_default_unorderedMASSIVE_valueINT_keyINT)
{
	Hash_table<int> a;
	ASSERT_NO_THROW();
}
TEST(Hash_table, can_create_default_unorderedMASSIVE_valueSTRING_keySTRING)
{
	Hash_table<string> a;
	ASSERT_NO_THROW();
}
TEST(Hash_table, can_create_default_unorderedMASSIVE_valueFLOAT_keyFLOAT)
{
	Hash_table<float> a;
	ASSERT_NO_THROW();
}

TEST(Hash_table, can_create_unorderedMASSIVE_valueINT_keyINT_size1)
{
	Hash_table<int> a(1);
	ASSERT_NO_THROW();
}
TEST(Hash_table, can_create_unorderedMASSIVE_valueSTRING_keySTRING_size1)
{
	Hash_table<string> a(1);
	ASSERT_NO_THROW();
}
TEST(Hash_table, can_create_unorderedMASSIVE_valueFLOAT_keyFLOAT_size1)
{
	Hash_table<float> a(1);
	ASSERT_NO_THROW();
}
TEST(Hash_table, can_create_unorderedMASSIVE_valueINT_keyINT_size10)
{
	Hash_table<int> a(10);
	ASSERT_NO_THROW();
}
TEST(Hash_table, can_create_unorderedMASSIVE_valueSTRING_keySTRING_size10)
{
	Hash_table<string> a(10);
	ASSERT_NO_THROW();
}
TEST(Hash_table, can_create_unorderedMASSIVE_valueFLOAT_keyFLOAT_size10)
{
	Hash_table<float> a(10);
	ASSERT_NO_THROW();
}
TEST(Hash_table, can_create_unorderedMASSIVE_valueINT_keyINT_size999)
{
	Hash_table<int> a(999);
	ASSERT_NO_THROW();
}
TEST(Hash_table, can_create_unorderedMASSIVE_valueSTRING_keySTRING_size999)
{
	Hash_table<string> a(999);
	ASSERT_NO_THROW();
}
TEST(Hash_table, can_create_unorderedMASSIVE_valueFLOAT_keyFLOAT_size999)
{
	Hash_table<float> a(999);
	ASSERT_NO_THROW();
}

