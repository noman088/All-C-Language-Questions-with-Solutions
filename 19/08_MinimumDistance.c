// 8. Given a list of words followed by two words, the task is to find the minimum distance
// between the given two words in the list of words.
// (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
//  word1 = “the”, word2 = “fox”, OUTPUT : 1 )
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i = 0, temp1 = -1, temp2 = -1, min = 1000;
    char str[5][20] = {"my", "name", "name", "is", "Noman"};
    char word1[] = "name";
    char word2[] = "Noman";

    for (i = 0; i < 5; i++)
    {
        if (strcmp(str[i], word1) == 0)
            temp1 = i;
        if (strcmp(str[i], word2) == 0)
            temp2 = i;
        if (temp1 != -1 && temp2 != -1)
            min = abs(temp1 - temp2) - 1;
    }
    printf("Min distance of character  is %d", min);

    return 0;
}



// this is my code which i made myself

// #include <stdio.h>
// #include <string.h>
// int main()
// {

//     char str[5][20] = {"my", "name","name" "is", "noman"};
//     char word1[20] = "noman";
//     char word2[20] = "my";
//     int j = 10000, k = 10000;
//     for (int i = 0; i < 5; i++)
//     {
//         if (strcmp(str[i], word1) == 0)
//             j = i;
//         if (strcmp(str[i], word2) == 0)
//             k = i;
//     }
//     printf("\n");
//     printf("%d and %d", j, k);
//     printf("\n");
//     int min = abs(j - k) - 1;
//     printf("%d is min char", min);

//     return 0;
// }