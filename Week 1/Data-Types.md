# Data Types

## Declaring Variables

- ``<DataType> <VariableName>`` declares a variable with the name ``VariableName`` of type ``DataType``.
  - ``int x;`` declares $x$ as a variable of type ``int``.

## Assigning Values to Variables

- Once a variable is declared, we can assign values to it with ``<VariableName> = <Value>``.
  - ``Value`` should be of the same data type as the variable.
    - ``x = 10;`` sets the value of x as 10.
  - Declaration and assignment can be done at once with ``<DataType> <VariableName> = <Value>``
    - ``int x = 10;``
  - We can also declare (and set) multiple variables at once as ``<DataType> <Name1>, <Name2>, ...``.

## Integer Types

```cpp
#include <iostream>
using namespace std;

int main(){
    int x = 10;
    long long y = 1000000000000;
    cout << x << ' ' << y << endl;
}
```

``` 
10 1000000000000
```

- There are multiple data types for storing integers each with a range of numbers it can represent based on the number of bits it uses.

  - Below is a table showing the range for some types.

    | Type         | Range               |
    | ------------ | ------------------- |
    | int          | $[-2^{31}, 2^{31})$ |
    | long long    | $[-2^{63}, 2^{63})$ |
    | unsigned int | $[0, 2^{32})$       |

  - The ``unsigned`` prefix allows for a larger range of positive numbers to be representable for the same number of bits at the cost of being unable to represent negative numbers.

  - Trying to store a number beyond the range of the data type causes what's known as an **overflow**. This is an example of **undefined behavior** which means that the behavior of the code when such a case occurs is not defined by the standard.

## Real Number Types

- ``float`` normally has 6 significant digits.
- ``double`` normally has 15 significant digits.
- ``long double`` normally has 33 significant digits. 

As you can guess from the expresssion *significant digits*, real number representation in computers comes with some degree of inaccuracy which can cause an issue in situations like below.

```cpp
#include <iostream>
using namespace std;

int main(){
    long double a = 0.1, b = 0.2;
    if (a+b == 0.3){ cout << "0.1 + 0.2 is 0.3". }
}
```

```
```

Yes, $0.1$ $+$ $0.2$ is **not** $0.3$.

## Characters and Strings

- ``char`` is used for storing a single ASCII character.
  - Basically 1 byte of data, note that Unicode characters are not 1 byte.
  - ``char`` type values are in single quote like `` 'a' ``.
- ``string`` is used to store a string of characters.
  - ``string`` type values are in double quotes like `` "Seele Vollerei" ``
  - To use ``string`` we actually need to include the ``string`` header which can be done with ``#include <string>``.

## Booleans

- Booleans use the ``bool`` keyword, and is one of two values: ``true`` or ``false``.
  - It is mostly used with conditionals to branch code based on certain conditions.
  - Any number that is not $0$ is evaluated ``true``, and $0$ is evaluated ``false``.