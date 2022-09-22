// Jeremy Cobb
// assignment 4
// 09-22-22
#include <iostream>
using namespace std;
 
// Stack type
class Stack
{
    public:
    int top;
    unsigned capacity;
    int* array;
};
 
Stack* createStack( unsigned capacity ) {
    Stack* stack = new Stack(); 
 
    if (!stack) return NULL;
 
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = new int[(stack->capacity * sizeof(int))];
 
    if (!stack->array) return NULL;
 
    return stack;
}
 
int isEmpty(Stack* stack)
{
    return stack->top == -1 ;
}
 
int peek(Stack* stack)
{
    return stack->array[stack->top];
}
 
int pop(Stack* stack) {
    if (!isEmpty(stack))
        return stack->array[stack->top--] ;
    return '$';
}
 
void push(Stack* stack,int op) {
    stack->array[++stack->top] = op;
}
 

int Postfix(char* exp) {
    int i;

    int size = sizeof(exp)/sizeof(exp[0]); // get size of char array
    
    Stack* stack = createStack(exp[size]); // turn array into stack

    if (!stack) return -1; // make sure stack was properly created
 
    for (i = 0; exp[i]; ++i)    { // scan stack

        if(exp[i] == ' ') {
            continue;
        } else if (isdigit(exp[i])) {

            int num=0;
             
            while(isdigit(exp[i])) {
                num = num * 10 + (int)(exp[i] - '0');
                i++;
            }

            i--;
             
            push(stack,num);
        } else {
            int val1 = pop(stack);
            int val2 = pop(stack);
             
            switch (exp[i]) {
                case '+': push(stack, val2 + val1); break;
                case '-': push(stack, val2 - val1); break;
                case '*': push(stack, val2 * val1); break;
                case '/': push(stack, val2/val1); break;
            }
        }
    }
    return pop(stack);
}
 
// Driver code
int main()  {
    char exp[] = "4 5 + 9 / 7 * 3 +"; // should return 10
    int size = sizeof(exp)/sizeof(exp[0]);
    cout << "PostFix Equation: ";
    for (int i = 0; i < size;i++) {
        cout << exp[i];
    }
    cout << " = " << Postfix(exp) << endl;
    return 0;
}