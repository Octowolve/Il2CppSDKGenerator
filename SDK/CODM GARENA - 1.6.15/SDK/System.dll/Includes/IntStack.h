#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IntStack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "IntStack"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& values() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = int32_t> T Pop() {
		return ((T (*)(IntStack*))(Il2CppBase() + 0x4AD8464))(this);
	}
	template <typename T = void> T Push(int32_t value) {
		return ((T (*)(IntStack*, int32_t))(Il2CppBase() + 0x4AD846C))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(IntStack*))(Il2CppBase() + 0x4AD8474))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(IntStack*, int32_t))(Il2CppBase() + 0x4AD847C))(this, value);
	}

};

}
