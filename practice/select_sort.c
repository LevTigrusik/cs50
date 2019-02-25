/**
* Сортування масиву із використанням сортування вибором.
*/

void sort(int array[], int size)
{
	//Пройти по масиву
	for(int i = 0; i < size - 1; i++)
	{
		//Найменший елемент у відсортованій частині
		int min = array[i];
		int position = i;

		//Пройти по невідсортованій частині масиву
		for (int k = i + 1; k < size; k++)
		{
			// Знайти наступний найменший елемент
			if (array[k] < min)
			{
			    min = array[k];
			    position = k;
			}
		}

		//Обміняти місцями
		int temp = array[i];
		array[i] = smallest;
		array[position] = temp;
	}
}