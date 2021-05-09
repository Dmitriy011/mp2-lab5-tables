#pragma once

#include <iostream>

using namespace std;

template <class ValType, class KeyType>
struct Node_AvlTree
{
    Node_AvlTree<ValType, KeyType>* left;
    Node_AvlTree<ValType, KeyType>* right;
    size_t height;
    KeyType key;
    ValType value;

    Node_AvlTree(ValType _value, KeyType _key)
    {
        value = _value;
        key = _key;
        left = nullptr;
        right = nullptr;
        height = 1;
    }
};

template <class ValType, class KeyType>
class AVL_tree
{
public:
    size_t operations;

    AVL_tree();

    Node_AvlTree<ValType, KeyType>* root;

    Node_AvlTree<ValType, KeyType>* insert(Node_AvlTree<ValType, KeyType>* &_pointer, Node_AvlTree<ValType, KeyType>* &_node);
    Node_AvlTree<ValType, KeyType>* remove(Node_AvlTree<ValType, KeyType>* &_pointer, KeyType &_key);
    ValType find(Node_AvlTree<ValType, KeyType>*& _root, KeyType _key);
    void printTree(Node_AvlTree<ValType, KeyType>* _pointer) const;

private:
    size_t Get_height(Node_AvlTree<ValType, KeyType>* _pointer) const;
    size_t bfactor(Node_AvlTree<ValType, KeyType>* _pointer) const;
    void fix_height(Node_AvlTree<ValType, KeyType>* _pointer);
    Node_AvlTree<ValType, KeyType>* RL(Node_AvlTree<ValType, KeyType>* _pointer);
    Node_AvlTree<ValType, KeyType>* RR(Node_AvlTree<ValType, KeyType>* _pointer);
    Node_AvlTree<ValType, KeyType>* balance(Node_AvlTree<ValType, KeyType>* _pointer);
    KeyType Get_min(Node_AvlTree<ValType, KeyType>* _pointer) const;
};

template <class ValType, class KeyType>
AVL_tree<ValType, KeyType>::AVL_tree()
{
    root = nullptr;
}

template <class ValType, class KeyType>
Node_AvlTree<ValType, KeyType>* AVL_tree<ValType, KeyType>::insert(Node_AvlTree<ValType, KeyType>* &_pointer, Node_AvlTree<ValType, KeyType>* &_node)
{
    operations++;
    if (root == nullptr)
    {
        operations++;
        cout << operations << endl;
        operations = 0;
        root = _node;
    }
    else
    {
        if (_pointer == nullptr)
        {
            Node_AvlTree<ValType, KeyType>* tmp = _node;
            return tmp;
        }
        else
        {
            if (_node->key < _pointer->key)
            {
                _pointer->left = insert(_pointer->left, _node);
            }
            else
            {
                _pointer->right = insert(_pointer->right, _node);
            }
        }
    }
    return balance(_pointer);
}

template <class ValType, class KeyType>
Node_AvlTree<ValType, KeyType>* AVL_tree<ValType, KeyType>::remove(Node_AvlTree<ValType, KeyType>* &_pointer, KeyType &_key)
{
    if (_pointer == nullptr)
    {
        return _pointer;
    }

    if (_key < _pointer->key)
    {
        _pointer->left = remove(_pointer->left, _key);
    }
    else
    {
        if (_key > _pointer->key)
        {
            _pointer->right = remove(_pointer->right, _key);
        }
        else
        {
            if (_pointer->left != nullptr && _pointer->right != nullptr)
            {
                _pointer->key = Get_min(_pointer->right);
                _pointer->right = remove(_pointer->right, _pointer->key);
            }
            else
            {
                if (_pointer->left != nullptr)
                {
                    if (_pointer == root)
                    {
                        root = _pointer->left;
                    }

                    _pointer = _pointer->left;
                }
                else
                {
                    if (_pointer->right != nullptr && _pointer == root)
                    {
                        root = _pointer->right;
                    }
                    else
                        if (_pointer->right == nullptr && _pointer == root)
                        {
                            root = nullptr;
                        }

                    _pointer = _pointer->right;
                }
            }
        }
    }
    return balance(_pointer);
}

