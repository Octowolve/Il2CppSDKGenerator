#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections {

class ICollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections", "ICollection"));
	}


	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ICollection*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(ICollection*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(ICollection*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(ICollection*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, array, index);
	}

};

}
