
#include <stdio.h>

int count(char *str, char a)
{
    char *ptr = str;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == a)
        {
            count++;
        }
        ptr++;
    }
    return count;
}

//  When you use the scanf("%s",str); function to read the string, it stops reading when it encounters a space. 
// However, the newline character that is entered after the string is not consumed by the function and remains in the input buffer.

//  When you use the scanf("%c",&ch); function to read the character to count, it reads the first character it sees in the input buffer, 
// which is the newline character, and assigns it to the variable 'ch'. 
// This causes the program to count the newline character instead of the intended character.

//  To solve this, you can use scanf(" %c",&ch); instead of scanf("%c",&ch); . 
// The space before %c tells scanf to consume any whitespace characters (including newlines) before reading the next character. 
// This way the newline character that is left in the input buffer will be consumed and the program will read the intended character.

int main()
{
    char str[100];
    char ch;
    int i;
    printf("Enter the String: ");
    gets(str);
    printf("Enter the character to count the Occurance of: ");
    scanf(" %c", &ch);
    i = count(str, ch);
    printf("Number of occurances are: %d", i);
    return 0;
}
