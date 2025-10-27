#pragma once

#include <chrono>
#include <iostream>

// Uncomment to print Benchmarks on finish
#define PRINT_BENCHMARK

template<typename T>
constexpr const char* GetTimeMeasurementPostfix() { return ""; }

template<>
constexpr const char* GetTimeMeasurementPostfix<std::chrono::nanoseconds>() { return "ns"; }
template<>
constexpr const char* GetTimeMeasurementPostfix<std::chrono::microseconds>() { return "us"; }
template<>
constexpr const char* GetTimeMeasurementPostfix<std::chrono::milliseconds>() { return "ms"; }
template<>
constexpr const char* GetTimeMeasurementPostfix<std::chrono::seconds>() { return "s"; }


/// <summary>
/// A simple Benchmark class which measures the time of execution from start to end.
/// By default, the starting time is measured at the point of construction.
/// By default, the end time is measured at the point of destruction.
/// Writes to the standard output upon destruction if configured.
///  
/// Uses:
///		Benchmark b("FunctionBenchmark);
/// </summary>
/// <typeparam name="Clock">Type of Clock to use for measuring time of execution</typeparam>
/// <typeparam name="TimeMeasurement">Type of Time Measurement to use when measuring duration</typeparam>
template<typename _Clock, typename _TimeMeasurement>
class TBenchmark
{
	// TODO: Add check to not perform Benchmarking on Release builds
	// TODO: Add conditional to change Benchmarking output
	// TODO: Keep track of data over multiple instances to create useable statistics.

public:
	using Clock = _Clock;
	using TimeMeasurement = _TimeMeasurement;

	using TimePoint = typename Clock::time_point;
	using ClockRepresentation = typename Clock::duration::rep;

	using ClockPeriod = typename Clock::duration::period;
	using TimeMeasurementPeriod = typename TimeMeasurement::period;

	/// <summary>
	/// Ratio between the Clock's measured time and the target Time Measurement
	/// Used to convert the Clock's duration measured time integer values to floating point values
	/// </summary>
	static constexpr double CLOCK_TO_TARGET_MEASUREMENT_RATIO = static_cast<double>(TimeMeasurementPeriod::den) / static_cast<double>(ClockPeriod::den);

public:
	TBenchmark(const char* name) : m_name(name), m_start(Clock::now()) { }
	~TBenchmark()
	{
#ifdef PRINT_BENCHMARK
		auto measuredDuration = GetMeasuredDuration();
		std::cout << m_name << ": " << measuredDuration << " " << GetTimeMeasurementPostfix<TimeMeasurement>() << std::endl;
#endif
	}

public:
	/// <summary>
	/// Gets the duration of time between Start and now() using the Clock's time measurement
	/// </summary>
	/// <returns>Duration measured using the Clock's Time Measurement</returns>
	ClockRepresentation GetDuration() const
	{
		auto end = Clock::now();
		return (end - m_start).count();
	}

	/// <summary>
	/// Gets the duration of time between Start and now() converted to the specified Time Measurement
	/// </summary>
	/// <returns>Duration measured using the specified Time Measurement</returns>
	double GetMeasuredDuration() const
	{
		return GetDuration() * CLOCK_TO_TARGET_MEASUREMENT_RATIO;
	}

private:
	TimePoint m_start;
	const char* m_name;
};

template<typename TimeMeasurement>
using DefaultClockBenchmark = TBenchmark<std::chrono::high_resolution_clock, TimeMeasurement>;

using NanosecondsBenchmark = DefaultClockBenchmark<std::chrono::nanoseconds>;
using MicosecondsBenchmark = DefaultClockBenchmark<std::chrono::microseconds>;
using MillisecondsBenchmark = DefaultClockBenchmark<std::chrono::milliseconds>;
using SecondsBenchmark = DefaultClockBenchmark<std::chrono::seconds>;

using Benchmark = MicosecondsBenchmark;
