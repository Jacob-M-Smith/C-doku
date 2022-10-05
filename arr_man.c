// array manipulation file

// searches an array for a particular value
// return 1 if found, 0 otherwise
int search(int ptr[], int val)
{
    for(int i = 0; i < 9; i++)
    {
        if(ptr[i] == val)
        {
            return 1;
        }
    }
    return 0;
}

// shrink an array
// remove val from array
// then realloc
int *shrink(int *ptr, int val)
{
    // loop to get index 
    int index = -1;
    int size = ptr[0];
    for(int i = 1; i <= size; i++)
    {
        if (ptr[i] == val)
        {
            index = i;
            break;
        }
    }

    // shift element to end of array
    for(int j = index; j < size; j++)
        ptr[i] = ptr[i + 1];

    // reallocate array 
    int *tmp = realloc(ptr, sizeof(int) * (size -1));
    if(tmp == NULL) { exit(EXIT_FAILURE)}
    ptr[0]--;
    ptr = tmp;
}