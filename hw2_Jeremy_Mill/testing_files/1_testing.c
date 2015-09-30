const int test[5] = {9,2,3,4,11};

int call_array(int*,int,int);

int main() {
	
	int a = call_array(test,5,2);
	
	return a;
}

int call_array(int *a,int size, int key)
{
	int middle_index = size / 2;
	int middle_num = *a + middle_index;
	return middle_num;
}
