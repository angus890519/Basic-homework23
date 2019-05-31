/* 計算機概論實務-基本練習作業-作業23*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/05/07 01:15*/ 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
   FILE *pFile;
   int c;
   int sum=0;
   char poem[50];
    printf("計算機概論實務-基礎練習作業-作業23\n");
	printf("製作人：郭柏鋒\n");
	printf("完成時間：2019/05/07 01:15\n");
	printf("-------------------------------------------------\n");
	printf("               用唯讀模式讀取data.txt            \n");
	printf("-------------------------------------------------\n");
	printf("讀取內容為：\n"); 
   pFile=fopen("data.txt", "r");
   if (pFile==NULL)
   {  
      printf("檔案開啟失敗!!\n");
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

