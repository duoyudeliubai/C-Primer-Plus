
void everycount()
{
	printf("输入一段字符串 报告读取的空格数目 换行符数目 以及其他字符的数目\n");
	char ch;
	int n_space = 0;
	int n_line = 0;
	int n_other = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch==' ')
		{
			n_space++;

		}
		else if (ch == '\n')
		{
			n_line++;
		}
		else
			n_other++;

	}
	printf("空格数是 %d 换行符数目是 %d 其它字符数目是 %d\n", n_space, n_line, n_other);
}