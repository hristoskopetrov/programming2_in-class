#include <iostream>
#include <map>

using namespace std;

void country1()
{
    map<string, double>country;

    country["Bulgaria"]=7.453324;
    country["Macedonia"]=2.431231;
    country["Serbia"]=13.343649;
    country["Spain"]=57.321632;
    country["Portugal"]=26.231231;

    double a=0;

    map<string, double>::iterator it;
    it=country.begin();

    while(it!=country.end())
    {
        a=a+it->second;
        cout<<it->first<<"-"<<it->second<<endl;
        it++;
    }
    cout<<a<<endl;
}


int main()
{
    country1();
}
