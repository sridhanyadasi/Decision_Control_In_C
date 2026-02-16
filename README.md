# if – else if – else in C

This repository is created to help beginners understand **if, else if, and else conditions in C programming** using simple and clear examples.

--------------------------------------------------

## 🔹 What is if – else if – else?

"if – else if – else" is a decision-making statement in C.

It is used to:
- check multiple conditions
- execute one block of code based on the true condition

The program checks conditions from top to bottom.
Once a condition becomes true, the remaining conditions are skipped.

--------------------------------------------------

## 🔹 Why Do We Use if – else if – else?

We use this statement to:
- make decisions in programs
- control the flow of execution
- handle multiple conditions easily
- write meaningful and logical programs

Without conditional statements, programs cannot respond to different inputs.

--------------------------------------------------

## 🔹 Syntax


if (condition1) {
    // code block
}
else if (condition2) {
    // code block
}
else {
   // code block
}


🔹 How It Works

if condition is checked first

if it is false, else if condition is checked

if all conditions are false, else block executes

only one block executes at a time

🔹 Example Program
#include <stdio.h>

int main() {
    int marks = 78;

  if (marks >= 90) {
        printf("Grade A");
    }
    else if (marks >= 75) {
        printf("Grade B");
    }
    else if (marks >= 50) {
        printf("Grade C");
    }
    else {
        printf("Fail");
    }

   return 0;
}

🔹 Uses of if – else if – else

student grading system

checking eligibility (age, marks, salary)

comparing numbers

menu-driven programs

real-time decision making

🎯 Purpose of This Repository

To understand decision control statements clearly

To practice conditional logic in C

To build strong programming fundamentals

To prepare for advanced C concepts


## 🔹 Flowchart for if – else if – else

Start
  |
  v
Check Condition 1?
  |
  |---- Yes ----> Execute Statement 1
  |                 |
  |                 v
  |               End
  |
  |---- No ----> Check Condition 2?
                    |
                    |---- Yes ----> Execute Statement 2
                    |                 |
                    |                 v
                    |               End
                    |
                    |---- No ----> Execute Else Statement
                                      |
                                      v
                                    End


👩‍💻 Author

Sri Dhanya
