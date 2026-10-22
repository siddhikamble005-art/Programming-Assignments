typedef int BOOL;

# define TRUE 1
# define FALSE 0

BOOL ChkVowel ( char cValue )
{
    // Check if the character matches any lowercase or uppercase vowel
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' ||
       cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
