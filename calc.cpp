#include <iostream>
using namespace std;

int main(){
	int option;
	float val1,val2;
	cout<<"Enter 2 values: ";
	cin>>val1>>val2;
	cout<<"\n\t1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Modulo\n\tchoose an option: ";
	cin >> option;
	cout<<"\nAnswer: ";
	switch(option){
		case 1:
			cout<<val1+val2;
			break;
		case 2:
			cout<<val1-val2;
			break;
		case 3:
			cout<<val1*val2;
			break;
		case 4:
			cout<<val1/val2;
			break;
		case 5:
			cout<<(int)val1%(int)val2;
			break;
		default:
			cout<<"Invalid option!";
			break;
	}
	cout<<endl;

	return 0;
}
