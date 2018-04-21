#include <stdio.h>
#define ROW 2
#define COL 5
int mat_a[ROW][COL] =
{
	{ 0,1,0,3,0 },
{ 0,6,0,0,0 }

}; // enoiaiay iao?eoa
int trans_mat[COL][ROW];  // caaioiaea aey o?ainiiie?iaaiiie iao?eou (ionoay)

void transparacy_matr(int *matA, int *matT, int matArow, int matAcolmn);
void print_matr(int *matriX, int roW, int coL);

int main(void)
{
	int *ptr_matr, *ptr_matr_Tr; // oeacaoaee ia enoiaio? e caaioiaeo
	ptr_matr = mat_a[0];         // eieoeaeecaoey oeacaoaeae cia?aieyie (ioeaaua cia?. ianneaia oeacaoaeae)
	ptr_matr_Tr = trans_mat[0];  //oi?a
	print_matr(ptr_matr, ROW, COL);    // ia?aou enoiaiie iao?eou i?aaeeuiue ii?yaie no?ie e noieaoia
	transparacy_matr(ptr_matr, ptr_matr_Tr, ROW, COL);  // o?ainiiie?iaaiea enoiaiie iao?eou

	printf("\n_____________");    // ia?aou ?acaaeeoaey

	print_matr(ptr_matr_Tr, COL, ROW);  // ia?aou o?ainiiie?iaaiiie iao?eou (no?iee ROW iaiy?ony ianoii ci noieaoaie COL)
	return 0;

}
//##################################
void transparacy_matr(int *matA, int *matT, int matArow, int matAcolmn)
{
	int i, j;
	for (i = 0; i < matArow; i++)
		for (j = 0; j < matAcolmn; j++)
			matT[i + matArow * j] = matA[i*matAcolmn + j];  // eiaaenu eaoo ii noieaoai matT, a a matA ii no?ieai
}
//##################################
void print_matr(int *matriX, int roW, int coL)
{
	int i;
	for (i = 0; i < roW*coL; i++)
	{
		if (i%coL == 0)
			printf("\n");
		printf("  %d", matriX[i]);

	}

}