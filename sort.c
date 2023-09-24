#include <cs3050.h>

void bubblesort(void *array, 
				size_t nitems, 
				size_t size, 
				int (*CompareFunc)(const void *, const void*))
{
	for (int i=0;i<nitems;i++)
	{
		for (int j=0;j<nitems-1;j++)
		{
			void * item1 = array + j*size;
			void * item2 = array + (j+1)*size;
			if (CompareFunc(item1,item2)>0)
			{
				Swap(item1,item2,size);
			}
		}
	}
}

void insertionsort(void *array, 
				size_t nitems, 
				size_t size, 
				int (*CompareFunc)(const void *, const void*))
{
    int a, b;
    void key, hold;
    for(a=1; a<nitems; a++)
    {
        key=array[a];
        b=a-1;

        while (CompareFunc(array[b], key)>0)
        {
            hold=array[b];
            array[b]=key;
            b=b-1;
        }

        array[b+1]=key;
    }

}
