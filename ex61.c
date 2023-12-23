char* my_strstr1(char* p1, char* p2)
{
    if (*p2 == '\0')
    {
        return &p1[0];
    }
    int flag = 0;
    for (int i = 0; p1[i]; i++)
    {
        if (p1[i] == p2[0])
        {
            flag = 0;
            for (int j = 0; p2[j]; j++)
            {
                if (p1[i + j] != p2[j])
                {
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                return &p1[i];
            }
        }
    }
    return 0;
}