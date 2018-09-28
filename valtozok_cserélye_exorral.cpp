#include "std_lib_facilities.h"

int main()
{
	int a = 1;
	int b = 8;	
	cout<<"- Ertekek a XOR muvelet elott\na : "<<a<<"\t0001\nb : "<<b<<"\t1000"<<endl;
	a = a^b; // 9
	b = b^a; // 1
	a--;     // 8
	cout<<"- Muvelet utan\na : "<<a<<"\t(1001-1)\nb : "<<b<<"\t0001"<<endl;

	// a = 0000 0001 (1)
	// b = 0000 1000 (8)
	// a^b 0000 1001 (9)

	// b = 0000 1000 (8)
	// a = 0000 1001 (9)
	// b^a 0000 0001 (1)
	// a|b 0000 1001
	// a&b 0000 0000 -> 0

	// if (a > 1 && b > 1) {
	// 	cout << 'Mind2 változó nagyobb, mint 1' << endl;
	// }
}
