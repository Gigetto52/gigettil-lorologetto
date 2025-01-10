#include <iostream>
using namespace std;
int main()
{
	int x,y,max=0,somma=0;
	cout<<"dimmi la lunghezza di x\n";
	cin>>x;
	cout<<"dimmi la lunghezza di y\n";
	cin>>y;
	int m[x][y];
	for(int i=0; i<x; i++)
	{
		for(int j=0; j<y; j++)
		{
			cout<<"inserisci l'elemento nella p "<<i<<" di y "<<j<<endl;
			cin>>m[i][j];

			if(m[i][j]>max) {
				max=m[i][j];
			}
		}
	}
	cout<<"il n massimo é "<<max<<endl;

	cout<<"la matrice é";
	cout<<endl;
	for(int i=0; i<x; i++)
	{
		for(int j=0; j<y; j++)
		{
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
	int n[x][y];
	for(int i=0; i<x; i++)
	{
		for(int j=0; j<y; j++)
		{
			n[i][j]=m[i][j]*max;
		}
	}
	cout<<"la matrice moltiplicata al massimo é";
	cout<<endl;
	for(int i=0; i<x; i++)
	{
		for(int j=0; j<y; j++)
		{
			cout<<n[i][j]<<" ";
		}
		cout<<endl;
	}
}
