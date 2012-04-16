#include "EvenRoute.h"
#include <iostream>
#include <string>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class EvenRouteTest {

    static void assertEquals(int testCase, const string& expected, const string& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << '"' << expected << '"' << "> but was: <" << '"' << actual << '"' << '>' << endl;
        }
    }

    EvenRoute solution;

    void testCase0() {
        int x_[] = {-1, -1, 1, 1};
        vector<int> x(x_, x_ + (sizeof(x_) / sizeof(x_[0])));
        int y_[] = {-1, 1, 1, -1};
        vector<int> y(y_, y_ + (sizeof(y_) / sizeof(y_[0])));
		int wantedParity = 0;
		string expected_ = "CAN";
        assertEquals(0, expected_, solution.isItPossible(x, y, wantedParity));
    }

    void testCase1() {
        int x_[] = {-5, -3, 2};
        vector<int> x(x_, x_ + (sizeof(x_) / sizeof(x_[0])));
        int y_[] = {2, 0, 3};
        vector<int> y(y_, y_ + (sizeof(y_) / sizeof(y_[0])));
		int wantedParity = 1;
		string expected_ = "CAN";
        assertEquals(1, expected_, solution.isItPossible(x, y, wantedParity));
    }

    void testCase2() {
        int x_[] = {1001, -4000};
        vector<int> x(x_, x_ + (sizeof(x_) / sizeof(x_[0])));
        int y_[] = {0, 0};
        vector<int> y(y_, y_ + (sizeof(y_) / sizeof(y_[0])));
		int wantedParity = 1;
		string expected_ = "CAN";
        assertEquals(2, expected_, solution.isItPossible(x, y, wantedParity));
    }

    void testCase3() {
        int x_[] = {11, 21, 0};
        vector<int> x(x_, x_ + (sizeof(x_) / sizeof(x_[0])));
        int y_[] = {-20, 42, 7};
        vector<int> y(y_, y_ + (sizeof(y_) / sizeof(y_[0])));
		int wantedParity = 0;
		string expected_ = "CANNOT";
        assertEquals(3, expected_, solution.isItPossible(x, y, wantedParity));
    }

    void testCase4() {
        int x_[] = {0, 6};
        vector<int> x(x_, x_ + (sizeof(x_) / sizeof(x_[0])));
        int y_[] = {10, -20};
        vector<int> y(y_, y_ + (sizeof(y_) / sizeof(y_[0])));
		int wantedParity = 1;
		string expected_ = "CANNOT";
        assertEquals(4, expected_, solution.isItPossible(x, y, wantedParity));
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
        EvenRouteTest test;
        test.runTest(i);
    }
}
