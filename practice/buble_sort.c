void sort(int array[], int n)
{
  //Циклічний прохід по масиву
  for(int k = 0; k < n - 1; k++)
  {
    //Оптимізація: перевірка на здійснення обмінів
    int swaps = 0;

    //обміняти сусідні елементи, якщо вони не впорядковані
    for (int i = 0; i < n - 1 - k; i++)
    {
        if (array[i] > array[i + 1])
        {
            int temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
            swaps++;
        }
    }

    //Пройтися по масиву

    if(!swaps)
      break;
  }
}