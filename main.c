#include <stdio.h>
#include <math.h>

#define OPTIM_STEPS 20

int main() {
	// val
	float i = 1.5f;
	// weight
	float w = 0.8f;

	// float a = i * w;
	// desired output
	float y = 0.5f;
	// learning rate
	float r = 0.1f;

	// cC/Ca
	// 2(a - y)
	// 2a -1 
	// C = (a-y)^2
	
	// cC/cA
	// isn't this the loss function?
	// float cC = 2 * (a - y);

	float a;
	float cC;

	// cA / cW
	float cA = 1.5f;

	for (int k = 0; k < OPTIM_STEPS; k++) {
		a = i * w;
		cC = 2 * (a - y);
		w = w - (r * cC * cA);
		printf("%f-%f\n", w, cC);
	}

	// float cW0 = w - (r * cC * cA);
	// w = cW0;
	
	/*
	w = w - (r * cC * cA);
	a = i * w;
	cC = 2 * (a - y);
	printf("%f-%f\n", w, a);

	w = w - (r * cC * cA);
	a = i * w;
	cC = 2 * (a - y);
	printf("%f-%f\n", w, a);
	*/

	return 0;
	// C = (a - y)^2 (mse cost funciton)
	// w1 = w0 - r(cC/cw);
	// wierd symbol is rate of change
	// w1 = w0 - r(cc/cw)
}
