
using namespace std;


int m[6][6];


int main()
{
	int ii, jj;
	for (int i = 1; i <= 5; ++i)
	{
		for(int j = 1; j <= 5; j++)
		{
			scanf("%d", &m[i][j]);
			if(m[i][j] == 1) 
			{
				ii = i;
				jj = j;
			}

			if(ii == 3 && jj == 3)
			{
				printf("0\n");
				return 0;
			}
		}
	}

	int count = 0;
	while(m[3][3] != 1)
	{

		if(ii != 3)
		{
			m[ii][jj] = 0;
			if(ii < 3) ii++;
			else --ii;
			m[ii][jj] = 1;

			count++;
		}
		
		if(jj != 3)
		{
			m[ii][jj] = 0;
			if(jj < 3) jj++;
			else --jj;
			m[ii][jj] = 1;

			count++;
		}

		if(ii == 3 && jj == 3) break;
	}
	
	printf("%d\n", count);

	return 0;
}

/*
Beautiful Matrix 	Codeforces Round #161 (Div. 2)

http://codeforces.com/problemset/problem/263/A
*/