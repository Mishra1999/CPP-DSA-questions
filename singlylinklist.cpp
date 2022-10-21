#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void insertathead(Node* &head,int d){
    //new node
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertattail(Node* &tail,int d){
    //new node
    Node* temp=new Node(d);
    tail->next=temp; 
    tail=temp;
}

void insertatposition(Node* &tail, Node* &head, int position,int data){

    //insert at starting
    if(position==1){
        insertathead(head,data);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while (cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //inserting at last position
    if(temp->next==NULL){
        insertattail(tail,data);
        return ;

    }
    //creating a node for d
    Node* nodetoinsert =new Node (data);
    nodetoinsert->next=temp->next;

    temp->next=nodetoinsert;
}

void print(Node* &head){
    Node* temp=head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main (){
    //created a NEW NODE
    Node* node1=new Node(10);

    // //print the data of the created node
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;


    // head pointed to node1;
    Node* head=node1;
    Node* tail=node1;
    print(head);
    insertattail(tail,12);
    print(head);
    //inserted at head
    insertathead(head,15);
    print(head);
    insertathead(head,20);
    print(head);

    insertatposition(tail,head,5,22);
    print(head);



    cout<<"Head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
    return 0;
}
