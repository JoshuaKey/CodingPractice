#include <iostream>
#include <coroutine>

struct promise;

struct coroutine : std::coroutine_handle<promise>
{
	using promise_type = ::promise;
};

struct promise
{
	coroutine get_return_object() { return { coroutine::from_promise(*this) }; }
	std::suspend_always initial_suspend() noexcept { return {}; }
	std::suspend_always final_suspend() noexcept { return {}; }
	void return_void() { }
	void unhandled_exception() { }
};

/*
* NOTES:
*
* Coroutine
*	C++ requires you to define your own custom Coroutine Struct to handle the Coroutine state.
*	 - Very dumb...
*	 - At least it has a base Coroutine struct you can inherit from.
*	Each Coroutine also has to specifically define the type that represents a Promise.
*	 - Not sure why they didn't just use Templates
*	 Coroutines are also created on the Heap and they don't support stack Coroutines
*	 - They also use void* to
*
* Promise
*	C++ requires you to define your own custom Promise Struct.
*
* Task
*
* Generator
*
* Awaitable
*
* coroutine_handle
*
* suspend_always
*
*/