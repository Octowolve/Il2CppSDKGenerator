#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class ObjectPool1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "ObjectPool`1"));
	}

	template <typename T = void*> T& m_Stack() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& m_ActionOnGet() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& m_ActionOnRelease() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& countAll() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = int32_t> T get_countAll() {
		return ((T (*)(ObjectPool1*))(Il2CppBase() + 0x518EB18))(this);
	}
	template <typename T = void> T set_countAll(int32_t value) {
		return ((T (*)(ObjectPool1*, int32_t))(Il2CppBase() + 0x518EB20))(this, value);
	}
	template <typename T = uintptr_t> T Get() {
		return ((T (*)(ObjectPool1*))(Il2CppBase() + 0x518EB28))(this);
	}
	template <typename T = void> T Release(uintptr_t element) {
		return ((T (*)(ObjectPool1*, uintptr_t))(Il2CppBase() + 0x518EC10))(this, element);
	}

};

}
