#include <iostream>
#include <string>

using namespace std;

struct Scanner {
    string s;
    int pos;
    Scanner(string s) {
        this->s = s;
        pos = 0;
    }

    char head() {
        if(pos<s.size())
            return s[pos];
        else
            return '\0';
    }

    void next() {
        ++pos;
    }
};

bool formula(Scanner& scanner, int in) {
    char h = scanner.head();
    scanner.next();
    switch(h) {
    case 'T':
        //cout << "T" << endl;
        return true;
    case 'F':
        //cout << "F" << endl;
        return false;
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
        //cout << h << "=" << ((in & (1<<(h-'a'))) != 0) << endl;
        return (in & (1<<(h-'a'))) != 0;
    case '-':
    {
        bool a = formula(scanner, in);
        //cout << "Not " << a << endl;
        return !a;
    }
    case '(':
    {
        bool a = formula(scanner, in);
        char op = scanner.head();
        scanner.next();
        if(op=='-') scanner.next();
        bool b = formula(scanner, in);
        scanner.next(); // for )
        switch(op) {
        case '*':
            //cout << a << "*" << b << endl;
            return a && b;
        case '+':
            //cout << a << "+" << b << endl;
            return a || b;
        case '-':
            //cout << a << "->" << b << endl;
            return !a || b;
        }
    }
    }
}

bool check(const string& eq, int in) {
    Scanner scanner(eq);
    bool a = formula(scanner, in);
    scanner.next();
    bool b = formula(scanner, in);
    return a==b;
}

int main() {
    while(1) {
        string in;
        cin >> in;
        if(in=="#") break;

        bool f = true;
        for(int i=0;i<(1<<11);++i) {
            f = f && check(in, i);
        }
        if(f) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
