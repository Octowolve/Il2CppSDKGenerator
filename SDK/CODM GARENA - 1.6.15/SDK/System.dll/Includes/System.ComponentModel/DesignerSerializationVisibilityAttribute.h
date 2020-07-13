#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class DesignerSerializationVisibilityAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "DesignerSerializationVisibilityAttribute"));
	}

	template <typename T = uintptr_t> T& visibility() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Content() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& Hidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& Visible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_Visibility() {
		return ((T (*)(DesignerSerializationVisibilityAttribute*))(Il2CppBase() + 0x4CAA2A0))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(DesignerSerializationVisibilityAttribute*, uintptr_t))(Il2CppBase() + 0x4CAA2A8))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(DesignerSerializationVisibilityAttribute*))(Il2CppBase() + 0x4CAA360))(this);
	}
	template <typename T = bool> T IsDefaultAttribute() {
		return ((T (*)(DesignerSerializationVisibilityAttribute*))(Il2CppBase() + 0x4CAA418))(this);
	}

};

}
