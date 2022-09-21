#include<iostream>
#define maxi 1000

using namespace std;

class sstack{
    int a[maxi];
    int top;

    public:
        void initialize();
        void push(int val);
        void pop();
        void peep();
        void display();
};

void sstack::initialize(){
    cout<<"Empty Stack is created :D ";
    top=-1;
}

void sstack::push(int val){
    if(top==maxi-1){
        cout<<"\nThe Stack is already full...";
        cout<<"\nThe Stack is already full...";
    }
    a[++top]=val;
}

void sstack::pop(){
    if(top==-1){
        cout<<"\nThe Stack is already empty..";
    }
    else{
        cout<<"\nThe Popped element is.."<<a[top];
        top--;
    }
}

void sstack::peep(){
    if(top==-1){
        cout<<"\nThe Stack is already empty..";
    }
    else{
        cout<<"\nThe Topmost element is.."<<a[top];
    }
}

void sstack::display(){
    if(top==-1){
        cout<<"\nThe Stack is Empty..";
    }
    else{
        cout<<"\nThe Contents of the Stack is..";
        int x=top;
        while(x!=-1){
            cout<<a[x]<<" ";
            x--;
        }
    }
}

int main()
{
    sstack s;
    int ch,x,val;
    s.initialize();
    cout<<"\nChoice : \n1) Push \n2) Pop \n3) Peep \n4) Display \n5) Exit :P";
    while(1){
        cout<<"\nEnter your choice..";
        cin>>ch;
        if(ch==1){
            cout<<"\nEnter the element to be inserted..";
            cin>>val;
            s.push(val);
        }
        else if(ch==2){
            s.pop();
        }
        else if(ch==3){
            s.peep();
        }
        else if(ch==4){
            s.display();
        }
        else break;
    }
    return 0;
}