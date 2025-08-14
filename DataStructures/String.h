#pragma once

namespace DS
{
	template<typename T>
	class BaseString
	{
	public:
		BaseString();
		BaseString(T args...);
		BaseString(T const* arg);
		BaseString(BaseString<T> const& other);
		BaseString(BaseString<T>&& other);
		~BaseString();

		BaseString& operator=(T const* arg);
		BaseString& operator=(BaseString<T> const& other);
		BaseString& operator=(BaseString<T>&& other);

	public:
		BaseString<T>& append(T args...);
		BaseString<T>& append(BaseString<T> const & string);
		BaseString<T>& operator+=(BaseString<T> const& string);

		BaseString<T> operator+(T args...);
		BaseString<T> operator+(T const* arg);
		BaseString<T> operator+(BaseString<T> const& string);

		T& at(size_t index);
		T const& at(size_t index) const;
		T& operator[](size_t index);
		T const& operator[](size_t index) const;

		T* data();
		T const* data() const;
		T* operator*();
		T const* operator*() const;

		size_t length() const;
		size_t capacity() const;
		bool isEmpty() const;
		void reserve(size_t length);
		void resize(size_t length);
		void shrink_to_fit();
		void clear(bool forceDelete = false);

	private:
		T* m_data = nullptr;
		size_t m_length = 0;
		size_t m_capacity = 0;
	};

	using String = BaseString<char>;
}
