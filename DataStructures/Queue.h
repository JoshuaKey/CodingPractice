#pragma once

namespace DS
{
	template<typename T>
	class Queue
	{
	public:
		Queue();
		Queue(T args...);
		Queue(Queue<T> const& other);
		Queue(Queue<T>&& other);
		~Queue();

		Queue& operator=(T args...);
		Queue& operator=(Queue<T> const& other);
		Queue& operator=(Queue<T>&& other);

	public:
		Queue<T>& push(T const& element);

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
