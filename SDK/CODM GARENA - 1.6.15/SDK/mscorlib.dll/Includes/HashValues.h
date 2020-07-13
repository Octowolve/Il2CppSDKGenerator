#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HashValues
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "HashValues"));
	}

	template <typename T = uintptr_t> T& host() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> T get_Count() {
		return ((T (*)(HashValues*))(Il2CppBase() + 0x363CD2C))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(HashValues*))(Il2CppBase() + 0x363CD60))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(HashValues*))(Il2CppBase() + 0x363CD94))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t arrayIndex) {
		return ((T (*)(HashValues*, uintptr_t, int32_t))(Il2CppBase() + 0x363CDC8))(this, array, arrayIndex);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(HashValues*))(Il2CppBase() + 0x363CFB8))(this);
	}

};

}
