/*************************************************************************

	Copyright 2011 Ibrahim Sha'ath

	This file is part of KeyFinder.

	KeyFinder is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	KeyFinder is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with KeyFinder.  If not, see <http://www.gnu.org/licenses/>.

*************************************************************************/

#ifndef CONSTANTQPOSTPROC_H
#define CONSTANTQPOSTPROC_H

#include "fftpp.h"
#include "preferences.h"
#include "windowfunctions.h"
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <fftw3.h>
#include <vector>
#include <complex>

class ConstantQPostProc : public FftPostProcessor{
public:
	ConstantQPostProc(int, const Preferences&);
	virtual std::vector<float> chromaVector(fftw_complex*)const;
	virtual void printKernel()const;
private:
	std::vector<std::vector<std::complex<float> > > sparseKernel;
	std::vector<int> binOffsets;
	float pi;
};

#endif
