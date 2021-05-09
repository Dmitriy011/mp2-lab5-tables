#include "iostream"

#include "Polinom.h"
#include "Unordered_massive.h"
#include "AVL_tree.h"
#include "Hash_table.h"

using namespace std;


int main()
{
	bool isCountinue = true;
	int decision_1 = 0;
	int decision_2 = 0;
	int existing_numberPolinom;
	size_t key_avl_tree = 0;
	string key_unrdMass_hashTable = "";

	Polinom<int> A;
	Polinom<int> B;
	Polinom<int> C;
	Polinom<int> arr[3] = { A, B, C };
	cout << "Init polinom A";
	A.Input();
	cout << endl << "Init polinom B";
	B.Input();
	cout << endl << "Now y have 2 polinoms: A and B." << endl;

	cout << "Unordered_massive, Hash_table has string key. AVL_tree has size_t";
	cout << endl  <<  "size hash-table: 999" << endl << "Creating.." << endl << endl;
	Unordered_massive<Polinom<int>, string> u1;
	AVL_tree<Polinom<int>, size_t> a1;
	Hash_table<Polinom<int>> h1;

	while (isCountinue)
	{
		cout << "Choice, what u want to do:" << endl << "1.Add A+B" << endl << "2.Sub A-B" << endl << "3.Sub B-A" << endl << "4.Multi A*B" << endl << "5.Working with tables" << endl  << "6.Exit pogramm" <<  endl << "Choice:";
		cin >> decision_1;
		cout << endl;
		switch (decision_1)
		{
		case 1:
		{
			C = A + B;
			cout << "Add: C = A + B: " << C << endl << "And now u have 3 default polinoms: A, B, C" << endl << endl;

			break;
		}
		case 2:
		{
			C = A - B;
			cout << "Minus: C = A - B: " << C << endl << endl << "And now u have 3 default polinoms: A, B, C" << endl << endl;

			break;
		}
		case 3:
		{
			C = B - A;
			cout << "Minus: C = A - B: " << C << endl << "And now u have 3 default polinoms: A, B, C" << endl << endl;

			break;
		}
		case 4:
		{
			C = A * B;
			cout << "Multi: ";
			if (C.Get_max_index() < 999)
			{
				cout << "C = A * B = " << C << endl << "And now u have 3 default polinoms: A, B, C" << endl << endl;
			}
			else
			{
				cout << "C.max_index() > 999" << endl;
			}

			break;
		}
		case 5:
		{
			cout << "What would u like to do:" << endl << "1. Create new Polinom and add to tables" << endl << "2. Add existing polinom to tables" << endl << "3. Remove polinom from tables" << endl << "4. Find polinom in tables" << endl << "5. Exit";
			cout << endl << "Choice: ";
			cin >> decision_2;
			cout << endl;

			switch (decision_2)
			{
			case 1:
			{
				Polinom<int> p1;
				cout << "Create polinom: ";
				p1.Input();
				cout << "polinom: " << p1 << endl;
				cout << "Enter name key for unnorder massive, Hash table and for AVL_Tree" << endl << "Choice for unnorder massive, Hash table: ";
				cin >> key_unrdMass_hashTable;
				cout << "Choice for AVL_Tree: ";
				cin >> key_avl_tree;
				cout << "Adding...";

				cout << endl << endl << "Unnordered massive:" << endl;
				row_unnordered_massive<Polinom<int>, string> tmp_unnorderedMass(p1, key_unrdMass_hashTable);
				u1.insert(tmp_unnorderedMass);
				cout << "Operations:" << u1.operations << endl;
				cout << u1;

				cout <<"AVL_TREE:" << endl;
				Node_AvlTree<Polinom<int>, size_t>* tmp_avl = new Node_AvlTree<Polinom<int>, size_t>(p1, key_avl_tree);
				a1.insert(a1.root, tmp_avl);
				a1.printTree(a1.root);

				cout << endl << "Hash_table:" << endl;
				h1.add(p1, key_unrdMass_hashTable);
				cout << "Operations:" << h1.operations << endl;
				h1.print_all();

				isCountinue = true;

				break;
				
			}
			case 2:
			{
				cout << "Choice existing polinom to add:" << endl << "1. A" << endl << "2. B" << endl << "3. C" << endl << "Choice: ";
				cin >> existing_numberPolinom;
				
				switch (existing_numberPolinom)
				{
				case 1:
				{
					cout << "Enter name key for unnorder massive, Hash table and for AVL_Tree" << endl << "Choice for unnorder massive, Hash table: ";
					cin >> key_unrdMass_hashTable;
					cout << "Choice for AVL_Tree: ";
					cin >> key_avl_tree;
					cout << "Adding...";

					cout << endl << endl << "Unnordered massive:" << endl;
					row_unnordered_massive<Polinom<int>, string> tmp_unnorderedMass(A, key_unrdMass_hashTable);
					u1.insert(tmp_unnorderedMass);
					cout << "Operations:" << u1.operations << endl;
					cout << u1;

					cout << "AVL_TREE:" << endl;
					Node_AvlTree<Polinom<int>, size_t>* tmp_avl = new Node_AvlTree<Polinom<int>, size_t>(A, key_avl_tree);
					a1.insert(a1.root, tmp_avl);
					a1.printTree(a1.root);

					cout << endl << "Hash_table:" << endl;
					h1.add(A, key_unrdMass_hashTable);
					cout << "Operations:" << h1.operations << endl;
					h1.print_all();

					break;
				}
				case 2:
				{
					cout << "Enter name key for unnorder massive, Hash table and for AVL_Tree" << endl << "Choice for unnorder massive, Hash table: ";
					cin >> key_unrdMass_hashTable;
					cout << "Choice for AVL_Tree: ";
					cin >> key_avl_tree;
					cout << "Adding...";

					cout << endl << endl << "Unnordered massive:" << endl;
					row_unnordered_massive<Polinom<int>, string> tmp_unnorderedMass(B, key_unrdMass_hashTable);
					u1.insert(tmp_unnorderedMass);
					cout << "Operations:" << u1.operations << endl;
					cout << u1;

					cout << "AVL_TREE:" << endl;
					Node_AvlTree<Polinom<int>, size_t>* tmp_avl = new Node_AvlTree<Polinom<int>, size_t>(B, key_avl_tree);
					a1.insert(a1.root, tmp_avl);
					a1.printTree(a1.root);

					cout << endl << "Hash_table:";
					h1.add(B, key_unrdMass_hashTable);
					cout << "Operations:" << h1.operations << endl;
					h1.print_all();

					break;
				}
				case 3:
				{
					cout << "Enter name key for unnorder massive, Hash table and for AVL_Tree" << endl << "Choice for unnorder massive, Hash table: ";
					cin >> key_unrdMass_hashTable;
					cout << "Choice for AVL_Tree: ";
					cin >> key_avl_tree;
					cout << "Adding...";

					cout << endl << endl << "Unnordered massive:" << endl;
					row_unnordered_massive<Polinom<int>, string> tmp_unnorderedMass(C, key_unrdMass_hashTable);
					u1.insert(tmp_unnorderedMass);
					cout << "Operations:" << u1.operations << endl;
					cout << u1;

					cout << "AVL_TREE:" << endl;
					Node_AvlTree<Polinom<int>, size_t>* tmp_avl = new Node_AvlTree<Polinom<int>, size_t>(C, key_avl_tree);
					a1.insert(a1.root, tmp_avl);
					a1.printTree(a1.root);

					cout << endl << "Hash_table:" << endl;
					h1.add(C, key_unrdMass_hashTable);
					cout << "Operations:" << h1.operations << endl;
					h1.print_all();

					break;
				}
				}
				

				isCountinue = true;

				break;
			}
			case 3:
			{
				cout << "Enter key for Unordered_massive, Hash_table to remove polinom:";
				cin >> key_unrdMass_hashTable;
				cout << "Enter key for AVL_tree to remove polinom:";
				cin >> key_avl_tree;

				h1.remove(key_unrdMass_hashTable);
				a1.remove(a1.root, key_avl_tree);
				u1.del_el(key_unrdMass_hashTable);
			
				cout << endl << endl << "Unnordered massive:" << endl;
				cout << "Operations:" << u1.operations << endl;
				cout << u1;

				cout << "AVL_TREE:" << endl;
				a1.printTree(a1.root);

				cout << endl << "Hash_table:" << endl;
				cout << "Operations:" << h1.operations << endl;
				h1.print_all();

				break;
			}
			case 4:
			{
				cout << "Enter key for Unordered_massive, Hash_table to find polinom:";
				cin >> key_unrdMass_hashTable;
				cout << "Enter key for AVL_tree to find  polinom:";
				cin >> key_avl_tree;

				cout << endl << "Unnordered massive:";
				cout << u1.find_value(key_unrdMass_hashTable);
				cout << endl << "Operations:" << u1.operations;

				cout << endl << "AVL_TREE:";
				cout << a1.find(a1.root, key_avl_tree);

				cout << endl << "Hash_table:";
				cout << h1.find_el(key_unrdMass_hashTable);
				cout << endl << "Operations:" << h1.operations << endl;
				cout << endl << endl;

				break;
			}
			case 5:
			{
				isCountinue = false;
				break;
			}
			}

			break;
		}
		case 6:
		{
			isCountinue = false;

			break;
		}
		default:
		{
			cout << endl << "Incorrect decision: rechoice" << endl << endl;
			isCountinue = true;
			break;
		}
		}

		/*
		if(isCountinue == false)
		{
		cout << "Would u like to exit program? Tap 1 continue or 0 to end: ";
		cin >> isCountinue;
		}
		*/
		
	}


}



