#include<iostream>
using namespace std;


class Mammals{
	public:
		void printMammal(){
			cout << "I am mammal" << endl;
		}
};

class MarineAnimals{
	public:
		void printMarine(){
			cout <<  "I am a marine animal"  << endl;
		}
};

class BlueWhale:public Mammals, public MarineAnimals{
	public:
		void printblue(){
			cout <<"I belong to both the categories: Mammals as well as Marine Animals" << endl;
		}
};


int main(){
	Mammals  Mammal;
	Mammal.printMammal();
	
	MarineAnimals MarineAnimal;
	MarineAnimal.printMarine();
	
	BlueWhale BlueWhale;
	BlueWhale.printblue();
	BlueWhale.printMammal();
    BlueWhale.printMarine();
    
    return 0;



	
}

