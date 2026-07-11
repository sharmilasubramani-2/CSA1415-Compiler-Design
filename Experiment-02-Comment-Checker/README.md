# Compiler Design Lab

# Experiment 02: Comment Checker

## Aim

To develop a lexical analyzer to identify whether a given line is a comment or not.

## Algorithm

1. Start.
2. Read a line of input.
3. Check if it begins with "//".
4. If yes, print "Single line comment".
5. Else check if it begins with "/*".
6. If yes, print "Multi line comment".
7. Otherwise print "Not a comment".
8. Stop.

## Pseudocode

```
START

Read input line

IF line starts with "//"
    Print "Single line comment"

ELSE IF line starts with "/*"
    Print "Multi line comment"

ELSE
    Print "Not a comment"

STOP
```

## Sample Input

```text
// This is a comment
```

## Sample Output

```text
Single line comment
```

## Result

Thus the C program to identify whether the given line is a comment or not was implemented and executed successfully.