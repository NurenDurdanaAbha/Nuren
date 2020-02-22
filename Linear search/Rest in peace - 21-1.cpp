#include <iostream>

using namespace std;

int main()
{
	int n, arr[100000], item, I, K, loc,c=0;

	cout << "Enter the number of the elements in the array: ";
	cin >> n;
	cout << endl << "Enter the " << n << " elements: ";

	for(I = 0; I < n; I++)
		cin >> arr[I];

	cout << endl << "Enter the item to search: ";
	cin >> item;

	loc = 0;

	for(I = 0, K = n - 1; I != K; I++, K--)
	{
	    c++;
		if(arr[I] == item)
		{
			loc = I + 1;
			break;
		}

		if(arr[K] == item)
		{
			loc = K + 1;
			break;
		}
	}

	if(loc)
		cout << endl << "Item found at location " << loc << " of the array.." << endl;

	else
		cout << endl <<"Item is not in the array.." << endl;

		cout<<c<<endl;

	return 0;
}
