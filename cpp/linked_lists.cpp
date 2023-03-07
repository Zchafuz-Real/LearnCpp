#include<iostream>

using namespace std;

class Node
{
    private:
        int data = 0;
        Node* next = nullptr;
    
    public:
        Node(int d = 0 , Node* n = nullptr) : data(d), next(n)
        {
        };

        void setData(int d){data = d;}
        int getData() const {return data;}
        void setNext(Node* n){next = n;}
        Node* getNext() const {return next;}
        bool hasNext() const {return next != nullptr;}
};

class LinkedList
{
    private:
        int length = 0;
        Node* head = nullptr;
    public:
        LinkedList(Node* n): head(n) {};
        void setHead(Node* n) {
            head = n;
        }
        int length_f(){
            Node* current = head;
            int count = 0;
            while (current->getNext() != nullptr){
                current = current->getNext();
                count ++;
            }
            length = count;
            return length;
        }
};

int main(){

    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    n1.setNext(n2);
    




    return 0;
};

