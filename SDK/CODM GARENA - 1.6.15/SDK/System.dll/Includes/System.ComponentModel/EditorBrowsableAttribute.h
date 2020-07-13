#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class EditorBrowsableAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "EditorBrowsableAttribute"));
	}

	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_State() {
		return ((T (*)(EditorBrowsableAttribute*))(Il2CppBase() + 0x4CAAB38))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(EditorBrowsableAttribute*, uintptr_t))(Il2CppBase() + 0x4CAAB40))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(EditorBrowsableAttribute*))(Il2CppBase() + 0x4CAABF8))(this);
	}

};

}
