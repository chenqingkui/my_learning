#include "sort.hpp"
#include <iostream>
int main()
{
	
	int arrInt[] = {95,21,33,3,2,55,1000,1000000,999,44,-500,-900,-1200,2408,99321,5e+3,88,66,196,80};
	int arrCount = sizeof(arrInt)/sizeof(arrInt[0]);
	/*
	CSelectSort<int> elem;
	elem.sort(arrInt,arrCount);
	*/
	/*
	CBubbleSortV2<int> elem;
	elem.sort(arrInt,arrCount);
	*/
	/*
	CBubbleSortV3<int> elem;
	elem.sort(arrInt,arrCount);
	*/
	/*
	CBubbleSortV4<int> elem;
	elem.sort(arrInt,arrCount);
	*/
  
	CInsertSort<int> elem;
	elem.sort(arrInt,arrCount);
  
	for(int index  = 0;index < arrCount;index++)
	{ 
		std::cout << arrInt[index] << " " ;	
	}
	std::cout<<std::endl;
	system("pause");
	return 0;
}