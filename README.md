## Caesar-Cipher-C 

## This program implements the Caesar cipher algorithm in the C programming language.
**How does the code work?**

`ROTN -n '25 < N > 0' -e encryption or -d decryption and message ...`

- The program performs the following functions:
    - Encrypts text
    - Decrypts text 
    - Custom shift value specified by the user (between 0 and 25)
    - Preserves all other symbols 

## Properties of functions

`void   ROT13(char *ROT, int N)` 
- The purpose of this function is to translate using key 13; this key is the same as the encryption and decryption key because it is in the middle.

`void    Encryption(char *ROTN, int N)`
- The purpose of this is encryption using a key, so that the original character is passed by the amount of the key.

`void    Decryption(char *ROTN, int N)`
- The purpose of this function is to decrypt the data using the key.

`int main(int argc, char **argv)`
- The main function's purpose is to control the program's inputs and outputs.

## Examples of how the program works
- Encrypts 

```
┌──(billy㉿kali)-[~/Desktop/program]
└─$ ./ROTN -n 17 -e "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz0123456789@#$%^&*\_+-=|;:'"          
RrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQq0123456789@#$%^&*\_+-=|;:'  
```

- Decrypts
```
┌──(billy㉿kali)-[~/Desktop/program]
└─$ ./ROTN -n 17 -d "RrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQq0123456789@#$%^&*\_+-=|;:'" 
AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz0123456789@#$%^&*\_+-=|;:'                                                                                                                   

```
- ROT13
```
┌──(billy㉿kali)-[~/Desktop/program]
└─$ ./ROTN -n 13 -e "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"

NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm0123456789                                                                                                                   
┌──(billy㉿kali)-[~/Desktop/program]
└─$ ./ROTN -n 13 -d "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm0123456789"
ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789                                                                                                                   
┌──(billy㉿kali)-[~/Desktop/program]
└─$ 


```
## Lessons Learned
- In this exercise, I learned how to create and organize the program, and understood the mechanism of the Caesar cipher algorithm. Artificial intelligence was used by no more than 5%, and no pre-built functions were used; this was done with the aim of learning how to work at the low level of the C language.
## ٌResearch
- To understand how rot13 works, [click here](https://en.wikipedia.org/wiki/ROT13).
## About Me
- [linkedin](https://ma.linkedin.com/in/hamza-el-ansary-799368386)
- [github](https://github.com/settings/profile)

