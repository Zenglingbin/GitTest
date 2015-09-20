
# include <iostream>

using namespace std;

int main()
{
	int i = 5, j = 10;
	int *p = &i;
	
	cout << p << " " << *p << endl;

	i = i + 10;

	cout << p << " " << *p << endl;


	getchar();

	return 0;
}