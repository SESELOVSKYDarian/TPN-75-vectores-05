#include <bits\stdc++.h>
#include <algorithm>
using namespace std;

vector<int> GenerarVector (vector<int> V, int n);
int BuscarModa(vector<int> A);
void MostrarVector(vector<int> V);

int main()
{
	vector<int> a;
    int n, moda;
    cout<<"Ingrese cantidad de numeros a generar: ";
    cin>>n;
	a = GenerarVector(a, n);
	MostrarVector(a);
	sort(a.begin(), a.end());
	MostrarVector(a);
	moda = BuscarModa(a);
	cout<<"Es moda: "<<moda<<endl;
	return 0;
}

vector<int> GenerarVector (vector<int> V, int n)
{
	int i;
	int e;
	for(i=0; i<n; i++)
	{
		e=rand()%10;	
		V.push_back (e);
	}
	return V;
}

int BuscarModa(vector<int> A)
{
	int maxrep=0, moda=-1;
    for (int i=0; i<A.size(); i++)
    {
        int rep=0;
        for (int j=0; j<A.size(); j++)
        {
            if (A[j] == A[i])
            {
                rep++;
            }
        }
        if (rep>maxrep)
        {
            maxrep=rep;
            moda=A[i];
        }
    }
    return moda;
}

void MostrarVector(vector<int> V)
{
	int i;
	
	for( i=0; i<V.size(); i++ )
	{
		cout<<V[i]<<"/";
	}
	cout<<endl;
}