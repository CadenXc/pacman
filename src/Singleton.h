#ifndef SINGLETON_H
#define SINGLETON_H

template <typename T>
class Singleton
{
public:
	static void createInstance() {
		instance = new T();
	}

	static void destroyInstance() {
		delete instance;
		instance = nullptr;
	}

	static T &getInsatnce() {
		return *instance;
	}

	static void setInstance(T* newInsatnce) {
		if (instance) {
			destroyInstance();
		}

		instance = newInsatnce;
	}

private:
	Singleton() {}
	~Singleton() {}

	static T *instance;
};

template <typename T>
T *Singleton<T>::instance = 0;

#endif // SINGLETON_H