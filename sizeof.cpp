#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    cout<<"a:\n";
    cout << endl << "Size of int: "<<sizeof(int);
    cout << endl << "Size of long: "<<sizeof(long);
    cout << endl << "Size of short: "<<sizeof(short);
    cout << endl << "Size of float: "<<sizeof(float);
    cout << endl << "Size of double: "<<sizeof(double);
    cout << endl << "Size of char: "<<sizeof(char);
    cout << endl << "Size of long long: "<<sizeof(long long);
    cout << endl << "Size of int*: "<<sizeof(int*);
    cout << endl << "Size of char*: "<<sizeof(char*);
    cout << endl << "Size of void*: "<<sizeof(void*);
    cout << endl << "Size of bool: "<<sizeof(bool)<<endl;
    cout<<"\nb:\n";
    short maximumValueOfShort = pow(2,(sizeof(short)*8)-1)-1;
    cout <<"Maximum expected value of short type: "<<maximumValueOfShort<<endl;
    cout<<"\nc:";
    short maxPlusOne = maximumValueOfShort+1;
    cout<<endl<<maxPlusOne<<endl;
    
    return 0;
}
