#include <iostream>

using namespace std;

int main(){
	int spider[5];
	
	int *man;
	
	cout << "Please Enter 5 Numbers" << endl;
	for(int parker=0; parker<5; parker++){
		cout<<"Number " <<parker+1 <<": ";
		cin>>spider[parker];
	}
	
	man = spider;
	cout<<endl << "You've Entered:" <<endl;
	for(int parker=0; parker<5; parker++){
		cout<<"Number " <<parker+1 <<": " <<*man;
		cout<<endl;
		man++;
	}
	
	cout<<man;
	
}
