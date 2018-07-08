#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	cout << "Rolling the dice..." << endl;

	int rnd1, rnd2;

	srand(time(NULL));

	rnd1 = rand()%6 + 1;
	rnd2 = rand()&6 + 1;

	cout << "Die1: " << rnd1 << endl;
	cout << "Die2: " << rnd2 << endl;

	cout << "Tolal value: " << rnd1+rnd2 << endl;

	return 0;
}
