# DSA with C & C++
### **`Basic terminology elementery data organization`**

A data item refer to a single unit values. data items are divided into sub items those are called group items. Collection of data are frequently organize into a record & field in order to make these items more precise some additional terminology are required.

- **`Entity`** : An entity is something that has certain attributes for properties which may be assiend values, the vales may be numeric & non numeric.

- **`Inforamtion`** : The term information or sometimes used for data with given attributes or meaningful & processed data.

- **`Files`** : A file can have fixed length records & variable length record.

##### **`First program in C`**
[`First program in C`](/Basics/01.%20firstProgram.c)

``` c
    1   #include <stdio.h>
    2   void main(){
    3       printf("Hello World"); // 
    4   }
```
Output :- 
```
    Hello World
```
1.  
``` c
    #include <stdio.h>
    /*
    # - Preprocess Directive
    include - To include the header in program
    <stdio.h> - standard header

    */
```
2. 
``` c
    void main(){
        // code
    }
    /*
    void - return type function

    main(){} - the execution of program starts

    */
```
3. 
``` c
    printf("Hello World");
    /*
    printf() will print the string in the console that is in between double quotes.
    */
```

`Compiler & Interpreter`

- **`Compiler`** is used to translate the high level language to low level & low level to high level. It translate source code one page at a time.

- **`Interpreter`** is also used to translate high level language to low level & low level to high level. It translate source code in line by line.

> [ Q. WAP in C to calculate area of circle.](/1.%20Basics/02.%20areaOfCircle.c)

> [ Q. WAP in C to calculate area of square.](/1.%20Basics/03.%20areaOfSquare.c)


**`Comment` :** 
Comment is a line of code that can't be executed. In c there are two types of commment.
> 1. single line comment - //

> 2. Multiline comment - /*   */

> **C language is a case sensitive language.**

**`Variable and Datatypes`**

**Variable** are memory buckets that store our values & has a name as well.

 **`Escape sequence`**

 - `\n` : new line
 - `\b` : baskspace
 - `\r` : carriage return
 - `\t` : tab-space
 - `\a` : alert
 - `\\` : slash  

**`Conditional Statement`**

**For loop :**
``` c
    for(initialization; test condition; updation) {
        //code
    }
```
 **flow diagram of for loop**
 ![for loop](/resource/C-for-Loop.png)

e.g : print the number 1 to 5.
``` c
    #include <stdio.h>
    int main() {
        int i;
        for(i = 1; i <= 5;i++){
            printf("%d\t", &i);
        }

        return 0;
    }
    /* 
    output : 
        1   2   3   4   5
    */
``` 
> [WAP in C to print the number from 10 to 1.](/1.%20Basics/08.%20forLoop.c)
