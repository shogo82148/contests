#include "EllysXors.h"
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

class EllysXorsTest {

    static void assertEquals(int testCase, const long long& expected, const long long& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    EllysXors solution;

    void testCase0() {
		long long L = 3LL;
		long long R = 10LL;
		long long expected_ = 8LL;
        assertEquals(0, expected_, solution.getXor(L, R));
    }

    void testCase1() {
		long long L = 5LL;
		long long R = 5LL;
		long long expected_ = 5LL;
        assertEquals(1, expected_, solution.getXor(L, R));
    }

    void testCase2() {
		long long L = 13LL;
		long long R = 42LL;
		long long expected_ = 39LL;
        assertEquals(2, expected_, solution.getXor(L, R));
    }

    void testCase3() {
		long long L = 666LL;
		long long R = 1337LL;
		long long expected_ = 0LL;
        assertEquals(3, expected_, solution.getXor(L, R));
    }

    void testCase4() {
		long long L = 1234567LL;
		long long R = 89101112LL;
		long long expected_ = 89998783LL;
        assertEquals(4, expected_, solution.getXor(L, R));
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
        EllysXorsTest test;
        test.runTest(i);
    }
}
