#include <cstdio>
#include <cstdlib>
#include <stdlib.h>
#include <assert.h>
#include <time.h>  

int flip_coins(int iters) {
  srand (time(NULL));
  int heads, tails = 0;

  for(int i=0;i < iters;i++){
      (rand() % 10 + 1) <= 5 ? heads++ : tails++;
  }
  printf("%d Heads, %d Tails\n",heads, tails);
  return abs(tails-heads);
}

int main(int argc,char* argv[]) { 
    assert (argc == 2);
    int iters = atoi(argv[1]);
    int diff = flip_coins(iters);
    if(100 < iters) {
        printf("With enough trials Heads should be equal to Tails\n");
    }
}