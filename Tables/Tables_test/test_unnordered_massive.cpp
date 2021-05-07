#include "pch.h"

#include "..\\Include\\unordered_massive.h"

#include <string>
using namespace std;

TEST(unordered_massive, can_create_unorderedMASSIVE_valueINT_keyINT_size1)
{
	Unordered_massive<int, int> a (1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_create_unorderedMASSIVE_valueINT_keyINT_size10)
{
	Unordered_massive<int, int> a(10);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_create_unorderedMASSIVE_valueINT_keyINT_size100)
{
	Unordered_massive<int, int> a(100);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_create_unorderedMASSIVE_valueSTRING_keySTRING_size1)
{
	Unordered_massive<string, string> a(1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_create_unorderedMASSIVE_valueSTRING_keySTRING_size10)
{
	Unordered_massive<string, string> a(10);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_create_unorderedMASSIVE_valueSTRING_keySTRING_size100)
{
	Unordered_massive<string, string> a(100);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_create_unorderedMASSIVE_valueFLOAT_keyFLOAT_size1)
{
	Unordered_massive<float, float> a(1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_create_unorderedMASSIVE_valueFLOAT_keyFLOAT_size10)
{
	Unordered_massive<float, float> a(10);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_create_unorderedMASSIVE_valueFLOAT_keyFLOAT_size100)
{
	Unordered_massive<float, float> a(100);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_create_unorderedMASSIVE_valueINT_keyFLOAT_size1)
{
	Unordered_massive<int, float> a(1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_create_unorderedMASSIVE_valueINT_keyFLOAT_size10)
{
	Unordered_massive<int, float> a(10);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_create_unorderedMASSIVE_valueINT_keyFLOAT_size100)
{
	Unordered_massive<int, float> a(100);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_create_unorderedMASSIVE_valueINT_keySTRING_size1)
{
	Unordered_massive<int, string> a(1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_create_unorderedMASSIVE_valueINT_keySTRING_size10)
{
	Unordered_massive<int, string> a(10);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_create_unorderedMASSIVE_valueINT_keySTRING_size100)
{
	Unordered_massive<int, string> a(100);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_create_unorderedMASSIVE_valueFLOAT_keyINT_size1)
{
	Unordered_massive<float, int> a(1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_create_unorderedMASSIVE_valueFLOAT_keyINT_size10)
{
	Unordered_massive<float, int> a(10);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_create_unorderedMASSIVE_valueFLOAT_keyINT_size100)
{
	Unordered_massive<float, int> a(100);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_create_unorderedMASSIVE_valueFLOAT_keySTRING_size1)
{
	Unordered_massive<float, string> a(1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_create_unorderedMASSIVE_valueFLOAT_keySTRING_size10)
{
	Unordered_massive<float, string> a(10);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_create_unorderedMASSIVE_valueFLOAT_keySTRING_size100)
{
	Unordered_massive<float, string> a(100);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_create_unorderedMASSIVE_valueSTRING_keyINT_size1)
{
	Unordered_massive<string, int> a(1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_create_unorderedMASSIVE_valueSTRING_keyINT_size10)
{
	Unordered_massive<string, int> a(10);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_create_unorderedMASSIVE_valueSTRING_keyINT_size100)
{
	Unordered_massive<string, int> a(100);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_create_unorderedMASSIVE_valueSTRING_keyFLOAT_size1)
{
	Unordered_massive<string, float> a(1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_create_unorderedMASSIVE_valueSTRING_keyFLOAT_size10)
{
	Unordered_massive<string, float> a(10);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_create_unorderedMASSIVE_valueSTRING_keyFLOAT_size100)
{
	Unordered_massive<string, float> a(100);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueINT_keyINT_size1)
{
	Unordered_massive<int, int> a(1);
	row_unnordered_massive<int, int> r1(5, 5);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueINT_keyINT_size10)
{
	Unordered_massive<int, int> a(10);
	row_unnordered_massive<int, int> r1(5, 5);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueINT_keyINT_size100)
{
	Unordered_massive<int, int> a(100);
	row_unnordered_massive<int, int> r1(5, 5);
	a.insert(r1);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueSTRING_keySTRING_size1)
{
	Unordered_massive<string, string> a(1);
	row_unnordered_massive<string, string> r1("aq", "aq");
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueSTRING_keySTRING_size10)
{
	Unordered_massive<string, string> a(10);
	row_unnordered_massive<string, string> r1("aq", "aq");
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueSTRING_keySTRING_size100)
{
	Unordered_massive<string, string> a(100);
	row_unnordered_massive<string, string> r1("aq", "aq");
	a.insert(r1);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueFLOAT_keyFLOAT_size1)
{
	Unordered_massive<float, float> a(1);
	row_unnordered_massive<float, float> r1(0.1f, 0.5f);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueFLOAT_keyFLOAT_size10)
{
	Unordered_massive<float, float> a(10);
	row_unnordered_massive<float, float> r1(0.1f, 0.5f);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueFLOAT_keyFLOAT_size100)
{
	Unordered_massive<float, float> a(100);
	row_unnordered_massive<float, float> r1(0.1f, 0.5f);
	a.insert(r1);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueINT_keyFLOAT_size1)
{
	Unordered_massive<int, float> a(1);
	row_unnordered_massive<int, float> r1(1, 0.5f);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueINT_keyFLOAT_size10)
{
	Unordered_massive<int, float> a(10);
	row_unnordered_massive<int, float> r1(1, 0.5f);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueINT_keyFLOAT_size100)
{
	Unordered_massive<int, float> a(100); 
	row_unnordered_massive<int, float> r1(1, 0.5f);
	a.insert(r1);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueINT_keySTRING_size1)
{
	Unordered_massive<int, string> a(1);
	row_unnordered_massive<int, string> r1(1, "qq");
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueINT_keySTRING_size10)
{
	Unordered_massive<int, string> a(10);
	row_unnordered_massive<int, string> r1(1, "qq");
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueINT_keySTRING_size100)
{
	Unordered_massive<int, string> a(100);
	row_unnordered_massive<int, string> r1(1, "qq");
	a.insert(r1);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueFLOAT_keyINT_size1)
{
	Unordered_massive<float, int> a(1);
	row_unnordered_massive<float, int> r1(1.0f, 1);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueFLOAT_keyINT_size10)
{
	Unordered_massive<float, int> a(10);
	row_unnordered_massive<float, int> r1(1.0f, 1);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueFLOAT_keyINT_size100)
{
	Unordered_massive<float, int> a(100);
	row_unnordered_massive<float, int> r1(1.0f, 1);
	a.insert(r1);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueFLOAT_keySTRING_size1)
{
	Unordered_massive<float, string> a(1);
	row_unnordered_massive<float, string> r1(1.0f, "qq");
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueFLOAT_keySTRING_size10)
{
	Unordered_massive<float, string> a(10);
	row_unnordered_massive<float, string> r1(1.0f, "qq");
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueFLOAT_keySTRING_size100)
{
	Unordered_massive<float, string> a(100);
	row_unnordered_massive<float, string> r1(1.0f, "qq");
	a.insert(r1);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueSTRING_keyINT_size1)
{
	Unordered_massive<string, int> a(1);
	row_unnordered_massive<string, int> r1("qq", 1);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueSTRING_keyINT_size10)
{
	Unordered_massive<string, int> a(10);
	row_unnordered_massive<string, int> r1("qq", 1);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueSTRING_keyINT_size100)
{
	Unordered_massive<string, int> a(100);
	row_unnordered_massive<string, int> r1("qq", 1);
	a.insert(r1);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueSTRING_keyFLOAT_size1)
{
	Unordered_massive<string, float> a(1);
	row_unnordered_massive<string, float> r1("qq", 1.5f);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueSTRING_keyFLOAT_size10)
{
	Unordered_massive<string, float> a(10);
	row_unnordered_massive<string, float> r1("qq", 1.5f);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert_to_unorderedMASSIVE_valueSTRING_keyFLOAT_size100)
{
	Unordered_massive<string, float> a(100);
	row_unnordered_massive<string, float> r1("qq", 1.5f);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueINT_keyINT_size1)
{
	Unordered_massive<int, int> a(1);
	row_unnordered_massive<int, int> r1(5, 5);
	row_unnordered_massive<int, int> r2(5, 6);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueINT_keyINT_size10)
{
	Unordered_massive<int, int> a(10);
	row_unnordered_massive<int, int> r1(5, 5);
	row_unnordered_massive<int, int> r2(5, 6);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueINT_keyINT_size100)
{
	Unordered_massive<int, int> a(100);
	row_unnordered_massive<int, int> r1(5, 5);
	row_unnordered_massive<int, int> r2(5, 6);
	a.insert(r1);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueSTRING_keySTRING_size1)
{
	Unordered_massive<string, string> a(1);
	row_unnordered_massive<string, string> r1("aq", "aq");
	row_unnordered_massive<string, string> r2("aq", "aqq");
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueSTRING_keySTRING_size10)
{
	Unordered_massive<string, string> a(10);
	row_unnordered_massive<string, string> r1("aq", "aq");
	row_unnordered_massive<string, string> r2("aq", "aqq");
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueSTRING_keySTRING_size100)
{
	Unordered_massive<string, string> a(100);
	row_unnordered_massive<string, string> r1("aq", "aq");
	row_unnordered_massive<string, string> r2("aq", "aqq");
	a.insert(r1);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueFLOAT_keyFLOAT_size1)
{
	Unordered_massive<float, float> a(1);
	row_unnordered_massive<float, float> r1(0.1f, 0.5f);
	row_unnordered_massive<float, float> r2(0.1f, 0.8f);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_inser2t_to_unorderedMASSIVE_valueFLOAT_keyFLOAT_size10)
{
	Unordered_massive<float, float> a(10);
	row_unnordered_massive<float, float> r1(0.1f, 0.5f);
	row_unnordered_massive<float, float> r2(0.1f, 0.8f);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueFLOAT_keyFLOAT_size100)
{
	Unordered_massive<float, float> a(100);
	row_unnordered_massive<float, float> r1(0.1f, 0.5f);
	row_unnordered_massive<float, float> r2(0.1f, 0.8f);
	a.insert(r1);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueINT_keyFLOAT_size1)
{
	Unordered_massive<int, float> a(1);
	row_unnordered_massive<int, float> r1(1, 0.5f);
	row_unnordered_massive<int, float> r2(1, 0.8f);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueINT_keyFLOAT_size10)
{
	Unordered_massive<int, float> a(10);
	row_unnordered_massive<int, float> r1(1, 0.5f);
	row_unnordered_massive<int, float> r2(1, 0.8f);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueINT_keyFLOAT_size100)
{
	Unordered_massive<int, float> a(100);
	row_unnordered_massive<int, float> r1(1, 0.5f);
	row_unnordered_massive<int, float> r2(1, 0.8f);
	a.insert(r1);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueINT_keySTRING_size1)
{
	Unordered_massive<int, string> a(1);
	row_unnordered_massive<int, string> r1(1, "qq");
	row_unnordered_massive<int, string> r2(1, "qqq");
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueINT_keySTRING_size10)
{
	Unordered_massive<int, string> a(10);
	row_unnordered_massive<int, string> r1(1, "qq");
	row_unnordered_massive<int, string> r2(1, "qqq");
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueINT_keySTRING_size100)
{
	Unordered_massive<int, string> a(100);
	row_unnordered_massive<int, string> r1(1, "qq");
	row_unnordered_massive<int, string> r2(1, "qqq");
	a.insert(r1);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueFLOAT_keyINT_size1)
{
	Unordered_massive<float, int> a(1);
	row_unnordered_massive<float, int> r1(1.0f, 1);
	row_unnordered_massive<float, int> r2(1.0f, 2);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueFLOAT_keyINT_size10)
{
	Unordered_massive<float, int> a(10);
	row_unnordered_massive<float, int> r1(1.0f, 1);
	row_unnordered_massive<float, int> r2(1.0f, 2);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueFLOAT_keyINT_size100)
{
	Unordered_massive<float, int> a(100);
	row_unnordered_massive<float, int> r1(1.0f, 1);
	row_unnordered_massive<float, int> r2(1.0f, 2);
	a.insert(r1);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueFLOAT_keySTRING_size1)
{
	Unordered_massive<float, string> a(1);
	row_unnordered_massive<float, string> r1(1.0f, "qq");
	row_unnordered_massive<float, string> r2(1.0f, "qqq");
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueFLOAT_keySTRING_size10)
{
	Unordered_massive<float, string> a(10);
	row_unnordered_massive<float, string> r1(1.0f, "qq");
	row_unnordered_massive<float, string> r2(1.0f, "qqq");
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueFLOAT_keySTRING_size100)
{
	Unordered_massive<float, string> a(100);
	row_unnordered_massive<float, string> r1(1.0f, "qq");
	row_unnordered_massive<float, string> r2(1.0f, "qqq");
	a.insert(r1);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueSTRING_keyINT_size1)
{
	Unordered_massive<string, int> a(1);
	row_unnordered_massive<string, int> r1("qq", 1);
	row_unnordered_massive<string, int> r2("qq", 2);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueSTRING_keyINT_size10)
{
	Unordered_massive<string, int> a(10);
	row_unnordered_massive<string, int> r1("qq", 1);
	row_unnordered_massive<string, int> r2("qq", 2);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueSTRING_keyINT_size100)
{
	Unordered_massive<string, int> a(100);
	row_unnordered_massive<string, int> r1("qq", 1);
	row_unnordered_massive<string, int> r2("qq", 2);
	a.insert(r1);
	ASSERT_NO_THROW();
}

TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueSTRING_keyFLOAT_size1)
{
	Unordered_massive<string, float> a(1);
	row_unnordered_massive<string, float> r1("qq", 1.5f);
	row_unnordered_massive<string, float> r2("qq", 1.3f);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueSTRING_keyFLOAT_size10)
{
	Unordered_massive<string, float> a(10);
	row_unnordered_massive<string, float> r1("qq", 1.5f);
	row_unnordered_massive<string, float> r2("qq", 1.3f);
	a.insert(r1);
	ASSERT_NO_THROW();
}
TEST(unordered_massive, can_insert2_to_unorderedMASSIVE_valueSTRING_keyFLOAT_size100)
{
	Unordered_massive<string, float> a(100);
	row_unnordered_massive<string, float> r1("qq", 1.5f);
	row_unnordered_massive<string, float> r2("qq", 1.3f);
	a.insert(r1);
	ASSERT_NO_THROW();
}


