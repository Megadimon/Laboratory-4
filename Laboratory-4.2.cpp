#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
int main(void)
{
	 double **ppmas = 0;
	int max = 0;
	unsigned int n = 0;
	unsigned int m = 0;
	cout << "Please enter the size of the array" << endl;
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
	ppmas = (double **)malloc(n*sizeof(double *));
	for (int i = 0; i<n; i++) ppmas[i] = (double *)malloc(m*sizeof(double));// Динамическое выделение памяти
	cout << endl << "Two-dimensional array" << endl;
	for (int i=0; i<n; i++)
	{
	      for( int j=0; j<m; j++)
	      {
	      ppmas[i][j] = rand() % 100;
	      cout << ppmas[i][j] << " ";
	      }
		  cout << endl;
	}
	int min = ppmas[0][0];
	cout << "The maximum and minimum values of the matrix" << endl;
	for (int i=0; i<n; i++)
	{
	       for (int j=0; j<m; j++)
	       {
	            if(ppmas[i][j]>max)
	            {
	            max=ppmas[i][j];
	            }
	            if(ppmas[i][j]<min)
	            {
	            min=ppmas[i][j];
	            }
	       }
	}
    cout << endl << "max = " << max << endl;
    cout << endl << "min = " << min <<  endl;
    for( int i = 0; i<n; i++) free(ppmas[i]);
    free(ppmas);
    _getch();

    return 0;
}
