// dllTest.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "../dllTest/dllTest.h"
cdllTest::cdllTest()
{

}
cdllTest::~cdllTest()
{

}
float cdllTest::Average(float e_fx, float e_fy)
{
	float x = e_fx;
	float y = e_fy;
	float Ans = (x + y) / 2;
	return Ans;
}




