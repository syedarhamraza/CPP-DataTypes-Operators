#include <iostream>
#include <cmath> // for using pow() function as an example (not required by the user)

using namespace std;

// Function to demonstrate the usage of all data types and operators
int main() {
    // 1. **Primitive Data Types**
    
    // Integer types
    int num1 = 10, num2 = 20;
    short s = 5;
    long l = 100000L;
    long long ll = 10000000000LL;

    // Floating-point types
    float f = 3.14f;
    double d = 3.1415926535;
    long double ld = 3.141592653589793238L;

    // Character type
    char c = 'A';

    // Boolean type
    bool isTrue = true;

    // Void type is not directly usable in an expression, but we'll use it for the function return type.
    
    // 2. **Array and Pointer Types**
    int arr[3] = {1, 2, 3};
    int *ptr = &num1; // Pointer to num1

    // 3. **Struct (User-defined Data Type)**
    struct Person {
        string name;
        int age;
    };
    Person p1 = {"John", 30};

    // 4. **Operators**
    
    // Arithmetic Operators
    int sum = num1 + num2;             // Addition
    int difference = num2 - num1;      // Subtraction
    int product = num1 * num2;         // Multiplication
    double quotient = (double)num2 / num1; // Division (casting to double for precision)
    int remainder = num2 % num1;       // Modulus (remainder)

    // Relational Operators
    bool isEqual = (num1 == num2);     // Equality
    bool isNotEqual = (num1 != num2);  // Not equal
    bool isGreater = (num2 > num1);    // Greater than
    bool isLesser = (num1 < num2);     // Less than

    // Logical Operators
    bool logicalAnd = (isTrue && isNotEqual); // AND
    bool logicalOr = (isTrue || isEqual);    // OR
    bool logicalNot = !isTrue;                // NOT

    // Bitwise Operators
    int bitwiseAnd = num1 & num2;          // Bitwise AND
    int bitwiseOr = num1 | num2;           // Bitwise OR
    int bitwiseXor = num1 ^ num2;          // Bitwise XOR
    int bitwiseNot = ~num1;                // Bitwise NOT
    int leftShift = num1 << 1;              // Left shift (equivalent to multiplying by 2)
    int rightShift = num2 >> 1;             // Right shift (equivalent to dividing by 2)

    // Increment/Decrement Operators
    num1++;  // Increment
    num2--;  // Decrement

    // Assignment Operators
    num1 += 5; // Add and assign
    num2 *= 2; // Multiply and assign

    // 5. **Conditional (Ternary) Operator**
    string result = (num1 > num2) ? "num1 is greater" : "num2 is greater";

    // 6. **Type-Casting Operators**
    double castedValue = static_cast<double>(num1); // Static cast

    // 7. **Scope Resolution Operator**
    //cout << "Scope resolution operator example: " << ::c << endl; // global c (if defined outside)

    // 8. **sizeof Operator**
    cout << "Size of int: " << sizeof(num1) << " bytes" << endl;

    // 9. **Member Access Operator (Dot and Arrow)**
    cout << "Person Name: " << p1.name << ", Age: " << p1.age << endl;

    // 10. **New and Delete Operators (dynamic memory)**
    int *dynVar = new int(25); // Allocating memory dynamically
    cout << "Dynamically allocated value: " << *dynVar << endl;
    delete dynVar; // Deallocating memory

    // 11. **Exception Handling (try, catch)**
    try {
        if (num2 == 0)
            throw "Division by zero exception";
        else
            cout << "Division result: " << num1 / num2 << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    // 12. **Typeid Operator**
    cout << "Type of num1: " << typeid(num1).name() << endl;

    // Printing results
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;
    cout << "Is num1 equal to num2? " << isEqual << endl;
    cout << "Logical AND: " << logicalAnd << endl;
    cout << "Logical OR: " << logicalOr << endl;
    cout << "Left Shift (num1 << 1): " << leftShift << endl;
    cout << "Right Shift (num2 >> 1): " << rightShift << endl;
    cout << "Casted Value: " << castedValue << endl;
    cout << "Result of ternary operator: " << result << endl;

    return 0;
}
