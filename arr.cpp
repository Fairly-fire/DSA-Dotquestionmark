//WAP TO PRINT THE FOLLOWING ACTIONS ON ARRAY::

/* 1. PRINT THE EVEN VALUED ELEMENTS.
   2. PRINT THE ODD VALUED ELEMENTS.
   3. CALCULATE & PRINT THE SUM & AVERAGE OF ELEMNTS IN AN ARRAY.
   4. PRINT THE MAXXIMUM AND MINIMUM ELEMENTS IN ARRAY.
   5. REMOVES THE DUPLICATES ELEMENTS FROM ARRAY.
   6. PRINT THE ARRAY IN REVERSE ORDER.

*/
#include<iostream>
using namespace std; 

int main()
{
  int i,j,sum=0, n;
  int k;
  
  int max=0;
  float avg=0;
  cout<<"\n ENTER THE NUMBER OF ELEMENTS-"<<endl;
  cin>>n;
  int arr[n];
  int min=arr[0];
  for(i=0; i<n; i++)
  {
     cout<<"\nENTER THE "<<i<<" ELEMENT--"<<endl;
     cin>>arr[i];
     
  }

cout<<"\nGIVEN ARRAY IS----arr["<<n<<"] = {";
 for(i=0; i<n; i++)
  {
     
     cout<<arr[i]<<" ";
     
  }
  cout<<"}"<<endl;

                //PRINTING THE EVEN VALUED ELEMENTS....

  cout<<"\nEVEN ELEMENTS IN THIS ARRAY ARE---{ ";

  for(i=0; i<n; i++)
  {
     if(arr[i]% 2==0)
     {

         cout<<arr[i]<<" ";
     }
        

  }   cout<<"}"<<endl;
                   
                //PRINTING THE ODD VALUED ELEMENTS...

   cout<<"\nODD ELEMENTS IN THIS ARRAY ARE---{ ";

  for(i=0; i<n; i++)
  {
     if(arr[i]% 2!=0)
     {

         cout<<arr[i]<<" ";
     }
        

  }   cout<<"}"<<endl;
  
  //CALCULATING & PRINT THE SUM & AVERAGE OF ELEMNTS IN AN ARRAY............

for(i=0; i<n; i++)
  {
      sum = sum + arr[i];
  }
     cout<<"\n\nSUM OF THE ELEMENTS IN ARRAY IS---"<<sum;

     avg= sum/n;

     cout<<"\n\nAVERAGE OF THE ELEMNTS IS ---"<<avg;
        
//PRINTING THE MAXXIMUM AND MINIMUM ELEMENTS IN ARRAY...............

 for(i=0; i<n; i++)
  {
     if(max<arr[i])
     {
         max = arr[i];
     }
     
    
  }

     for(i=0; i<n; i++)
     {
         if (min>arr[i])
     {
         min = arr[i];
     }

     }

  cout<<"\n\nMAXIMUM ELEMENT IN THE GIVEN ARRAY IS ---"<<max<<endl;

  cout<<"\n\nMINIMUM ELEMENT IN THE GIVEN ARRAY IS ---"<<min<<endl;

  //REMOVING THE DUPLICATES ELEMENTS OF THE ARRAY......
  

  for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            // If any duplicate found 
            if(arr[i] == arr[j])
            {
                //Delete the current duplicate element 
                for(int k=j; k<n; k++)
                {
                    arr[k] = arr[k + 1];
                }

                // Decrement size after removing duplicate element 
                n--;

                // If shifting of elements occur then don't increment j
                j--;
            }
        }
    }
   // Print an array after deleting an element
  
  cout<<" ARRAY AFTER DELETING DUPLICATES ELEMENT IS--{";
  
  for(i=0; i<n; i++)
  {
   
    cout<<"  "<<arr[i]<<" ";
    
  }
   cout<<"}"<<endl;   
return 0;
}