#include<benchmark/benchmark.h>
#include"circual_loop.hpp"

static void BM_circularArrayLoop(benchmark::State& state){
   std::vector<int> nums(5000, 1); 
    for(auto _ : state){
        circularArrayLoop(nums);
    }
}

BENCHMARK(BM_circularArrayLoop);


BENCHMARK_MAIN();
