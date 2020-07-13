#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class DesignerCategoryAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "DesignerCategoryAttribute"));
	}

	template <typename T = Il2CppString*> T& category() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& Component() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Form() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& Generic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_TypeId() {
		return ((T (*)(DesignerCategoryAttribute*))(Il2CppBase() + 0x4CA9F20))(this);
	}
	template <typename T = Il2CppString*> T get_Category() {
		return ((T (*)(DesignerCategoryAttribute*))(Il2CppBase() + 0x4CA9F28))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(DesignerCategoryAttribute*, uintptr_t))(Il2CppBase() + 0x4CA9F30))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(DesignerCategoryAttribute*))(Il2CppBase() + 0x4CAA028))(this);
	}
	template <typename T = bool> T IsDefaultAttribute() {
		return ((T (*)(DesignerCategoryAttribute*))(Il2CppBase() + 0x4CAA054))(this);
	}

};

}
