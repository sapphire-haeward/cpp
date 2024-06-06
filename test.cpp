//input & output

#include <iostream>

using namespace std;

int main ( )

{

// How you define a variable.
int numberOfLanguages;  
// datatype myVariable;

cout << "Hello reader.\n"
//Note the "\n" 
<< "Welcome to C++.\n";
 cout << "How many programming languages have you used? ";

 cin >> numberOfLanguages;

/* First Control Structure
if(myVariable > 1)
an action goes here

else
another action
return 0;
*/

if (numberOfLanguages < 1)
cout << "Read the preface. You may prefer\n"
<< "a more elementary book by the same author.\n";
else
cout << "Enjoy the book.\n";
return 0;

}