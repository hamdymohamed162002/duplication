#include<iostream>
#include <string>
#include<fstream>
using namespace std;

int main()
{
string arr[10000];
long long c=0;
    ifstream ip;
    ip.open("Sheet2.csv");
    ofstream wr;
    wr.open("sheet1.csv");
    while(ip.good())
    {
        string x;
        getline(ip,x);
       arr[c]=x;

       c++;



    }

    for(int i=0;i<=c;i++)
    {
   for(int o=i+1;o<=c;o++)
   {



           if(arr[i]==arr[o])
           {

               arr[o]="";
           }

   }

    }
    int i=0;
    while(i<=c)
    {

        if(arr[i]!="")
        {

            wr<<arr[i]<<endl;
        }
       i++;
    }

    return 0;
}
