#pragma once

template <typename ValType, typename KeyType>
struct node_avl 
{
	ValType value;
	KeyType key;
	size_t height;
	node_avl* left;
	node_avl* right;

	node_avl(ValType _value, KeyType _key) 
	{ 
		value = _value;
		key = _key; 
		left = nullptr;
		right = nullptr;
		height = 0;
	}
};

template <class ValType, class KeyType>
class AVL_tree
{
public:
	int operations;
	node_avl<ValType, KeyType>* root;

	AVL_tree();

	node_avl<ValType, KeyType>* insert(node_avl<ValType, KeyType>*& _root, node_avl<ValType, KeyType>*& add_node);
	ValType find(node_avl<ValType, KeyType>*& _root, KeyType _key);
	node_avl<ValType, KeyType>* delete_node(node_avl<ValType, KeyType>*& _root, KeyType _key);
	void printTree(node_avl<ValType, KeyType>*& _root) const;

private:
	void fix_height_after_add(node_avl<ValType, KeyType>*& _root);
	node_avl<ValType, KeyType>* RR(node_avl<ValType, KeyType>*& returned_node);
	size_t get_height_node(node_avl<ValType, KeyType>*& _root) const;
	node_avl<ValType, KeyType>* RL(node_avl<ValType, KeyType>*& returned_node);
	node_avl<ValType, KeyType>* balance(node_avl<ValType, KeyType>*& _root);
	node_avl<ValType, KeyType>* delete_min(node_avl<ValType, KeyType>* _root);
};

template<class ValType, class KeyType>
inline AVL_tree<ValType, KeyType>::AVL_tree()
{
	root = nullptr;
	operations = 0;
}

template<class ValType, class KeyType>
inline ValType AVL_tree<ValType, KeyType>::find(node_avl<ValType, KeyType>* &_root, KeyType _key)
{
	operations++;
	if (_root->key == _key)
	{
		cout << "Operations: " << operations << endl;
		operations = 0;
		return _root->value;
	}

	if (_key < _root->key)
	{
		return find(_root->left, _key);	
	}
	else
	{
		return find(_root->right, _key);
	}
}

template<class ValType, class KeyType>
inline node_avl<ValType, KeyType>* AVL_tree<ValType, KeyType>::insert(node_avl<ValType, KeyType>*& _root, node_avl<ValType, KeyType>*& add_node)
{
	operations++;
	if (_root == nullptr)
	{
		_root = add_node;
		cout << "Operations: " << operations << endl;
		operations = 0;
		return _root;
	}

	if (add_node->key < _root->key)
	{
		_root->left = insert(_root->left, add_node);
	}
	else
	{
		_root->right = insert(_root->right, add_node);
	}

	return balance(_root);
}

template<class ValType, class KeyType>
inline node_avl<ValType, KeyType>* AVL_tree<ValType, KeyType>::delete_node(node_avl<ValType, KeyType>*& _root, KeyType _key)
{
	if (!_root)
	{
		throw "Tree is empty";
	}

	if (_key < _root->key)
	{
		operations++;
		cout << "Operations: " << operations << endl;
		operations = 0;
		_root->left = delete_node(_root->left, _key);
	}
	else
	{
		if (_key > _root->key)
		{
			operations++;
			cout << "Operations: " << operations << endl;
			operations = 0;
			_root->right = delete_node(_root->right, _key);
		}
		else
		{
			operations++;
			node_avl<ValType, KeyType>* tmp1_node_l = _root->left;
			node_avl<ValType, KeyType>* tmp2_node_r = _root->right;

			_root = nullptr;
			delete _root;


			if (!tmp2_node_r)
			{
				return tmp1_node_l;
			}

			node_avl<ValType, KeyType>* min = Get_min(tmp2_node_r);

			min->right = delete_min(tmp2_node_r);
			min->left = tmp1_node_l;

			operations++;
			cout << "Operations: " << operations << endl;
			operations = 0;

			return balance(min);
		}
	}

	return balance(_root);
}

template<class ValType, class KeyType>
inline void AVL_tree<ValType, KeyType>::printTree(node_avl<ValType, KeyType>*& _root) const
{
	if (_root != nullptr)
	{
		cout << _root->key << "  " << _root->value << "  " << endl;
		printTree(_root->left);

		cout << "//";

		printTree(_root->right);
	}
}

template<class ValType, class KeyType>
inline void AVL_tree<ValType, KeyType>::fix_height_after_add(node_avl<ValType, KeyType>*& _root)
{
	size_t height_left = get_height_node(_root->left);
	size_t height_right = get_height_node(_root->right);

	operations++;

	if (height_left > height_right)
	{
		_root->height = height_left + 1;
	}
	else
	{
		_root->height = height_right + 1;
	}
}

template<class ValType, class KeyType>
inline node_avl<ValType, KeyType>* AVL_tree<ValType, KeyType>::RR(node_avl<ValType, KeyType>*& returned_node)
{
	operations++;
	node_avl<ValType, KeyType>* tmp_node = returned_node->left;
	returned_node->left = tmp_node->right;
	tmp_node->right = returned_node;

	fix_height_after_add(returned_node);
	fix_height_after_add(tmp_node);

	return tmp_node;
}

template<class ValType, class KeyType>
inline size_t AVL_tree<ValType, KeyType>::get_height_node(node_avl<ValType, KeyType>*& _root) const
{
	if (_root != nullptr)
	{
		return _root->height;
	}
	else
	{
		return 0;
	}
}

template<class ValType, class KeyType>
inline node_avl<ValType, KeyType>* AVL_tree<ValType, KeyType>::RL(node_avl<ValType, KeyType>*& returned_node)
{
	operations++;
	node_avl<ValType, KeyType>* tmp_node = returned_node->right;

	returned_node->right = tmp_node->left;
	tmp_node->left = returned_node;

	fix_height_after_add(returned_node);
	fix_height_after_add(tmp_node);

	return tmp_node;
}

template<class ValType, class KeyType>
inline node_avl<ValType, KeyType>* AVL_tree<ValType, KeyType>::balance(node_avl<ValType, KeyType>*& _root)
{
	operations++;

	fix_height_after_add(_root);

	if ((get_height_node(_root->right) - get_height_node(_root->left)) == 2)
	{
		if (get_height_node(_root->right->right) - get_height_node(_root->right->left) < 0)
		{
			_root->right = RR(_root->right);
		}

		return RL(_root);
	}
	if ((get_height_node(_root->right) - get_height_node(_root->left)) == -2)
	{
		int result_height = get_height_node(_root->left->right) - get_height_node(_root->left->left);
		if (result_height > 0)
		{
			_root->left = RL(_root->left);
		}

		return RR(_root);
	}

	return _root;
}

template<class ValType, class KeyType>
inline node_avl<ValType, KeyType>* AVL_tree<ValType, KeyType>::delete_min(node_avl<ValType, KeyType>* _root)
{
	operations++;
	if (_root->left == 0)
	{
		return _root->right;
	}

	_root->left = delete_min(_root->left);

	return balance(_root);
}

template<class ValType, class KeyType>
node_avl<ValType, KeyType>* Get_min(node_avl<ValType, KeyType>* _root)
{
	if (_root->left != nullptr)
	{
		Get_min(_root->left);
	}
	else
	{
		return _root;
	}
}
