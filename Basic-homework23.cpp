/* �p������׹��-�򥻽m�ߧ@�~-�@�~23*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/05/07 01:15*/ 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
   FILE *pFile;
   int c;
   int sum=0;
   char poem[50];
    printf("�p������׹��-��¦�m�ߧ@�~-�@�~23\n");
	printf("�s�@�H�G���f�W\n");
	printf("�����ɶ��G2019/05/07 01:15\n");
	printf("-------------------------------------------------\n");
	printf("               �ΰ�Ū�Ҧ�Ū��data.txt            \n");
	printf("-------------------------------------------------\n");
	printf("Ū�����e���G\n"); 
   pFile=fopen("data.txt", "r");
   if (pFile==NULL)
   {  
      printf("�ɮ׶}�ҥ���!!\n");
      exit(1); 
   }
    rewind(pFile);
    while ((fgets(poem, 50, pFile)) != NULL)
       printf("%s", poem);
       printf("\n");
    fclose(pFile);
    system("pause");
    return 0;
}

