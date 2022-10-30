#include "stdafx.h"
#include "CppUnitTest.h"
#include "../permutation_prjct/permut.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Test_method1)
		{
			
			vector<int> arr = {1,2,3};
			permutation*  permut = new permutation();
			try {
				permut->get_Next_Permt(arr);
				cout << arr[0] << " " << arr[1] << " " << arr[2];
			}
			catch (invalid_argument& e)
			{
				cerr << e.what() << endl;

			}
		}

		TEST_METHOD(Test_method2)
		{

			vector<int> arr = { 3,2,1 };
			permutation*  permut = new permutation();

			try {
				permut->get_Next_Permt(arr);
				cout << arr[0] << " " << arr[1] << " " << arr[2];
			}
			catch (invalid_argument& e)
			{
				cerr << e.what() << endl;

			}
		}

		TEST_METHOD(Test_method3)
		{

			vector<int> arr = { 5,5,6 };
			permutation*  permut = new permutation();

			try {
				permut->get_Next_Permt(arr);
				cout << arr[0] << " " << arr[1] << " " << arr[2];
			}
			catch (invalid_argument& e)
			{
				cerr << e.what() << endl;

			}
		}

		TEST_METHOD(Test_method4)
		{

			vector<int> arr = { 1,1,1 };
			permutation*  permut = new permutation();

			try {
				permut->get_Next_Permt(arr);
				cout << arr[0] << " " << arr[1] << " " << arr[2];
			}
			catch (invalid_argument& e)
			{
				cerr << e.what() << endl;

			}

		}

		TEST_METHOD(Test_method5)
		{

			vector<int> arr = { 0,0,0 };
			permutation*  permut = new permutation();

			try {
				permut->get_Next_Permt(arr);
				cout << arr[0] << " " << arr[1] << " " << arr[2];
			}
			catch (invalid_argument& e)
			{
				cerr << e.what() << endl;

			}

		}

		TEST_METHOD(Test_method6)
		{

			vector<int> arr = { 1,3,5,7,9 };
			permutation*  permut = new permutation();

			try {
				permut->get_Next_Permt(arr);
				cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3]<< " " << arr[4];
			}
			catch (invalid_argument& e)
			{
				cerr << e.what() << endl;

			}

		}

	};
}