#include <stdio.h>

int main() {
	FILE *wfp = fopen("cars.dat", "wb");
	struct car {
		char model[20];
		double mileage;
	};
	struct car wcar;	
	struct car rcar;
	int i;
	int size;
	for (i = 0; i < 2; i++); {
		scanf("%s%lf", wcar.model, &wcar.mileage);
		fwrite(&wcar, sizeof(wcar), 1, wfp);
	}
	fclose(wfp);
	FILE *rfp = fopen("cars.dat", "rb");
	fseek(rfp, 0, SEEK_END);
	size = (int)(ftell(rfp) / sizeof(rcar));
	rewind(rfp);
	for (i = 0; i < size; i++) {
		fread(&rcar, sizeof(rcar), 1, rfp);
		printf("model: %13s, mileage: %.1f\n", rcar.model,rcar.mileage);
	}
	fclose(rfp);
	return 0;
}
