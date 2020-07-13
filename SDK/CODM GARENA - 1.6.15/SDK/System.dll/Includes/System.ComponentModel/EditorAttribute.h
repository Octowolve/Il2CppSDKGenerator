#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class EditorAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "EditorAttribute"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& basename() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppString*> T get_EditorBaseTypeName() {
		return ((T (*)(EditorAttribute*))(Il2CppBase() + 0x4CAA76C))(this);
	}
	template <typename T = Il2CppString*> T get_EditorTypeName() {
		return ((T (*)(EditorAttribute*))(Il2CppBase() + 0x4CAA774))(this);
	}
	template <typename T = uintptr_t> T get_TypeId() {
		return ((T (*)(EditorAttribute*))(Il2CppBase() + 0x4CAA77C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(EditorAttribute*, uintptr_t))(Il2CppBase() + 0x4CAA784))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(EditorAttribute*))(Il2CppBase() + 0x4CAAA48))(this);
	}

};

}
