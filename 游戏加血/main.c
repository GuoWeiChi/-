__declspec(dllexport)

void go()
{
	int *p = 0x226E7170;
	while (1)
	{
		if (*p <= 100)
		{
			*p = 150;
		}
	}
}