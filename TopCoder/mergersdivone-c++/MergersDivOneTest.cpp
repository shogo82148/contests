#include "MergersDivOne.h"
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class MergersDivOneTest {

    static void assertEquals(int testCase, double expected, double actual) {
        double delta = max(1e-9, 1e-9 * abs(expected));
        if (abs(expected - actual) <= delta) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout.precision(24);
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    MergersDivOne solution;

    void testCase0() {
        int revenues_[] = {5, -7, 3};
        vector<int> revenues(revenues_, revenues_ + (sizeof(revenues_) / sizeof(revenues_[0])));
		double expected_ = 1.5;
        assertEquals(0, expected_, solution.findMaximum(revenues));
    }

    void testCase1() {
        int revenues_[] = {10, -17};
        vector<int> revenues(revenues_, revenues_ + (sizeof(revenues_) / sizeof(revenues_[0])));
		double expected_ = -3.5;
        assertEquals(1, expected_, solution.findMaximum(revenues));
    }

    void testCase2() {
        int revenues_[] = {12, 12, 12, 12, 12};
        vector<int> revenues(revenues_, revenues_ + (sizeof(revenues_) / sizeof(revenues_[0])));
		double expected_ = 12.0;
        assertEquals(2, expected_, solution.findMaximum(revenues));
    }

    void testCase3() {
        int revenues_[] = {0, 0, 0, 0, 0, 100};
        vector<int> revenues(revenues_, revenues_ + (sizeof(revenues_) / sizeof(revenues_[0])));
		double expected_ = 50.0;
        assertEquals(3, expected_, solution.findMaximum(revenues));
    }

    void testCase4() {
        int revenues_[] = {10, -10, 100, -100, 1000, -1000};
        vector<int> revenues(revenues_, revenues_ + (sizeof(revenues_) / sizeof(revenues_[0])));
		double expected_ = 491.25;
        assertEquals(4, expected_, solution.findMaximum(revenues));
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
        MergersDivOneTest test;
        test.runTest(i);
    }
}
