#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;

        Node(int val)
        {
            data = val;
            next = nullptr;
        }
};

class List
{
    private:
        Node *head;
        Node *tail;

    public:
        List()
        {
            head = tail = nullptr;
        }

        void push_front(int val){ // O(1)
            Node* newNode = new Node(val); //dynamic
            // Node newNode(val); //static
            if(head==nullptr){
                head = tail = newNode;
            }
            else{
                newNode->next = head;
                head = newNode;
            }
        }

        void push_back(int val){ //O(1)
            Node* newNode = new Node(val);

            if (head==nullptr){
                head=tail=newNode;
            }
            else{
                tail->next= newNode;
                tail = newNode;
            }
        }

        void pop_front(){ //O(1)
            if(head==nullptr){
                return;
            }

            Node* temp = head;

            head=head->next;
            temp->next=nullptr;

            delete temp;
        }

        void pop_back(){ //O(n)
            if(head==nullptr){
                return;
            }

            Node* temp = head;

            while(temp->next!=tail){
                temp=temp->next;
            }

            temp->next = nullptr;
            delete tail;
            tail=temp;
        }

        void insert(int val, int pos){ //O(n)
            if(pos<0){
                return;
            }

            if(pos==0){
                push_front(val);
            }

            Node* temp = head;
            for(int i=0; i<pos-1; i++){
                if(temp==nullptr){
                    cout << "Invalid Position" << endl;
                    return;
                }
                temp = temp->next;
            }

            Node* newNode = new Node(val);
            newNode->next= temp->next;
            temp->next = newNode;
        }

        int search(int key){ //O(n)
            Node* temp = head;
            int idx=0;

            while(temp!=nullptr){
                if(temp->data==key) return idx;

                temp=temp->next;
                idx++;
            }
            return -1;
        }

        void printLL(){ //O(n)
            Node* temp = head;

            while(temp!=nullptr){
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout<< "nullptr" << endl;
        }
};

int
main()
{
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    // ll.push_back(4);

    // ll.pop_front();
    
    // ll.pop_back();

    ll.insert(4, 1);

    ll.printLL();

    cout << ll.search(2) << endl;
    cout << ll.search(5) << endl;

    return 0;
}