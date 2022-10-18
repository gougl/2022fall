//
// Created by guanglei gou on 2022/10/18.
//

#ifndef INC_2022FALL_MYBINARYTREE_H
#define INC_2022FALL_MYBINARYTREE_H
template<typename T>
class bnode{
private:
    T data;
    bnode *lchild;
    bnode *rchild;
public:
    bnode(){}
    bnode(T e){
        data = e;
        lchild = NULL;
        rchild = NULL;
    }
    void setData(T e){
        data = e;
    }
    void setLchild(bnode *lchild){
        this->lchild = lchild;
    }
    void setRchild(bnode *rchild){
        this->rchild = rchild;
    }

    T getData(){
        return data;
    }
    bnode* getLchild(){
        return lchild;
    }
    bnode* getRchild(){
        return rchild;
    }

    void preorder(bnode *t){
        if(t){
            cout << t->getData() << endl;
            preorder(t->getLchild());
            preorder(t->getRchild());
        }
    }

    void inorder(bnode *t){
        if(t){
            inorder(t->getLchild());
            cout << t->getData() << endl;
            inorder(t->getRchild());
        }
    }

    void postorder(bnode *t){
        if(t){
            postorder(t->getLchild());
            postorder(t->getRchild());
            cout << t->getData() << endl;
        }
    }
};
template<typename T>
class MyBinaryTree{
private:
    bnode<T> *r;
public:
    MyBinaryTree(){
        r = NULL;
    }

    MyBinaryTree(T data){
        r->setData(data);
        r->setLchild(NULL);
        r->getRchild(NULL);
    }

    MyBinaryTree(bnode<T> *r){
        this->r = r;
    }

    void preorder(){
        r->preorder(r);
    }

    void inorder(){
        r->inorder(r);
    }

    void postorder(){
        r->postorder(r);
    }

    int height(bnode<T> *root){
        if(!root)
            return 0;
        else if(root->getLchild() == NULL && root->getRchild() == NULL)
            return 1;
        else{
            int m = height(root->getLchild());
            int n = height(root->getRchild());
            return m>n?(m+1):(n+1);
        }
    }

    int getHeight(){
        return height(r);
    }

    int leafnumber(bnode<T> *root){
        if(!root)
            return 0;
        else if(root->getLchild() == NULL && root->getRchild() == NULL)
            return 1;
        else{
            int m = leafnumber(root->getLchild());
            int n = leafnumber(root->getRchild());
            return m+n;
        }
    }

    int getLeafNumber(){
        return leafnumber(r);
    }

};
#endif //INC_2022FALL_MYBINARYTREE_H
