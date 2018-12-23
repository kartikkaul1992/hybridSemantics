#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <string.h>
#include <cctype>
#include <ctype.h>
#include <map>
#include <conio.h>
#include "stemmer.h"
#include "stemmer.cpp"
#include "tsm_sen_matrix.h"
#include "term_sen_matrix.cpp"
#include "SVD.h"
#include "svdcmp.c"

using namespace std;

typedef map<int,int> MyClassSet;
typedef map<string, MyClassSet> MyClassSetMap;

int main(int argc,char* argv[])
{
    int m,n;
    double** a;
    int **b;
    double** v;
    double* w;

    FILE *f = fopen("hangword.txt","r");
    if (f == 0) { printf("File not found\n"); exit(1); }
    stemfile(f);

    printf("*");
    getch();

    b = tsm_gen(&m,&n);
    ofstream fo("B.txt");
    ofstream fm("Values.txt");

    fm<<m<<endl<<n<<endl;

    a=new double* [m];

    for(int i=0;i<m;i++){
    a[i]=new double [n];
    }

    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    a[i][j]=(double)b[i][j];
    fo<<"\t"<<a[i][j];
    fm<<a[i][j];
    }
    fo<<endl;
    fm<<endl;
    }

    w = new double [n];
    v= new double* [n];

    for(int i=0;i<n;i++){
    w[i]=0;
    v[i]=new double [n];
    for(int j=0;j<n;j++){
    v[i][j]=0;
    }
    }

    svdcmp(m,n,a,w,v);

    return 0;
}
