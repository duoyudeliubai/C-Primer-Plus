
void everycount()
{
	printf("����һ���ַ��� �����ȡ�Ŀո���Ŀ ���з���Ŀ �Լ������ַ�����Ŀ\n");
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
	printf("�ո����� %d ���з���Ŀ�� %d �����ַ���Ŀ�� %d\n", n_space, n_line, n_other);
}