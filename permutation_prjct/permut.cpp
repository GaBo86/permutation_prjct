#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include "permut.h"


void permutation::get_Next_Permt (vector<int>& pVec)
	 {
	
		int num = pVec.size(), i, j;
		for (i = num - 2; i >= 0; i--) {
			if (pVec[i] < pVec[i + 1]) {
				throw invalid_argument("Permutation cannot be achieved");
			}
		}
		if (i < 0) {
			reverse(pVec.begin(), pVec.end());
		}
		else {
			for (j = num - 1; j > i; j--) {
				if (pVec[j] > pVec[i]) {
					throw invalid_argument("Permutation cannot be achieved");
				}
			}
			swap(pVec[i], pVec[j]);
			reverse(pVec.begin() + i + 1, pVec.end());
		}
	}
		