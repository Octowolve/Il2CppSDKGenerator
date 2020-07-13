#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class RoleLoadoutData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "RoleLoadoutData"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& mPvpRoleAttrList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mPveRoleAttrList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRoleAttrData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDataByProtocol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleAttrData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHatByLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBagByLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClothByLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSuitByLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_PvpRoleAttrList() {
		return ((T (*)(RoleLoadoutData*))(Il2CppBase() + 0x39309AC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PveRoleAttrList() {
		return ((T (*)(RoleLoadoutData*))(Il2CppBase() + 0x39309B4))(this);
	}
	template <typename T = void> T InitRoleAttrData() {
		return ((T (*)(RoleLoadoutData*))(Il2CppBase() + 0x39307B0))(this);
	}
	template <typename T = void> T SetDataByProtocol(uintptr_t roleAttr, uintptr_t gameType, int32_t loadoutIdx) {
		return ((T (*)(RoleLoadoutData*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x39309BC))(this, roleAttr, gameType, loadoutIdx);
	}
	template <typename T = uintptr_t> T GetRoleAttrData(uintptr_t squadType, int32_t index) {
		return ((T (*)(RoleLoadoutData*, uintptr_t, int32_t))(Il2CppBase() + 0x3930B1C))(this, squadType, index);
	}
	template <typename T = uintptr_t> T GetHatByLoadoutIndex(uintptr_t squadType, int32_t index) {
		return ((T (*)(RoleLoadoutData*, uintptr_t, int32_t))(Il2CppBase() + 0x3930C58))(this, squadType, index);
	}
	template <typename T = uintptr_t> T GetBagByLoadoutIndex(uintptr_t squadType, int32_t index) {
		return ((T (*)(RoleLoadoutData*, uintptr_t, int32_t))(Il2CppBase() + 0x3930D30))(this, squadType, index);
	}
	template <typename T = uintptr_t> T GetClothByLoadoutIndex(uintptr_t squadType, int32_t index) {
		return ((T (*)(RoleLoadoutData*, uintptr_t, int32_t))(Il2CppBase() + 0x3930E08))(this, squadType, index);
	}
	template <typename T = uintptr_t> T GetSuitByLoadoutIndex(uintptr_t squadType, int32_t index) {
		return ((T (*)(RoleLoadoutData*, uintptr_t, int32_t))(Il2CppBase() + 0x3930EE0))(this, squadType, index);
	}

};

}
