#include <fann.h>

int main(int argc, char const *argv[])
{
	struct fann *ann = fann_create_standard(5,2,3,3,3,2);

	fann_train_on_file(ann, argv[1], 200, 10, 0.00001);
	fann_save(ann, "trained.net");
	fann_destroy(ann);
	return 0;
}