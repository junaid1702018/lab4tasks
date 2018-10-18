#include<iostream>

using namespace std;

class Stack
{
public:

void push(string x)
{

stack1[counter]=x;
counter++;
}
string top()
{

return stack1[counter-1];
}
void pop()
{
counter--;
}
bool empty()
{
if(counter==9)
{
return true;}
else if(counter>=0 and counter<9)
{
return false;
}
}
private:
string stack1[10];
int counter=0;
};
int main(){
Stack array;
string x;
cout<<"enter p for push,r for remove,t for top"<<endl;
char y;
cout<<"enter key=";
cin>>y;
while(true)
{
if(y=='p')
{
cout<<"enter value=";
cin>>x;
array.push(x);
}

if(y=='r')
{
array.pop();
}
if(y=='t')
{cout<<array.top()<<endl;}
int i=array.empty();
if(i==0)
{
cout<<"array is empty"<<endl;

}
cout<<"enter key=";
cin>>y;
}
return 0;
}
