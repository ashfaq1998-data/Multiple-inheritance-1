#include<iostream>
using namespace std;


class Apples{
	public:
		int x;
		
		void printapples(int a){
			x=a;
			cout << "The total number of Apples : " << x << endl;
		}
	
};

class Mangoes{
	public:
		int y;
		
		void printmangoes(int m){
			y=m;
			cout << "The total number of Mangoes : " << y << endl;
		}
	
};

class Fruits:public Apples, public Mangoes{
	public:
		int f;
		
		void printtotal(){
			f=x+y;
			cout << "Therefore finally total number of fruits in the basket is : " << f << endl;
		}
		
};


int main(){
	
	int p, q;
	Fruits Fruit;
	cout << "Please enter the total no. of apples" << endl;
	cin >> p;
	cout << "Please enter the total no. of mangoes" << endl;
	cin >> q;
	
	Fruit.printapples(p);
	Fruit.printmangoes(q);
	Fruit.printtotal();
	
	
}
