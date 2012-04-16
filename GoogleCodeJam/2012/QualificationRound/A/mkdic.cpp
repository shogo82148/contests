#include <fstream>
#include <iostream>

using namespace std;

char map[257];
char imap[257];
int main()
{
    ifstream in("example.in");
    ifstream out("example.out");
    int T;
    string s;

    fill(map, map+256, ' ');
    fill(imap, imap+256, ' ');

    in >> T;
    getline(in, s);
    for(int i=0;i<T;++i) {
        string str_in, str_out;
        getline(in, str_in);
        getline(out, str_out);
        for(int j=0;j<(int)str_in.size();++j) {
            map[str_in[j]] = str_out[j];
            imap[str_out[j]] = str_in[j];
        }
    }

    char rin = '\0', rout = '\0';
    for(int i='a'; i<='z'; ++i) {
        if(map[i]==' ') rin = i;
        if(imap[i]==' ') rout = i;
    }
    map[rin] = rout;
    imap[rout] = rin;
    cout << "\"" << map << "\"" << endl;
    return 0;
}
