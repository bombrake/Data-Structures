//Stack in C++ with array
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
//Stack has push, pop, top methods
class Stack
{
private:
  vector<int> value;

public:
  int top;
  int max_size;
  Stack(int max_s) : value(max_s)
  {
    top = -1;
    max_size = max_s;
    cout << "Max Stack size " << max_size << endl;
  }
  void push(int v);
  int pop();
};

//each method implemented
//push
void Stack::push(int v)
{
  //v holds the value to be pushed onto the stack
  if (top == -1)
  {
    //stack is empty
    top = 0;
    value[top] = v;
    cout << "Pushed " << v << " on stack" << endl;
    return;
  }
  if (top == max_size - 1)
  {
    cout << "Stack is full" << endl;
    return;
  }
  else
  {
    cout << "Pushed " << v << " on stack" << endl;
    value[++top] = v;
  }
}

//pop
int Stack::pop()
{
  if (top == -1)
  {
    cout << "Stack is empty :(" << endl;
    return 0;
  }
  else
  {
    cout << "Popping value" << value[top] << "from stack" << endl;
    return value[top--];
  }
}

int main()
{
  Stack s(2);
  s.push(5);
  s.push(6);
  s.push(8);
  s.pop();
  s.pop();
  s.pop();
  s.pop();
}