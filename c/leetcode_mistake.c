/* Here is an example where LeetCode does not tranlate into real 
 * practical programming skill */

/* The question states: Given a string s, find the length of the longest substring without repeating characters.
    Constraints:
    
    0 <= s.length <= 5 * 104 (You can ignore this line, it has no significance to the explanation below.)
    s consists of English letters, digits, symbols and spaces. <---------- IMPORTANT */

/* If I were to enter a string such as "pwwkew", "", or "abcabcbb", the solution below would be valid and produces the correct value */


/* Incorrect Solution below (Counts as correct in LeetCode) */


#include <stdio.h>
static int length_of_longest_substring(char *str1)
{
    int offset[128];
    int substr_max_len = 0;
    int len = 0;
    int index = 0;

    memset(offset, 0xff, sizeof(offset));
    while (*str1 != '\0') {
        if (offset[*str1] == -1) {
            len++;
          }
		  else {
            if (index - offset[*str1] > len)
				{
                len++;
            }
			else
			{
	        len = index - offset[*str1];
            }
        }
        if (len > substr_max_len)
		{
            substr_max_len = len;
        }
        offset[*str1++] = index++;
    }

    return substr_max_len;
}

int main(void){
    // Here your code !
    char *str1 = "abcabcbb";
	printf("\nOriginal String: %s", str1);
	printf("\nLength of the longest substring without repeating characters: %d\n", length_of_longest_substring(str1));
	return 0;

}





/* However, if you use the same code above and replace the string value of "abcabcbb" with something realistic like "Somethings not right", you will get an incorrect value. For the example stated, the longest substring length would be 9 ("Something"). The code above, although counted as correct in LeetCode, will be returned as 11 (which is is incorrect) */

