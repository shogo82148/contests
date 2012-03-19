#include "KingXNewBaby.h"
#include <iostream>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::string;

class KingXNewBabyTest {

    static void assertEquals(int testCase, const string& expected, const string& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << '"' << expected << '"' << "> but was: <" << '"' << actual << '"' << '>' << endl;
        }
    }

    KingXNewBaby solution;

    void testCase0() {
		string name = "dengklek";
		string expected_ = "YES";
        assertEquals(0, expected_, solution.isValid(name));
    }

    void testCase1() {
		string name = "gofushar";
		string expected_ = "NO";
        assertEquals(1, expected_, solution.isValid(name));
    }

    void testCase2() {
		string name = "dolphinigle";
		string expected_ = "NO";
        assertEquals(2, expected_, solution.isValid(name));
    }

    void testCase3() {
		string name = "mystictc";
		string expected_ = "NO";
        assertEquals(3, expected_, solution.isValid(name));
    }

    void testCase4() {
		string name = "rngringo";
		string expected_ = "NO";
        assertEquals(4, expected_, solution.isValid(name));
    }

    void testCase5() {
		string name = "misof";
		string expected_ = "NO";
        assertEquals(5, expected_, solution.isValid(name));
    }

    void testCase6() {
		string name = "metelsky";
		string expected_ = "YES";
        assertEquals(6, expected_, solution.isValid(name));
    }

    public: void runTest(int testCase) {
        switch (testCase) {
            case (0): testCase0(); break;
            case (1): testCase1(); break;
            case (2): testCase2(); break;
            case (3): testCase3(); break;
            case (4): testCase4(); break;
            case (5): testCase5(); break;
            case (6): testCase6(); break;
            default: cerr << "No such test case: " << testCase << endl; break;
        }
    }

};

int main() {
    for (int i = 0; i < 7; i++) {
        KingXNewBabyTest test;
        test.runTest(i);
    }
}
