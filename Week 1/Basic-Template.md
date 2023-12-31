# Basic Template (Hello World!)

```cpp
#include <iostream>
using namespace std;

int main(){
    cout << "Hello World!";
}
```

```
Hello World!
```

- ``#include <iostream>`` includes the ``iostream`` **header**. It contains functions related to input and output such as ``cin`` and ``cout``. 
- In ``using namespace std;`` we specify that we will use the ``std`` namespace.
  - Fuctions and structs are defined and distinguished by their namespace in C++.
  - This line isn't recommended for actual development but it is useful for problem solving since ``std`` is the namespace we will use most often.
- ``int main(){ ... }`` is the main function of our program. 
  - The ``main`` function specifies the starting point of execution. 
  - Since the type is specified as main, it must return an ``int`` type value. This works as the exit code of our program.
  - If the program terminated without error, it must return 0.
- Finally, ``cout << "Hello World!";`` prints ``Hello World!`` as output.