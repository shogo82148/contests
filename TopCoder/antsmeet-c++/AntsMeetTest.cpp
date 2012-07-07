#include "AntsMeet.h"
#include <iostream>
#include <string>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class AntsMeetTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    AntsMeet solution;

    void testCase0() {
        int x_[] = {0, 10, 20, 30};
        vector<int> x(x_, x_ + (sizeof(x_) / sizeof(x_[0])));
        int y_[] = {0, 10, 20, 30};
        vector<int> y(y_, y_ + (sizeof(y_) / sizeof(y_[0])));
		string direction = "NWNE";
		int expected_ = 2;
        assertEquals(0, expected_, solution.countAnts(x, y, direction));
    }

    void testCase1() {
        int x_[] = {-10, 0, 0, 10};
        vector<int> x(x_, x_ + (sizeof(x_) / sizeof(x_[0])));
        int y_[] = {0, -10, 10, 0};
        vector<int> y(y_, y_ + (sizeof(y_) / sizeof(y_[0])));
		string direction = "NEWS";
		int expected_ = 0;
        assertEquals(1, expected_, solution.countAnts(x, y, direction));
    }

    void testCase2() {
        int x_[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
        vector<int> x(x_, x_ + (sizeof(x_) / sizeof(x_[0])));
        int y_[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
        vector<int> y(y_, y_ + (sizeof(y_) / sizeof(y_[0])));
		string direction = "ESEWNNEWW";
		int expected_ = 4;
        assertEquals(2, expected_, solution.countAnts(x, y, direction));
    }

    void testCase3() {
        int x_[] = {4, 7, 6, 2, 6, 5, 7, 7, 8, 4, 7, 8, 8, 8, 5, 4, 8, 9, 1, 5, 9, 3, 4, 0, 0, 1, 0, 7, 2, 6, 9, 6, 3, 0, 5, 5, 1, 2, 0, 4, 9, 7, 7, 1, 8, 1, 9, 2, 7, 3};
        vector<int> x(x_, x_ + (sizeof(x_) / sizeof(x_[0])));
        int y_[] = {2, 3, 0, 6, 8, 4, 9, 0, 5, 0, 2, 4, 3, 8, 1, 5, 0, 7, 3, 7, 0, 9, 8, 1, 9, 4, 7, 8, 1, 1, 6, 6, 6, 2, 8, 5, 1, 9, 0, 1, 1, 1, 7, 0, 2, 5, 4, 7, 5, 3};
        vector<int> y(y_, y_ + (sizeof(y_) / sizeof(y_[0])));
		string direction = "SSNWSWSENSWSESWEWSWSENWNNNESWSWSWWSSWEEWWNWWWNWENN";
		int expected_ = 25;
        assertEquals(3, expected_, solution.countAnts(x, y, direction));
    }

    void testCase4() {
        int x_[] = {478, -664, 759, 434, -405, 513, 565, -396, 311, -174, 56, 993, 251, -341, 993, -112, 242, 129, 383, 513, -78, -341, -148, 129, 423, 493, 434, -405, 478, -148, 929, 251, 56, 242, 929, -78, 423, -664, 802, 251, 759, 383, -112, -591, -591, -248, 660, 660, 735, 493};
        vector<int> x(x_, x_ + (sizeof(x_) / sizeof(x_[0])));
        int y_[] = {-186, 98, 948, 795, 289, -678, 948, -170, -195, 290, -354, -424, 289, -157, -166, 150, 706, -678, 684, -294, -234, 36, 36, -294, -216, -234, 427, 945, 265, -157, 265, 715, 275, 715, -186, 337, 798, -170, 427, 706, 754, 961, 286, -216, 798, 286, 961, 684, -424, 337};
        vector<int> y(y_, y_ + (sizeof(y_) / sizeof(y_[0])));
		string direction = "WNSNNSSWWWEENWESNSWSWSEWWEWEWWWNWESNSSNNSNNWWWNESE";
		int expected_ = 44;
        assertEquals(4, expected_, solution.countAnts(x, y, direction));
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
        AntsMeetTest test;
        test.runTest(i);
    }
}
