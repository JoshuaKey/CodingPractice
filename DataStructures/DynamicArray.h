#pragma once

#include <stddef.h>

namespace DS
{
	template<typename T>
	class DynamicArray
	{
	public:
		DynamicArray();
		DynamicArray(T args...);
		DynamicArray(T const* args);
		DynamicArray(DynamicArray<T> const& other);
		DynamicArray(DynamicArray<T>&& other);
		~DynamicArray();

		DynamicArray& operator=(T const* args);
		DynamicArray& operator=(DynamicArray<T> const& other);
		DynamicArray& operator=(DynamicArray<T>&& other);

	public:
		DynamicArray<T>& push_back(T const& element);
		DynamicArray<T>& insert(T const& element, size_t index);
		DynamicArray<T>& erase(size_t index);

		T& at(size_t index);
		T const& at(size_t index) const;
		T& operator[](size_t index);
		T const& operator[](size_t index) const;

		T* data();
		T const* data() const;
		T* operator*();
		T const* operator*() const;

		void reserve(size_t length);
		void resize(size_t length);

		size_t length() const;
		size_t capacity() const;
		bool isEmpty() const;
		void clear(bool forceDelete = false);

	private:
		T* m_data = nullptr;
		size_t m_length = 0;
		size_t m_capacity = 0;
	};
}