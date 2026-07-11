# Compiler Design Lab

## Experiment 01: Lexical Analyzer

## Aim

To develop a lexical analyzer that identifies identifiers, constants, and operators in a C program while ignoring spaces, tabs, new lines, and comments.

## Algorithm

1. Open the input file.
2. Read the file character by character.
3. Ignore spaces, tabs and new lines.
4. Ignore single-line and multi-line comments.
5. Identify keywords and identifiers.
6. Identify constants.
7. Identify operators.
8. Display the identified tokens.
9. Close the file.

## Pseudocode

```text
START

Open input file

WHILE not end of file

    Read one character

    IF space, tab or new line
        Ignore

    ELSE IF comment
        Ignore

    ELSE IF alphabet
        Read complete word
        IF keyword
            Print Keyword
        ELSE
            Print Identifier

    ELSE IF digit
        Read complete number
        Print Constant

    ELSE IF operator
        Print Operator

END WHILE

Close file

STOP
```

## Sample Input

```c
#include<stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    // Single line comment

    /*
       Multi line comment
    */

    int sum = a + b;

    return 0;
}
```

## Sample Output

```text
Identifier : include
Operator : <
Identifier : stdio
Identifier : h
Operator : >
Keyword : int
Identifier : main
Keyword : int
Identifier : a
Operator : =
Constant : 10
Keyword : int
Identifier : b
Operator : =
Constant : 20
Keyword : int
Identifier : sum
Operator : =
Identifier : a
Operator : +
Identifier : b
Keyword : return
Constant : 0
```

## Result

The lexical analyzer was successfully developed to identify identifiers, constants, and operators while ignoring spaces, tabs, new lines, and comments.