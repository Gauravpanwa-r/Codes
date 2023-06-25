#include<stdio.h>
int main()
{
	float total_literacy,total_man,total_woman,literate_man,literate_woman,illiterate_man,illiterate_woman;
	total_literacy=0.48*80000;
	total_man=0.52*80000;
	total_woman=80000-total_man;
	literate_man=0.35*80000;
	literate_woman=total_literacy-literate_man;
	illiterate_woman=total_woman-literate_woman;
	illiterate_man=total_man-literate_man;
	printf("Total illiterate man is %f\n",illiterate_man);
    printf("Total illiterate woman is %f\n",illiterate_woman);
    return 0;
    
}
    
    
    
