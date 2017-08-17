#include "stdafx.h"
#include <iostream>
#include <vector>

float owe(float N, float c, float L, float n, float i) {return L*(1 - (i / N));}
float value(float N, float c, float L, float n, float i, std::vector<float> p) {
	float pp = 1;
	for (std::vector<float>::iterator p_i = p.begin(); p_i != p.end(); ++p_i) pp = pp*(*p_i);
	return (L + c)*pp;
}

int main()
{
	while(1)
	{
		float N, c, L, n;
		std::vector<float> p;
		std::vector<float>::const_iterator first = p.begin();

		scanf("%f %f %f %f", &N, &c, &L, &n);
		if (N > 0) {
			//calculate p vector
			int count, count_prev; float rate, temp;
			scanf("%d %f", &count_prev, &temp);
			while (n-- > 1) {
				scanf("%d %f", &count, &rate);
				for (int i = count_prev; i < count; i++) p.push_back(1 - temp);
				temp = rate;
				count_prev = count;
			}
			for (int i = 0; i < 100; i++) p.push_back(1 - temp);

			int flag = 1;
			for (int i = 1; i < L / N && flag; i++)
			{
				std::vector<float> pp(&p[0], &p[i]);
				if (owe(N, c, L, n, i) < value(N, c, L, n, i, pp)) {
					if (i == 1) printf("%d month\n", i);
					else printf("%d months\n", i);
					flag = 0;
				}

			}
		}
		else break;
	} 
}
