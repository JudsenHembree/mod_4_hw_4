/*hw4
 * Judsen Hembree
 * recrusion program to print binary number
 * */

#include <string>
#include <iostream>

using namespace std;

void output(int);

int main(){
    output(12);
}


void output(int n){
    if(n==0){
        cout<<endl;
        return;
    }
    output(n/2);
    cout<<n%2;
}
	
