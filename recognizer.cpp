#include <fann.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	srand(time(NULL));
	struct fann *ann = fann_create_from_file("trained.net");
	float number[1] = {rand() % 11};
	float expected[2] = {0,1};
	float *output = fann_run(ann, number);
	printf("Nombre testé : %f\n<5 : %f\n>=5 : %f\n", number[0],output[0], output[1]);
	return 0;
}