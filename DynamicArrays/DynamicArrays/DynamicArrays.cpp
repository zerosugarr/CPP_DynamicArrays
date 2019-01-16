#include <iostream>

using namespace std;


int **tab1;
int r, c;


void create2DArray(int **&tab)
{
	cout << "Enter number of rows: ";
	cin >> r;
	cout << "Enter number of columns: ";
	cin >> c;

	tab = new int *[r];

	for (int i = 0; i < r; i++)
	{
		tab[i] = new int [c];
	}

	cout <<"\n\n" << r << "x" << c << " 2D array was created.\n\n";
}


void insert2DArray(int **tab, int rows, int columns)
{
	int val;
	int c = 1;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << "Enter a " << c << " value: ";
			cin >> val;
			tab[i][j] = val;
			c++;
		}
	}
}


void print2DArray(int **tab, int rows, int columns)
{
	cout << "\n\n";

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << tab[i][j] << " ";
		}
		cout << endl;
	}
}




int main()
{
	create2DArray(tab1);

	insert2DArray(tab1,r,c);

	print2DArray(tab1,r,c);
}
