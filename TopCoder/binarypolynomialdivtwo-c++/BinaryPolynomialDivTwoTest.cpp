#include "BinaryPolynomialDivTwo.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class BinaryPolynomialDivTwoTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    BinaryPolynomialDivTwo solution;

    void testCase0() {
        int a_[] = {1, 0, 1};
        vector<int> a(a_, a_ + (sizeof(a_) / sizeof(a_[0])));
		int expected_ = 1;
        assertEquals(0, expected_, solution.countRoots(a));
    }

    void testCase1() {
        int a_[] = {0, 1, 0, 1};
        vector<int> a(a_, a_ + (sizeof(a_) / sizeof(a_[0])));
		int expected_ = 2;
        assertEquals(1, expected_, solution.countRoots(a));
    }

    void testCase2() {
        int a_[] = {1};
        vector<int> a(a_, a_ + (sizeof(a_) / sizeof(a_[0])));
		int expected_ = 0;
        assertEquals(2, expected_, solution.countRoots(a));
    }

    void testCase3() {
        int a_[] = {1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1};
        vector<int> a(a_, a_ + (sizeof(a_) / sizeof(a_[0])));
		int expected_ = 0;
        assertEquals(3, expected_, solution.countRoots(a));
    }

    void testCase4() {
        int a_[] = {1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 1, 1};
        vector<int> a(a_, a_ + (sizeof(a_) / sizeof(a_[0])));
		int expected_ = 1;
        assertEquals(4, expected_, solution.countRoots(a));
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
        BinaryPolynomialDivTwoTest test;
        test.runTest(i);
    }
}
