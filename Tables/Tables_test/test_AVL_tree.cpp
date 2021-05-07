#include "pch.h"

#include "..\\Include\\AVL_tree.h"

#include <string>
using namespace std;

TEST(AVL_tree, can_create_default_AVL_tree_valueINT_keyINT)
{
	AVL_tree<int, int> a;
	ASSERT_NO_THROW();
}
TEST(AVL_tree, can_create_default_AVL_tree_valueSTRING_keySTRING)
{
	AVL_tree<string, string> a;
	ASSERT_NO_THROW();
}
TEST(AVL_tree, can_create_default_AVL_tree_valueFLOAT_keyFLOAT)
{
	AVL_tree<float, float> a;
	ASSERT_NO_THROW();
}
TEST(AVL_tree, can_create_default_AVL_tree_valueINT_keyFLOAT)
{
	AVL_tree<int, float> a;
	ASSERT_NO_THROW();
}
TEST(AVL_tree, can_create_default_AVL_tree_valueINT_keySTRING)
{
	AVL_tree<int, string> a;
	ASSERT_NO_THROW();
}
TEST(AVL_tree, can_create_default_AVL_tree_valueFLOAT_keyINT_)
{
	AVL_tree<float, int> a;
	ASSERT_NO_THROW();
}
TEST(AVL_tree, can_create_default_AVL_treeE_valueFLOAT_keySTRING)
{
	AVL_tree<float, string> a;
	ASSERT_NO_THROW();
}
TEST(AVL_tree, can_create_default_AVL_tree_valueSTRING_keyINT)
{
	AVL_tree<string, int> a;
	ASSERT_NO_THROW();
}
TEST(AVL_tree, can_create_default_AVL_tree_valueSTRING_keyFLOAT)
{
	AVL_tree<string, float> a;
	ASSERT_NO_THROW();
}
