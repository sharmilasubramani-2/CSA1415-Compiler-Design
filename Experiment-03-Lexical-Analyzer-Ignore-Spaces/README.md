# Compiler Design Lab

# Experiment 03: Lexical Analyzer to Ignore Spaces, Tabs, New Lines and Comments

## Aim

To design a lexical analyzer that ignores spaces, tabs, new lines and comments from a C source file.

## Algorithm

1. Start.
2. Open the input file.
3. Read one character at a time.
4. Ignore spaces, tabs and new lines.
5. If `//` is found, ignore the line.
6. If `/* */` is found, ignore the block.
7. Print the remaining characters.
8. Stop.

## Pseudocode

```
START

Open file

Read each character

IF space/tab/newline
    Ignore

ELSE IF // comment
    Ignore till end of line

ELSE IF /* comment */
    Ignore till */

ELSE
    Print character

Close file

STOP
```

## Sample Input

```c
int a = 10;

// comment

int b = 20;
```

## Sample Output

```
inta=10;intb=20;
```

## Result

Thus the lexical analyzer successfully ignored spaces, tabs, new lines and comments.