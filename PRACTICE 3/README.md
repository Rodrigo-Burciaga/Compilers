# PRACTICE 3 LEXICAL ANALYZER IN FLEX

## Usage

```
* flex practice.l
* gcc lex.yy.c -lfl -o practice
* ./practice
```


## What does

The program recognizes:
* variables "c syntax"
* integers and decimals
* potency = pow(number,number) or number^number
* module mod(number,number)
* password [a-zA-Z0-9@\.]\* it must contain at least one capital letter, one symbol and lowercase letter
* signs +,},*,\,