template<class ValType, class KeyType>
inline ValType AVL_tree<ValType, KeyType>::find(Node_AvlTree<ValType, KeyType>*& _root, KeyType _key)
{
    if (_root->key == _key)
    {
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

template <class ValType, class KeyType>
inline void AVL_tree<ValType, KeyType>::printTree(Node_AvlTree<ValType, KeyType>* _pointer) const
{
    if (_pointer != nullptr)
    {
        cout << _pointer->key << "  " << _pointer->value <<  endl;
        printTree(_pointer->left);

        cout << "//";

        printTree(_pointer->right);
    }
}

template <class ValType, class KeyType>
size_t AVL_tree<ValType, KeyType>::bfactor(Node_AvlTree<ValType, KeyType>* _pointer) const
{
    if (_pointer)
    {
        return Get_height(_pointer->right) - Get_height(_pointer->left);
    }
    else
    {
        return 0;
    }
}

template <class ValType, class KeyType>
size_t AVL_tree<ValType, KeyType>::Get_height(Node_AvlTree<ValType, KeyType>* _pointer) const
{
    if (_pointer == nullptr)
    {
        return 0;
    }
    else
    {
        return _pointer->height;
    }
}

template <class ValType, class KeyType>
void AVL_tree<ValType, KeyType>::fix_height(Node_AvlTree<ValType, KeyType>* _pointer)
{
    if (_pointer != nullptr)
    {
        size_t hl = 0;
        size_t hr = 0;
        size_t max = 0;

        if (_pointer->left != nullptr)
        {
            hl = Get_height(_pointer->left);
        }
        if (_pointer->right != nullptr)
        {
            hr = Get_height(_pointer->right);
        }

        if (hl > hr)
        {
            max = hl;
        }
        else
        {
            max = hr;
        }

        _pointer->height = max + 1;
    }
    else
    {
        return;
    }
}

template <class ValType, class KeyType>
Node_AvlTree<ValType, KeyType>* AVL_tree<ValType, KeyType>::RL(Node_AvlTree<ValType, KeyType>* _pointer)
{
    Node_AvlTree<ValType, KeyType>* tmp_pRIGHT = _pointer->right;

    if (_pointer == root)
    {
        root = tmp_pRIGHT;
    }

    _pointer->right = tmp_pRIGHT->left;
    tmp_pRIGHT->left = _pointer;
    fix_height(_pointer);
    fix_height(tmp_pRIGHT);
    fix_height(root);
    return tmp_pRIGHT;
}

template <class ValType, class KeyType>
Node_AvlTree<ValType, KeyType>* AVL_tree<ValType, KeyType>::RR(Node_AvlTree<ValType, KeyType>* _pointer)
{
    Node_AvlTree<ValType, KeyType>* tmp_pLEFT = _pointer->left;

    if (_pointer == root)
    {
        root = tmp_pLEFT;
    }

    _pointer->left = tmp_pLEFT->right;
    tmp_pLEFT->right = _pointer;
    fix_height(_pointer);
    fix_height(tmp_pLEFT);
    fix_height(root);
    return tmp_pLEFT;
}

template <class ValType, class KeyType>
Node_AvlTree<ValType, KeyType>* AVL_tree<ValType, KeyType>::balance(Node_AvlTree<ValType, KeyType>* _pointer)
{
    fix_height(_pointer);

    if (bfactor(_pointer) == 2)
    {
        if (bfactor(_pointer->right) < 0)
        {
            _pointer->right = RR(_pointer->right);
        }
        return RL(_pointer);
    }

    if (bfactor(_pointer) == -2)
    {
        if (bfactor(_pointer->left) > 0)
        {
            _pointer->left = RL(_pointer->left);
        }
        return RR(_pointer);
    }

    return _pointer;
}

template <class ValType, class KeyType>
KeyType AVL_tree<ValType, KeyType>::Get_min(Node_AvlTree<ValType, KeyType>* _pointer) const
{
    if (_pointer->left == nullptr)
    {
        return _pointer->key;
    }

    return Get_min(_pointer->left);
}