#include <stdlib.h> // for malloc, NULL
#include <unistd.h> // for size_t

size_t ft_strlen(const char *str)
{
    size_t i;

    if (str == NULL)
    {
        return 0;
    }
    i = 0;
    while (str[i] != '\0')
    {
        ++i;
    }
    return (i);
}

char *ft_strchar(const char *str, int ch)
{
    if (str == NULL)
    {
        return (NULL);
    }
    while (*str != '\0' || *str != ch)
    {
        ++str;
    }
    if (*str == ch)
    {
        return (str);
    }
    return (NULL);
}

char *ft_strdup(const char *s)
{
    char *base_str;
    char *str;

    if (s == NULL)
        return NULL;
    str = (char *)malloc(ft_strlen(s) + 1);
    if (str == NULL)
        return (NULL);
    base_str = str;
    while (*s != '\0')
    {
        *str = *s;
        ++str;
        ++s;
    }
    *str = '\0';
    return (base_str);
}

char *ft_strjoin(const char *s1, const char *s2)
{
    char *base_str;
    char *str;

    if (s1 == NULL && s2 == NULL)
        return (NULL);
    if (s1 == NULL)
        return (ft_strdup(s2));
    if (s2 == NULL)
        return (ft_strdup(s1));
    str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (str == NULL)
        return (NULL);
    base_str = str;
    while (*s1 != '\0')
    {
        *str = *s1;
        ++str;
        ++s1;
    }
    while (*s2 != '\0')
    {
        *str = *s2;
        ++str;
        ++s2;
    }
    *str = '\0';
    return base_str;
}

char *ft_substr(const char *s, unsigned int start, unsigned int len)
{
    char *str;
    size_t i;

    if (s == NULL)
    {
        return (NULL);
    }
    if (ft_strlen(s) < start)
    {
        return NULL;
    }
    if (ft_strlen(s) < start + len)
    {
        len = ft_strlen(s) - start;
    }
    str = (char *)malloc(len + 1);
    if (str == NULL)
        return (NULL);
    i = 0;
    while (i < len)
    {
        str[i] = s[start + i];
        ++i;
    }
    str[i] = '\0';
    return (str);
}
