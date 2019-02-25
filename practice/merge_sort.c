void sort(int array[], int start, int end)
{
	if(end > start)
	{
		int middle = (start + end) / 2;
		sort(array, start, middle);
		sort(array, middle + 1, end);
		merge(array, start, middle, middle+1, end);
	}
}

void merge (int array[], int start_1, int end_1, int start_2, int end_2)
{
    // Виконайте злиття відсортованих підмасивів, використовуючи допоміжний масив temp
    int temp[];

}