template <class T *>
class DispatchedClass {
	T * m_pBase;
public:
	DispatchedClass(T * base)
	{
		m_pBase = base;
	}
};