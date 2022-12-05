#include<iostream>
#include<vector>

using namespace std;

template<class T>

T vector_g(T value,int row,int col)
{
	
	vector<vector<T>> vect;
	
	for (int i= 0 ; i <= row ; i++)
	{
		vector<T> vec2(col, value);
		vect.push_back(vec2);
	}
	
	
		
}

int main()
{
	vector_g(5, 4, 7);

}
