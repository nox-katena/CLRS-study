# Operators

We only covered some basic operators related to arithmetic operations this week. Logical operators and bitwise operators will be covered in the following weeks.

## Arithmetic

The arithmetic operators are `` +, -, *, /, % ``.

```cpp
#include <iostream>
using namespace std;

int main(){
    int x = 5, y = 3;
    cout << x+y << endl;
    cout << x-y << endl;
    cout << x*y << endl;
    cout << x/y << endl;
    cout << x%y << endl;
}
```

```
8
2
15
1
2
```

- `` + `` : This operator adds two values. For integers and real numbers, this works as you would expect. For strings, it can also be used to concatenate two strings like `` string s = "Hello " + "World"; ``.
- ``-`` : This operator substracts the second value from the first value. 
- `` * `` : This operator returns the product of two values.
- `` / `` : This operator returns the result of dividing the first number with the second number. 
  - Why was $5/3 = 1$ then? It's because for operations between two integers, the return is also expected to be an integer, so the real number part of the division is ignored. You can think of it as the quotient of integer division.
- `` % `` : This operator returns the remainder from dividing the first number with the second number.

## Compound Assignment

When we want to assign the value from applying an operation to a variable to that same variable (such as `` x = x + y; ``), we can reduce this to `` x += y; ``. This is called compound assignment.  

This works for a lot of different operators. Examples include `` x -= y; ``, `` x *= y;``, ``x <<= y;``. We will look at the last one later.

## Incremental/Decremental Operators

Ways to do `` x += 1`` and `` x-= 1``.

- `` a++ `` : add $1$ to $a$. If used in an expression, the addition is applied **after** the expression is evaluated.
- `` ++a `` : add $1$ to $a$. If used in an expression, the addition is applied **before** the expression is evaluated.
- `` a-- `` : subtract $1$ from $a$. If used in an expression, the subtraction is applied **after** the expression is evaluated.
- `` --a `` : subtract $1$ from $a$. If used in an expression, the subtraction is applied **before** the expression is evaluated.

```cpp
#include <iostream>
using namespace std;

int main(){
    int x = 3;
    cout << x << endl;
    cout << x++ << endl;
    cout << x << endl;
    cout << ++x << endl;
    cout << x << endl;
}
```

```
3
3
4
5
5
```

