#pragma once

#include "../../MainHeader.hpp"

namespace Number
{
	void PrintDb(double);

	void Print(int);

	namespace interger
	{
		void ErrorCheckerRange(int&, int);

		void ErrorCheckerNumber(int&);

		
	}

	namespace dble
	{
		void ErrorCheckerNumber(double&);
	}
}

