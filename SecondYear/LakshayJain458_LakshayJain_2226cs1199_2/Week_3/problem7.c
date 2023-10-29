char *sortSentence(char *s)
{
    int len = strlen(s);
    char *p = (char *)malloc(len * sizeof(char));
    int index = 0;
    int count = 0;
    for (char i = '1'; i <= '9'; i++)
    {
        count = 0;
        for (int j = 0; j < len; j++)
        {
            count++;
            if (s[j] == ' ')
                count = 0;
            if (s[j] == i)
            {
                for (int k = j - count + 1; k < j; k++)
                    p[index++] = s[k];
                p[index++] = ' ';
            }
        }
    }
    p[index - 1] = '\0';
    return p;
}