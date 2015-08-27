#include<stdio.h>

int matadd(int *mat_one, int mat_one_size, int *mat_two, int mat_two_size)
{
	int mat_sum[3][3];
	for(int index_one=0;index_one<20;index_one++)
	{
		for(int index_two=0;index_two<20;index_two++)
		{
			mat_sum[index_one][index_two]=mat_one[index_one][index_two]+mat_two[index_one][index_two];

		}
	}

	return *mat_sum;
}


int matmul(int *mat_one, int mat_one_row, int mat_one_col, int *mat_two, int mat_two_row, int mat_two_col)
{
	int mat_mul[3][3];
	for
}