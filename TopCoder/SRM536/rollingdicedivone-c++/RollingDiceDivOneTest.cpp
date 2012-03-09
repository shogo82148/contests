#include "RollingDiceDivOne.h"
#include <iostream>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::vector;

class RollingDiceDivOneTest {

    static void assertEquals(int testCase, const long long& expected, const long long& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    RollingDiceDivOne solution;

    void testCase0() {
        int dice_[] = {6, 6, 8};
        vector<int> dice(dice_, dice_ + (sizeof(dice_) / sizeof(dice_[0])));
		long long expected_ = 11LL;
        assertEquals(0, expected_, solution.mostLikely(dice));
    }

    void testCase1() {
        int dice_[] = {10};
        vector<int> dice(dice_, dice_ + (sizeof(dice_) / sizeof(dice_[0])));
		long long expected_ = 1LL;
        assertEquals(1, expected_, solution.mostLikely(dice));
    }

    void testCase2() {
        int dice_[] = {2, 3, 4, 5};
        vector<int> dice(dice_, dice_ + (sizeof(dice_) / sizeof(dice_[0])));
		long long expected_ = 9LL;
        assertEquals(2, expected_, solution.mostLikely(dice));
    }

    void testCase3() {
        int dice_[] = {1, 10, 1};
        vector<int> dice(dice_, dice_ + (sizeof(dice_) / sizeof(dice_[0])));
		long long expected_ = 3LL;
        assertEquals(3, expected_, solution.mostLikely(dice));
    }

    void testCase4() {
        int dice_[] = {382828264, 942663792, 291832707, 887961277, 546603677, 545185615, 146267547, 6938117, 167567032, 84232402, 700781193, 452172304, 816532384, 951089120, 448136091, 280899512, 256093435, 39595226, 631504901, 154772240};
        vector<int> dice(dice_, dice_ + (sizeof(dice_) / sizeof(dice_[0])));
		long long expected_ = 4366828428LL;
        assertEquals(4, expected_, solution.mostLikely(dice));
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
        RollingDiceDivOneTest test;
        test.runTest(i);
    }
}
