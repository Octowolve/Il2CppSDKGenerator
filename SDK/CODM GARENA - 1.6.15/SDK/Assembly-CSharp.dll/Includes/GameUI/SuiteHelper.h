#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SuiteHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SuiteHelper"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mSquadInventoryDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mLoadoutDS() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<uint32_t, int32_t>*> T& SuiteItemMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSuiteConfByItemId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFirstReceiveSuiteItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaybeLoadoutSuiteMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSuiteActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsSuiteActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadoutSuiteDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadoutSuite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadoutActiveSuite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadoutAllSuite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInventoryAllSuite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T GetSuiteConfByItemId(uint32_t itemId) {
		return ((T (*)(SuiteHelper*, uint32_t))(Il2CppBase() + 0x29A348C))(this, itemId);
	}
	template <typename T = bool> T IsFirstReceiveSuiteItem() {
		return ((T (*)(SuiteHelper*))(Il2CppBase() + 0x29A3798))(this);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T GetMaybeLoadoutSuiteMap(uintptr_t smd) {
		return ((T (*)(SuiteHelper*, uintptr_t))(Il2CppBase() + 0x29A0C64))(this, smd);
	}
	template <typename T = bool> T IsSuiteActive(uintptr_t smd, int32_t suiteId) {
		return ((T (*)(SuiteHelper*, uintptr_t, int32_t))(Il2CppBase() + 0x299F980))(this, smd, suiteId);
	}
	template <typename T = bool> T IsSuiteActive_1(Il2CppDictionary<uint32_t, uintptr_t>* loadoutItems, int32_t suiteId) {
		return ((T (*)(SuiteHelper*, Il2CppDictionary<uint32_t, uintptr_t>*, int32_t))(Il2CppBase() + 0x29A3A94))(this, loadoutItems, suiteId);
	}
	template <typename T = void> T GetLoadoutSuiteDic(uintptr_t* activeSuiteSquad, uintptr_t* suiteSquad) {
		return ((T (*)(SuiteHelper*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x29A3CA0))(this, activeSuiteSquad, suiteSquad);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T GetLoadoutSuite(uintptr_t smd, Il2CppDictionary<uintptr_t, uintptr_t>* suiteSquad) {
		return ((T (*)(SuiteHelper*, uintptr_t, Il2CppDictionary<uintptr_t, uintptr_t>*))(Il2CppBase() + 0x29A4938))(this, smd, suiteSquad);
	}
	template <typename T = uintptr_t> T GetLoadoutActiveSuite(uintptr_t smd) {
		return ((T (*)(SuiteHelper*, uintptr_t))(Il2CppBase() + 0x29A4E4C))(this, smd);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetLoadoutAllSuite() {
		return ((T (*)(SuiteHelper*))(Il2CppBase() + 0x29A51F0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetInventoryAllSuite() {
		return ((T (*)(SuiteHelper*))(Il2CppBase() + 0x29A554C))(this);
	}

};

}
