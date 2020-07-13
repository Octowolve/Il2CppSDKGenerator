#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameDataStore.Career {

class PlayerIconDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameDataStore.Career", "PlayerIconDataStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_PlayerIconList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddNew() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerIConList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNewFrome() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasPlayerIconPermanent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasPlayerIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(PlayerIconDataStore*))(Il2CppBase() + 0x4A08FD8))(this);
	}
	template <typename T = void> T AddNew(Il2CppList<uintptr_t>* array, bool isAdd) {
		return ((T (*)(PlayerIconDataStore*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x4A093CC))(this, array, isAdd);
	}
	template <typename T = void> T Init(uintptr_t res) {
		return ((T (*)(PlayerIconDataStore*, uintptr_t))(Il2CppBase() + 0x4A09080))(this, res);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPlayerIConList() {
		return ((T (*)(PlayerIconDataStore*))(Il2CppBase() + 0x4A0990C))(this);
	}
	template <typename T = void> T CheckNewFrome() {
		return ((T (*)(PlayerIconDataStore*))(Il2CppBase() + 0x4A09ACC))(this);
	}
	template <typename T = bool> T HasPlayerIconPermanent(int32_t itemId) {
		return ((T (*)(PlayerIconDataStore*, int32_t))(Il2CppBase() + 0x4A09E20))(this, itemId);
	}
	template <typename T = bool> T HasPlayerIcon(int32_t serverTime, int32_t itemId) {
		return ((T (*)(PlayerIconDataStore*, int32_t, int32_t))(Il2CppBase() + 0x4A09FE4))(this, serverTime, itemId);
	}
	template <typename T = bool> static T GetPlayerIConListm__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A0A1CC))(0, x);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(PlayerIconDataStore*))(Il2CppBase() + 0x4A0A2A4))(this);
	}

};

}
