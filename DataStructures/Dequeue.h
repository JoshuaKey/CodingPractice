#pragma once

namespace DS
{
	template<typename T>
	class Dequeue
	{
	public:
		Dequeue();
		Dequeue(T args...);
		Dequeue(Dequeue<T> const& other);
		Dequeue(Dequeue<T>&& other);
		~Dequeue();

		Dequeue& operator=(T args...);
		Dequeue& operator=(Dequeue<T> const& other);
		Dequeue& operator=(Dequeue<T>&& other);

	public:
		Dequeue<T>& push_front(T const & element);
		Dequeue<T>& push_back(T const & element);

		void pop_front();
		void pop_back();

		T& peek_front();
		T const & peek_front() const;

		T& peek_back();
		T const & peek_back() const;

		void reserve(size_t length);
		void resize(size_t length);

		size_t length() const;
		size_t capacity() const;
		bool isEmpty() const;
		void clear(bool forceDelete = false);

	private:
		T* m_data = nullptr;
		size_t m_start = 0;
		size_t m_length = 0;
		size_t m_capacity = 0;
	};
}

