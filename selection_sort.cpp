#include <iostream>


void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void selection_sort(int array[],int size)
{
    int minimum_index=0;
    
    for(int i =0;i<size;i++)
    {
        minimum_index=i;   
        for(int j=i;j<size;j++)
        {
         
         if(array[j]<array[minimum_index])
         {
             minimum_index=j;
         }
            
        }
        
        swap(array[minimum_index],array[i]);
    }
    
    
    
}


void print_array(int array [],int size)
{
    for(int i=0;i<size;i++)
    {
        std::cout<<array[i]<<" ";
    }
    
}



int main() 
{
std::cout<<std::endl;
int array[]{11,2,21,24,534,23,34,32,32,54,23,235,1};
int aranan_deger=54;
std::cout<<"aranan deger: "<<aranan_deger<<std::endl;
int size= sizeof(array)/sizeof(int);
std::cout<<"Before Selection Sort"<<std::endl;
print_array(array,size);
std::cout<<std::endl;
std::cout<<"After Selection Sort"<<std::endl;
selection_sort(array,size);
print_array(array,size);
std::cout<<std::endl;


    return 0;
}
