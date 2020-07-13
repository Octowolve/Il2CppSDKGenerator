#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class WeaponLoadoutData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "WeaponLoadoutData"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& mPvpWeaponAttrList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mPveWeaponAttrList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeaponAttrData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDataByProtocol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAttrData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponSkillByLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponSkinByLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponOrnamentByLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponCrosshairByLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAttachListByLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAttach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ContainAttach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_PvpWeaponAttrList() {
		return ((T (*)(WeaponLoadoutData*))(Il2CppBase() + 0x3948BE8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PveWeaponAttrList() {
		return ((T (*)(WeaponLoadoutData*))(Il2CppBase() + 0x3948BF0))(this);
	}
	template <typename T = void> T InitWeaponAttrData() {
		return ((T (*)(WeaponLoadoutData*))(Il2CppBase() + 0x39489EC))(this);
	}
	template <typename T = void> T SetDataByProtocol(uintptr_t weaponAttr, uintptr_t gameType, int32_t loadoutIdx) {
		return ((T (*)(WeaponLoadoutData*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3941530))(this, weaponAttr, gameType, loadoutIdx);
	}
	template <typename T = uintptr_t> T GetWeaponAttrData(uintptr_t squadType, int32_t index) {
		return ((T (*)(WeaponLoadoutData*, uintptr_t, int32_t))(Il2CppBase() + 0x3936578))(this, squadType, index);
	}
	template <typename T = uintptr_t> T GetWeaponSkillByLoadoutIndex(uintptr_t squadType, int32_t index) {
		return ((T (*)(WeaponLoadoutData*, uintptr_t, int32_t))(Il2CppBase() + 0x39367DC))(this, squadType, index);
	}
	template <typename T = uintptr_t> T GetWeaponSkinByLoadoutIndex(uintptr_t squadType, int32_t index) {
		return ((T (*)(WeaponLoadoutData*, uintptr_t, int32_t))(Il2CppBase() + 0x39369DC))(this, squadType, index);
	}
	template <typename T = uintptr_t> T GetWeaponOrnamentByLoadoutIndex(uintptr_t squadType, int32_t index) {
		return ((T (*)(WeaponLoadoutData*, uintptr_t, int32_t))(Il2CppBase() + 0x3936BDC))(this, squadType, index);
	}
	template <typename T = uintptr_t> T GetWeaponCrosshairByLoadoutIndex(uintptr_t squadType, int32_t index) {
		return ((T (*)(WeaponLoadoutData*, uintptr_t, int32_t))(Il2CppBase() + 0x3936DDC))(this, squadType, index);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWeaponAttachListByLoadoutIndex(uintptr_t squadType, int32_t index) {
		return ((T (*)(WeaponLoadoutData*, uintptr_t, int32_t))(Il2CppBase() + 0x3936FDC))(this, squadType, index);
	}
	template <typename T = uintptr_t> T GetWeaponAttach(uintptr_t squadType, int32_t index, int32_t pos) {
		return ((T (*)(WeaponLoadoutData*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x39371E8))(this, squadType, index, pos);
	}
	template <typename T = bool> T ContainAttach(uintptr_t squadType, int32_t index, uint64_t itemGuid) {
		return ((T (*)(WeaponLoadoutData*, uintptr_t, int32_t, uint64_t))(Il2CppBase() + 0x3937478))(this, squadType, index, itemGuid);
	}

};

}
