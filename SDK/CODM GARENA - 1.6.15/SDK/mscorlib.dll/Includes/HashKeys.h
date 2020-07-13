#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HashKeys
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "HashKeys"));
	}

	template <typename T = uintptr_t> T& host() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> T get_Count() {
		return ((T (*)(HashKeys*))(Il2CppBase() + 0x363CA08))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(HashKeys*))(Il2CppBase() + 0x363CA3C))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(HashKeys*))(Il2CppBase() + 0x363CA70))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t arrayIndex) {
		return ((T (*)(HashKeys*, uintptr_t, int32_t))(Il2CppBase() + 0x363CAA4))(this, array, arrayIndex);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(HashKeys*))(Il2CppBase() + 0x363CC94))(this);
	}

};

}
