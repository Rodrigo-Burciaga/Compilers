# Practice 2

## Description

AFN with epsilon transitions, and error handler


File Format

```
Q 0,1,2  
E a,b
S 0
F 2
0,a,0
0,b,0
0,b,1
0,a,1
1,b,2
1,b,0
```

where 

- Q: States
- E: Alphabet
- S: Initial state
- F: Final state
- Other: Transistions where the first character is the actual state, second character is the character with wich transition is completed and the third character is te state where goes with second character, all characters are separated by a comma