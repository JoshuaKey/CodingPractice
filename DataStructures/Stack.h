#pragma once

namespace DS
{
	template<typename T>
	class Stack
	{
	public:
		Stack();
		Stack(T args...);
		Stack(Stack<T> const& other);
		Stack(Stack<T>&& other);
		~Stack();

		Stack& operator=(T args...);
		Stack& operator=(Stack<T> const& other);
		Stack& operator=(Stack<T>&& other);

	public:
		Stack<T>& push(T const& element);

		void pop();

		T& peek();
		T const & peek() const;

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
