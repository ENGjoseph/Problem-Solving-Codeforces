General References:
https://www.w3schools.com/cpp/cpp_ref_string.asp

--------------------------------------------------------------------------------------------------------------------------------------------------
getline: (used when I want to input a string with spaces)

if there is too many inputs before this string we should use

{

cin.ignore(1,'\n');

getline(cin, string_name);

}

References:
https://stackoverflow.com/questions/18786575/using-getline-in-c
--------------------------------------------------------------------------------------------------------------------------------------------------

Lexicographical:
https://nitishhsinghhh.medium.com/understanding-lexicographic-order-in-programming-with-c-6d283dce5233#:~:text=In%20lexicographic%20order%2C%20the%20comparison,Unicode%20values%20of%20the%20characters.
--------------------------------------------------------------------------------------------------------------------------------------------------

to check if it is lower case

{

if (islower(s[i] == 1)

}

to check if it is upper case

{

if (isupper(s[i] == 1)

}

to change from lower case to upper case

{

s[i] = toupper(s[i]);

}

to change from upper case to lower case

{

s[i] = tolower(s[i]);

}
--------------------------------------------------------------------------------------------------------------------------------------------------
