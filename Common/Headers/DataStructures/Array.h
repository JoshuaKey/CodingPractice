#pragma once

#include <stddef.h>

namespace DS
{
	template<typename T, size_t N>
	class Array
	{
		Array(Array<T, N> const& other) = default;
		Array(Array<T, N> && other) = default;

	public:
		T& at(size_t index);
		T const & at(size_t index) const;
		T& operator[](size_t index);
		T const& operator[](size_t index) const;

		T* data();
		T const * data() const;
		T* operator*();
		T const * operator*() const;

		constexpr size_t length() const { return N; }

	private:
		T m_data[N];
	};
}