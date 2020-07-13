#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class NotifyParentPropertyAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "NotifyParentPropertyAttribute"));
	}

	template <typename T = bool> T& notifyParent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& No() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& Yes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_NotifyParent() {
		return ((T (*)(NotifyParentPropertyAttribute*))(Il2CppBase() + 0x4CAF404))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(NotifyParentPropertyAttribute*, uintptr_t))(Il2CppBase() + 0x4CAF40C))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(NotifyParentPropertyAttribute*))(Il2CppBase() + 0x4CAF4D0))(this);
	}
	template <typename T = bool> T IsDefaultAttribute() {
		return ((T (*)(NotifyParentPropertyAttribute*))(Il2CppBase() + 0x4CAF4DC))(this);
	}

};

}
