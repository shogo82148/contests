#include "KingXNewCurrency.h"
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

class KingXNewCurrencyTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    KingXNewCurrency solution;

    void testCase0() {
		int A = 5;
		int B = 8;
		int X = 5;
		int expected_ = 5;
        assertEquals(0, expected_, solution.howMany(A, B, X));
    }

    void testCase1() {
		int A = 8;
		int B = 4;
		int X = 2;
		int expected_ = -1;
        assertEquals(1, expected_, solution.howMany(A, B, X));
    }

    void testCase2() {
		int A = 7;
		int B = 4;
		int X = 13;
		int expected_ = 1;
        assertEquals(2, expected_, solution.howMany(A, B, X));
    }

    void testCase3() {
		int A = 47;
		int B = 74;
		int X = 44;
		int expected_ = 2;
        assertEquals(3, expected_, solution.howMany(A, B, X));
    }

    void testCase4() {
		int A = 128;
		int B = 96;
		int X = 3;
		int expected_ = 65;
        assertEquals(4, expected_, solution.howMany(A, B, X));
    }

    public: void runTest(int testCase) {
        switch (testCase) {
            case (0): testCase0(); break;
            case (1): testCase1(); break;
            case (2): testCase2(); break;
            case (3): testCase3(); break;
            case (4): testCase4(); break;
            default: cerr << "No such test case: " << testCase << endl; break;
        }
    }

};

int main() {
    for (int i = 0; i < 5; i++) {
        KingXNewCurrencyTest test;
        test.runTest(i);
    }
}
