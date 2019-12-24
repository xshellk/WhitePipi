#include<iostream>
#include<typeinfo>
using namespace std;

template<typename Type>
void fun(Type a)
{
  cout << typeid(a).name() << endl;
  cout << "hello world \b" << endl;

}
int main()
{
  fun(20);
  fun(2.34);
  fun('a');
  
  return 0;
}

