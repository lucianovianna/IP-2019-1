#include <iostream>

using namespace std;

string title(string F){
	int i;
	for(i=0; i<F.size(); i++){
		if(F[i] < 97 && F[i] != 32)
			F[i] += 32;
	}
	
	if(F[0] > 91)
		F[0] -= 32;
	
	for(i=0; i<F.size(); i++){
		if(F[i] == 32){
			if(F[i+1] > 91)
				F[i+1] -= 32;
		}
	}
	
	return F;
}

int main(){ 
   
    string F;

    getline(cin, F);
	
    cout << title(F) << endl;
    
    return 0;
}
