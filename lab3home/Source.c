#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "UTF-8");
	int barrel;
	float resultb;
	int gallon;
	float resultg;
	puts("Введите количество баррелей для расчета");
	scanf("%d", &barrel);
	resultb = barrel;
	printf("%d баррелей – это %f килограмм\n", barrel, resultb * 158.987);

	printf("Введите количество галлонов для расчета");
	scanf("%d", &gallon);
	resultg = gallon;
	printf("%d галлона - это %f килограмм\n", gallon, resultg * 3.7854);

}
