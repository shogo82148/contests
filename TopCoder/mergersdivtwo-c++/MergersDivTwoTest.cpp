#include "MergersDivTwo.h"
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class MergersDivTwoTest {

    static void assertEquals(int testCase, double expected, double actual) {
        double delta = max(1e-9, 1e-9 * abs(expected));
        if (abs(expected - actual) <= delta) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout.precision(24);
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    MergersDivTwo solution;

    void testCase0() {
        int revenues_[] = {5, -7, 3};
        vector<int> revenues(revenues_, revenues_ + (sizeof(revenues_) / sizeof(revenues_[0])));
		int k = 2;
		double expected_ = 1.5;
        assertEquals(0, expected_, solution.findMaximum(revenues, k));
    }

    void testCase1() {
        int revenues_[] = {5, -7, 3};
        vector<int> revenues(revenues_, revenues_ + (sizeof(revenues_) / sizeof(revenues_[0])));
		int k = 3;
		double expected_ = 0.3333333333333333;
        assertEquals(1, expected_, solution.findMaximum(revenues, k));
    }

    void testCase2() {
        int revenues_[] = {1, 2, 2, 3, -10, 7};
        vector<int> revenues(revenues_, revenues_ + (sizeof(revenues_) / sizeof(revenues_[0])));
		int k = 3;
		double expected_ = 2.9166666666666665;
        assertEquals(2, expected_, solution.findMaximum(revenues, k));
    }

    void testCase3() {
        int revenues_[] = {-100, -100, -100, -100, -100, 100};
        vector<int> revenues(revenues_, revenues_ + (sizeof(revenues_) / sizeof(revenues_[0])));
		int k = 4;
		double expected_ = -66.66666666666667;
        assertEquals(3, expected_, solution.findMaximum(revenues, k));
    }

    void testCase4() {
        int revenues_[] = {869, 857, -938, -290, 79, -901, 32, -907, 256, -167, 510, -965, -826, 808, 890, -233, -881, 255, -709, 506, 334, -184, 726, -406, 204, -912, 325, -445, 440, -368};
        vector<int> revenues(revenues_, revenues_ + (sizeof(revenues_) / sizeof(revenues_[0])));
		int k = 7;
		double expected_ = 706.0369290573373;
        assertEquals(4, expected_, solution.findMaximum(revenues, k));
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
        MergersDivTwoTest test;
        test.runTest(i);
    }
}
