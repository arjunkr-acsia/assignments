#include <iostream>
using namespace std;
void factorial(int val){
	int ans=val;
	while(1){
		val--;
		if(val==0) break;
		ans *= val;
	}
	cout<<ans;
}
int main(){
	int val;
	cout<<"Enter an integer: ";
	cin>>val;
	factorial(val);

	return 0;
}
