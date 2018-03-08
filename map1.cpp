#include <iostream>
#include <map>

using namespace std;

void song1();
{

    map<string, string>song;
    song["Ledena Kralica"]=;
    song["Shushana"]=;
    song["In the club"]=;
    song["Waka Waka"]=;
    song["Shape of you"]=;
    map<string, string>::iterator it;
    it=song.begin();
    while(it!=song.end())
    {
        cout<<it->first<<"-"<<it->second<<endl;
        it++;
    }

}

int main()
{

}
