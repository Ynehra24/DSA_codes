#include <iostream>
using namespace std;

int main() {
	
	int T;
	cin >> T;
	
	while(T-- != 0){
	    
	    int N;
	    cin >> N;
	    
	    if(N % 2 == 0){
	        cout << (N / 2) + 1 << endl;
	    }
	    else{
	        cout << ceil(N/2) + 1 << endl;
	    }
	    
	}
}