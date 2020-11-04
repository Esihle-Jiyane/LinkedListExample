// LinkedList Example : Console Application
#include "stdafx.h"
#include "MyList.h" 
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[]){
	List L;
	Init (L);
	Insert ("Simphiwe", L); Insert ("Hlatjwako", L); Insert ("MissLaughter", L); ShowData (L);
	Delete ("Hlatjwako",L); ShowData (L); 
	Insert ("Dlamini", L); ShowData (L);
	
	
	system("pause");
	return 0;
}

