//You can use std::oct to print number in octal notation.

 #include<iostream>
 #include<bits/stdc++.h>

 int main()
 {

int n = 123;

std::cout << std::oct << n << std::endl;

//Similarly you can print number in different notations like decimal - std::dec and hexadecimal - std::hex.

 

//Those input/output manipulators allow user to parse string numbers in various notations.

 

int j;

std::istringstream("24") >> std::hex >> j;

std::cout << j << std::endl;  // n is 36 (decimal)
 }