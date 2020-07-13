#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class RoleAttrData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "RoleAttrData"));
	}

	template <typename T = uintptr_t> T& m_HatItem() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_BagItem() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_ClothItem() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_SuitItem() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAppearance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Copy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear2New() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_HatItem() {
		return ((T (*)(RoleAttrData*))(Il2CppBase() + 0x3930150))(this);
	}
	template <typename T = uintptr_t> T get_BagItem() {
		return ((T (*)(RoleAttrData*))(Il2CppBase() + 0x3930158))(this);
	}
	template <typename T = uintptr_t> T get_ClothItem() {
		return ((T (*)(RoleAttrData*))(Il2CppBase() + 0x3930160))(this);
	}
	template <typename T = uintptr_t> T get_SuitItem() {
		return ((T (*)(RoleAttrData*))(Il2CppBase() + 0x3930168))(this);
	}
	template <typename T = void> T SetAppearance(uintptr_t roleAttr) {
		return ((T (*)(RoleAttrData*, uintptr_t))(Il2CppBase() + 0x3930008))(this, roleAttr);
	}
	template <typename T = void> T Copy(uintptr_t anotherRoleAttrData) {
		return ((T (*)(RoleAttrData*, uintptr_t))(Il2CppBase() + 0x3930268))(this, anotherRoleAttrData);
	}
	template <typename T = void> T Clear2New() {
		return ((T (*)(RoleAttrData*))(Il2CppBase() + 0x393044C))(this);
	}

};

}
