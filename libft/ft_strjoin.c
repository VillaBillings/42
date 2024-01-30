char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	while(s1)
		i++;
	while(i < ft_strlen(s1) + ft_strlen(s2))
	{
		*s1[i] = s2;
		i++;
	}
	return (s1)
}