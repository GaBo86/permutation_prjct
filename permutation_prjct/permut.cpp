#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include "permut.h"


void permutation::get_Next_Permt (vector<int>& pVec)
	 {
	
		int n = pVec.size(), k, l;
		for (k = n - 2; k >= 0; k--) {
			if (pVec[k] < pVec[k + 1]) {
				break;
			}
		}
		if (k < 0) {
			reverse(pVec.begin(), pVec.end());
		}
		else {
			for (l = n - 1; l > k; l--) {
				if (pVec[l] > pVec[k]) {
					break;
				}
			}
			swap(pVec[k], pVec[l]);
			reverse(pVec.begin() + k + 1, pVec.end());
		}
	}
		