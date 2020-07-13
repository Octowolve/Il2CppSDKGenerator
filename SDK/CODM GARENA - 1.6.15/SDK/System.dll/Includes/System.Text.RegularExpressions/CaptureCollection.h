#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class CaptureCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "CaptureCollection"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& list() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> T get_Count() {
		return ((T (*)(CaptureCollection*))(Il2CppBase() + 0x4AD1AD4))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(CaptureCollection*))(Il2CppBase() + 0x4AD1AF8))(this);
	}
	template <typename T = void> T SetValue(uintptr_t cap, int32_t i) {
		return ((T (*)(CaptureCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x4AD1B00))(this, cap, i);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(CaptureCollection*))(Il2CppBase() + 0x4AD1B70))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(CaptureCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x4AD1B78))(this, array, index);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(CaptureCollection*))(Il2CppBase() + 0x4AD1BA4))(this);
	}

};

}
