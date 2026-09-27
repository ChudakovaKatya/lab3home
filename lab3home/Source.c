#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int barrel;
	float resultb;
	int gallon;
	float resultg;
	puts("¬ведите количество баррелей дл€ расчета");
	scanf("%d", &barrel);
	resultb = barrel;
	printf("%d баррелей Ц это %f килограмм\n", barrel, resultb * 158.987);

	printf("¬ведите количество галлонов дл€ расчета");
	scanf("%d", &gallon);
	resultg = gallon;
	printf("%d галлона - это %f килограмм\n", gallon, resultg * 3.7854);

}
