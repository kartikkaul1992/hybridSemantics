#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <string.h>
#include <cctype>
using namespace std;
string str[10000][100];
int countt[10000];
extern int i=1;
/*int main()
{
    std::ifstream infi("input3.txt");
    std::vector<std::string> data (
        (std::istream_iterator<std::string>(infi)),
         std::istream_iterator<std::string>());
    vector<string>::iterator itrbegin = data.begin();
    vector<string>::iterator itrend = data.end();
    string temp,temp1;
    size_t found;
    int j=1;
    string qwerty;
    while(itrbegin != itrend)
    {
        temp=*itrbegin;
        found =temp.find('.');
        //strcpy(temp1,temp);
        temp1=temp;
        str[i][j]=temp;
        qwerty = temp;
        //cout<<str[i][j]<<" ";
        if (found!=std::string::npos)
        {
            countt[i]=j-1;
            //cout<<"\n\n"<<i<<" "<<countt[i];
            i+=1;
            j=1;
            //cout<<"\n";
        }
        j+=1;
        itrbegin++;
    }
    //cout<<"i= "<<i<<"j= "<<j<<"\n"<<countt[2];
    //cout<<str[4][4]<<"   k";
    //cout<<i;
    return 0;
}*/
void fun_2D_array()
{
    std::ifstream infi("input3.txt");
    std::vector<std::string> data (
        (std::istream_iterator<std::string>(infi)),
         std::istream_iterator<std::string>());
    vector<string>::iterator itrbegin = data.begin();
    vector<string>::iterator itrend = data.end();
    string temp,temp1;
    size_t found;
    int j=1;
    string qwerty;
    while(itrbegin != itrend)
    {
        temp=*itrbegin;
        found =temp.find('.');
        //strcpy(temp1,temp);
        temp1=temp;
        str[i][j]=temp;
        qwerty = temp;
        //cout<<str[i][j]<<" ";
        if (found!=std::string::npos)
        {
            countt[i]=j-1;
            //cout<<"\n\n"<<i<<" "<<countt[i];
            i+=1;
            j=1;
            //cout<<"\n";
        }
        j+=1;
        itrbegin++;
    }
    //cout<<"i= "<<i<<"j= "<<j<<"\n"<<countt[2];
    //cout<<str[4][4]<<"   k";
    //cout<<i;
    return;
}
