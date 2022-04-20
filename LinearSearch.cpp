#include<iostream>
using namespace std;

  bool LinSearch(int arr[],int size,int key)
  {
  	for(int i =0;i<size;i++)
  	{
  		if(arr[i]==key)
  		{
  			return 1;
		  }
	  }
	  return 0;
  }

int main()
{
	int arr[5]={1,2,3,4,5};
	int key;
	cout<<" enter key to find : ";
	cin>>key;
	bool found = LinSearch(arr,5,key);
	if(found)
	{
		cout<<" key is present " <<endl;
	}
	else{
		cout<<"key is absent";
	}
	return 0;
	
}
