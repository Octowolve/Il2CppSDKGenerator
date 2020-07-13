#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class DesignerAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "DesignerAttribute"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& basetypename() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppString*> T get_DesignerBaseTypeName() {
		return ((T (*)(DesignerAttribute*))(Il2CppBase() + 0x4CA98A8))(this);
	}
	template <typename T = Il2CppString*> T get_DesignerTypeName() {
		return ((T (*)(DesignerAttribute*))(Il2CppBase() + 0x4CA98B0))(this);
	}
	template <typename T = uintptr_t> T get_TypeId() {
		return ((T (*)(DesignerAttribute*))(Il2CppBase() + 0x4CA98B8))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(DesignerAttribute*, uintptr_t))(Il2CppBase() + 0x4CA99D4))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(DesignerAttribute*))(Il2CppBase() + 0x4CA9C98))(this);
	}

};

}
