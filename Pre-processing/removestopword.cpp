#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <string.h>
#include <cctype>
#include <ctype.h>
using namespace std;
int main()
{
    std::ifstream inf("stopwords.txt");
    string temp;
    std::vector<std::string> sw (
        (std::istream_iterator<std::string>(inf)),
         std::istream_iterator<std::string>());

    std::ifstream infi("input2.txt");
    std::ofstream file_out("input3.txt");
    std::vector<std::string> data (
        (std::istream_iterator<std::string>(infi)),
         std::istream_iterator<std::string>());

    vector<string>::iterator swbegin = sw.begin();
    vector<string>::iterator swend = sw.end();
    string swsrt;
    vector<string>::iterator itrbegin = data.begin();
    vector<string>::iterator itrend = data.end();
    //cout<<"k";
    while(itrbegin != itrend)
    {
        swsrt=*itrbegin;
        if (std::find(sw.begin(), sw.end(), swsrt) == sw.end())
        {
            //cout<<swsrt<<" df\n";
            file_out<<*itrbegin;
            file_out<<" ";
            temp=*itrbegin;
            size_t found =temp.find('.');
              if (found!=std::string::npos)
              {
                  cout<<"\n";
                  file_out<<"\n";
              }
        }

        itrbegin++;
    }
    infi.close();
    inf.close();
    file_out.close();
    return 0;
}
