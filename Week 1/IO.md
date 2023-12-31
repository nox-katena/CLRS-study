# Input and Output

## Output

Recall the `` cout << "Hello World!"; `` example, to print variables similarly, we can do `` cout << <VariableName>; ``.

To print a newline character at the end, simply add `` << '\n'; `` like `` cout << <VariableName> << '\n';``.

What we can guess from this is that if we can print multiple items with one `` cout `` call by separating with `` << ``. For example, `` cout << var1 << ' ' << var2 << '\n'; ``.

We can also use ``endl`` like `` cout << "Hello World!" << endl;`` toprint a newline but this has additional functionality which we will look at in the following weeks.

## Input

Recall `` cout `` was for output. Likewise, we use `` cin `` for input. If we have a variable $x$, we use `` cin >> x; `` to take input for value of x from console.

### Warning: Whitespaces

Whitespaces (space: ``' '``, tab: ``'\t'``, newline: ``'\n'``) are used as separators for `` cin `` so when taking an entire line as input, we need to be careful.

```cpp
#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    cout << s;
}
```

The above code with `` Hello World!`` as input will output the below.

```
Hello
```

If we want the code to output `` Hello World! ``, we should modify the code using the `` getline`` function as follows.

```cpp
#include <iostream>
using namespace std;

int main(){
    int x; cin >> x;
    cin.ignore();
    string s; getline(cin, s);
    cout << x << ' ' << s;
}
```

``cin.ignore()`` is used to remove the trailing newline character remaining in buffer.