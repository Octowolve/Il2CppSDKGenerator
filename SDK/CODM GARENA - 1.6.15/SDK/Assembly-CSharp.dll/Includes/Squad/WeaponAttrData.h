#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class WeaponAttrData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "WeaponAttrData"));
	}

	template <typename T = uintptr_t> T& m_SkillItem() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_SkinItem() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_OrnamentItem() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_CrosshairItem() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AttachList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Copy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear2New() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_SkillItem() {
		return ((T (*)(WeaponAttrData*))(Il2CppBase() + 0x3944C54))(this);
	}
	template <typename T = uintptr_t> T get_SkinItem() {
		return ((T (*)(WeaponAttrData*))(Il2CppBase() + 0x3944C64))(this);
	}
	template <typename T = uintptr_t> T get_OrnamentItem() {
		return ((T (*)(WeaponAttrData*))(Il2CppBase() + 0x3944C6C))(this);
	}
	template <typename T = uintptr_t> T get_CrosshairItem() {
		return ((T (*)(WeaponAttrData*))(Il2CppBase() + 0x3944C74))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_AttachList() {
		return ((T (*)(WeaponAttrData*))(Il2CppBase() + 0x3944C5C))(this);
	}
	template <typename T = void> T SetData(uintptr_t weaponAttr) {
		return ((T (*)(WeaponAttrData*, uintptr_t))(Il2CppBase() + 0x3948270))(this, weaponAttr);
	}
	template <typename T = void> T Copy(uintptr_t anotherWeaponAttrData) {
		return ((T (*)(WeaponAttrData*, uintptr_t))(Il2CppBase() + 0x39485C4))(this, anotherWeaponAttrData);
	}
	template <typename T = void> T Clear2New() {
		return ((T (*)(WeaponAttrData*))(Il2CppBase() + 0x3948790))(this);
	}

};

}
