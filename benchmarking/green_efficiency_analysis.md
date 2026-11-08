# Green Efficiency Analysis

## Measurement Methodology

The experiments measured execution time using the C clock() function from the time.h library. The elapsed CPU time was converted into seconds using CLOCKS_PER_SEC. The measurements were collected from three benchmarking tasks.

The algorithm comparison used two implementations operating on the same array of 50,000 integers. The naive implementation used nested loops, while the single-pass implementation examined each element once. Both implementations solved the same counting problem.

The measured execution times were:

| Run | Naive (seconds) | Single-pass (seconds) |
|---|---:|---:|
| 1 | 2.754372 | 0.000116 |
| 2 | 2.759656 | 0.000106 |
| 3 | 2.756658 | 0.000106 |

The average execution time was 2.756895 seconds for the naive implementation and 0.000109 seconds for the single-pass implementation.

The instrumentation experiment measured four timing values: total execution time and the individual BUILD_DATA, PROCESS, and REDUCE phases.

## Observed Performance Differences

The results show a significant difference between the two algorithms. The naive implementation required an average of 2.756895 seconds, while the single-pass implementation required only 0.000109 seconds.

Based on these averages, the naive implementation was approximately 25,293 times slower than the single-pass implementation. This difference is consistent with their algorithmic structures. The naive implementation repeatedly examines earlier array elements through nested loops, whereas the single-pass implementation visits each element once.

The instrumentation results were:

- TOTAL: 0.000744 seconds.
- BUILD_DATA: 0.000289 seconds.
- PROCESS: 0.000315 seconds.
- REDUCE: 0.000135 seconds.

PROCESS was the longest measured phase, followed by BUILD_DATA and REDUCE. The three phase measurements sum to 0.000739 seconds, which is close to the measured total of 0.000744 seconds. The small difference is consistent with timing overhead and other work between measurements.

## Relation Between Runtime and Energy Consumption

Execution time is useful when discussing software efficiency, but it is not a direct measurement of energy consumption. A program that finishes faster may use less energy if its power consumption remains comparable. However, actual energy depends on both execution time and power usage.

The algorithm comparison demonstrates a substantial runtime improvement with the single-pass approach. This suggests an opportunity to reduce the duration of computation. However, these experiments did not measure electrical power or energy directly. Therefore, they cannot prove an exact energy reduction.

## Limitations of the Experiment

The experiments were performed on one computing environment. Execution times can vary because of processor activity, system load, compiler settings, and other background processes.

The single-pass execution time was extremely small, making measurement precision and timing overhead particularly important. The instrumentation experiment also represents only one recorded run. Furthermore, no power meter or energy-monitoring tool was used.

The baseline execution measurements are not included in the numerical analysis here because their recorded output was not available in the results used for this report.

## Practical Engineering Takeaway

The main lesson is that algorithm selection can have a much larger effect on runtime than small implementation changes. The single-pass algorithm achieved the same counting objective with dramatically less execution time than the naive implementation.

Engineers should prefer efficient algorithms, measure performance using repeatable experiments, and examine individual program phases to identify expensive operations. They should also measure actual energy consumption before making quantitative claims about environmental benefits. Efficient software design can support greener computing, but reliable conclusions require both performance and energy measurements.
