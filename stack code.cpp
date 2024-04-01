#include <iostream>
using namespace std ;
class stack {
	public :
	int top ;
	int Size ;
	int a[] ;
	stack (int s){
		Size = s;
		top = -1;
	}
	bool isfull (){
		return top == Size-1 ;
	}
	bool isempty (){
		return top == -1;
	}
	void push (int element ){
		if (isfull()){
			cout << "Your array is full you cannot enter the element ";
			return ;
		}
		else {
		top ++ ;
		a[top] = element ; 	
		}
	}
	void pop (){
		if (isempty()){
			cout << "Your array is already empty what you want to pop \n";
			return ;
		}
		else {
			
			cout << a[top] << "removing this element ";
			top -- ;
			
		}
	
	}
		void peek(){
			cout << "the top most element is "<<a[top];
		}
};
int main (){
	stack s(10);
  s.pop();
	return 0 ;
}
                            
