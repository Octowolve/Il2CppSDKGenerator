#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SettlementCardRole
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettlementCard_Role"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupRoleGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleAttachmentList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T SetData(uintptr_t data, bool isChestCard) {
		return ((T (*)(SettlementCardRole*, uintptr_t, bool))(Il2CppBase() + 0x2991A28))(this, data, isChestCard);
	}
	template <typename T = void> T SetupRoleGrid(Il2CppList<uintptr_t>* gridList, uintptr_t attach) {
		return ((T (*)(SettlementCardRole*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x29921B4))(this, gridList, attach);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRoleList() {
		return ((T (*)(SettlementCardRole*))(Il2CppBase() + 0x29928F0))(this);
	}
	template <typename T = uintptr_t> T FindRole(int32_t ID, uint64_t GUID) {
		return ((T (*)(SettlementCardRole*, int32_t, uint64_t))(Il2CppBase() + 0x2992A48))(this, ID, GUID);
	}
	template <typename T = uintptr_t> T GetRoleAttachmentList(int32_t ID, uint64_t GUID) {
		return ((T (*)(SettlementCardRole*, int32_t, uint64_t))(Il2CppBase() + 0x2991E5C))(this, ID, GUID);
	}
	template <typename T = bool> T xLuaBaseProxy_SetData(uintptr_t P0, bool P1) {
		return ((T (*)(SettlementCardRole*, uintptr_t, bool))(Il2CppBase() + 0x2992EAC))(this, P0, P1);
	}

};

}
