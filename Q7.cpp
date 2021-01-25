#include<iostream>
#include <cmath>
using namespace std;

class Marks{
	
	public:
		int roll_number;
		char *name;
		int *marks;	
		int y; //additional data member inorder to have number of marks//
	
		void Enter_Marks(int x){
			
			int i=0;
			int a;
			marks = new int[x];
			
			while(i<x){
				cin >> a;
				marks[i]=a;
				i++;
			}
			
				
	}
		
		
		int total_Marks(){
			int total=0;
			int i;
			
			for(i=0;i<2;i++){
				total+=marks[i];
			}
			return total;
		}
		
		double average(){
			return round(((double)total_Marks() / 3) * 100) / 100;
		}
		
		void change_marks(int b, int c){
			marks[b]=c;
			
		}
		
		int get_marks(int d) {
		return marks[d];
	}
	
	void set_marks(int e) {
		y = e;
		
		delete[]marks;

		marks = new int[e];
	}
	
	~Marks() {
		delete[]marks;
	}
	
};


class Mathematics:public Marks{
	public:
		
};

class Chemistry:public Marks{
	public:
		
};

class Physics:public Marks{
	public:
		
};

int main(){
	
	int num,i;

	cout << "Enter the number of students ";
	cin >> num;
	
	
	Physics *stu_phys = new Physics[num]; 
	Chemistry *stu_chem = new Chemistry[num];
	Mathematics *stu_math = new Mathematics[num];
	
	
	for ( i = 0; i < num; i++) { // Generate marks and roll numbers

		stu_phys[i].roll_number = stu_chem[i].roll_number = stu_math[i].roll_number = i + 1;
		cout << "Enter the physics Marks" << endl;
		stu_phys[i].Enter_Marks(1);
		cout << "Enter the chemistry Marks" << endl;
		stu_chem[i].Enter_Marks(1);
		cout << "Enter the Maths Marks" << endl;
		stu_math[i].Enter_Marks(1);
		
		cout << endl;
	}
	
	cout << "\n*********************************The total marks of each student of a class in Physics, Chemistry and Mathematics: *********************************\n\n";

	for (int i = 0; i < num; i++) { 
		cout << "Roll number of student is " << stu_phys[i].roll_number << endl;

		cout << "The total marks in Physics is " << stu_phys[i].total_Marks() << endl;
		cout << "The total marks in Chemistry is " << stu_chem[i].total_Marks() << endl;
		cout << "The total marks in Mathematics is " << stu_math[i].total_Marks() << endl;

		cout << endl;
	}
	
	cout << "************************************Average of each and every student in the class are given below***********************************"<< endl;
	
	cout << endl;
	for (i = 0; i < num; i++) { 
		cout << "Roll number of student is " << stu_phys[i].roll_number << endl;

		cout << "The average mark in Physics is " << stu_phys[i].average() << endl;
		cout << "The average mark in Chemistry is " << stu_chem[i].average() << endl;
		cout << "The average mark in Mathematics is " << stu_math[i].average() << endl;
		

		cout << endl;
	}
	
	float a=0,b=0,c=0;
	
	for(i=0;i<num;i++){
		
		a=a+stu_phys[i].average();
		b=b+stu_chem[i].average();
		c=c+stu_math[i].average();
	}
	float g,h,k;
	g=a/num;
	cout <<"Therefore the average of physics of class is : " << g <<endl;
	
	h=b/num;
	cout <<"Therefore the average of chemsitry of class is : " << h <<endl;
	
	k=c/num;
	cout <<"Therefore the average of Maths of class is : " << k << endl;
	
	return 0;

	
}
