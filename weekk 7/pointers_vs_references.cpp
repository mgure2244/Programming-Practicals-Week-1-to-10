// ACTIVITY 2: POINTERS VS REFERENCES

#include <iostream>
using namespace std;

int main() {

    // 1. A normal integer variable
    int originalValue = 100;

    // 2. A reference variable
    int& refValue = originalValue;

    // 3. A pointer variable
    int* ptrValue = &originalValue;

    cout << "--- Initial State ---" << endl;

    cout << "originalValue: " << originalValue << endl;
    cout << "refValue: " << refValue << endl;
    cout << "ptrValue points to: " << *ptrValue << endl;

    // Modification 1
    refValue = 200;

    cout << "\n--- After setting refValue = 200 ---" << endl;

    cout << "originalValue: " << originalValue << endl;
    cout << "ptrValue points to: " << *ptrValue << endl;

    // Modification 2
    *ptrValue = 300;

    cout << "\n--- After setting *ptrValue = 300 ---" << endl;

    cout << "originalValue: " << originalValue << endl;
    cout << "refValue: " << refValue << endl;

    // Modification 3
    int anotherValue = 500;

    ptrValue = &anotherValue;

    cout << "\n--- After pointing ptrValue to anotherValue ---" << endl;

    cout << "originalValue: " << originalValue << endl;
    cout << "ptrValue points to: " << *ptrValue << endl;

    return 0;
}
