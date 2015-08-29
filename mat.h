//assuming relevant header files are imported before this header file
// !!IMPORTANT import the standard header files before this header file
// the format to import this header file is #include "mat.h"
//make sure this header file is also present in the same directory as your program


//function for matrix addition of 3x3 matrix
//pay attention to the order of arguments accepted by the function
int* matadd(int *mat_one, int mat_one_size, int *mat_two, int mat_two_size)
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

//function to multiply two 3x3 matrix
int* matmul(int *mat_one, int mat_one_row, int mat_one_col, int *mat_two, int mat_two_row, int mat_two_col)
{
	int mat_mul[3][3];
	for(int index_one=0;index_one<20;index_one++)
	{
		for(int index_two=0;index_two<20;index_two++)
		{
			mat_mul[index_one][index_two]=mat_mul[index_one][index_two]+(mat_one[index_one][index_two]*mat_two[index_two][index_one]);
		}
  }
	return *mat_mul;
}

//function to find transpose of a matrix
int* mat_trans(int *mat_input, int size)
{
	int mat_trans_result;
	for(int index_one=0;index_one<20;index_one++)
	{
		for(int index_two=0;index_two<20;index_two++)
		{
			mat_trans_result[index_two][index_one]=mat_input[index_one][index_two];
		}
	}
	return *mat_trans_result;
}
