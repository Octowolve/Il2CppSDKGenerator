#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class SGAIPawnPropertyConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "SGAIPawnPropertyConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& SGAIPawnPropertyList_EasyMode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SGAIPawnPropertyList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SGAIPawnPropertyList_HardMode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SGAIPawnPropertyList_Current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SGAIDropConfigList_EasyMode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SGAIDropConfigList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SGAIDropConfigList_HardMode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& sZombieAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAIPawnProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAIPawnPropertyByIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAIPawnPropertyByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAIDropConfigByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitInternalProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReferencedZombieTypesInPropertyConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReferencedZombieTypesAndExpectedCoexistingMaxCounts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateZombieTypeAndCountChecker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateZombieTypeAndCountWave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZombieAssetAndPreloadCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_CurrentAIPawnPropertyList() {
		return ((T (*)(SGAIPawnPropertyConfig*))(Il2CppBase() + 0x395DCAC))(this);
	}
	template <typename T = void> T InitAIPawnProperties() {
		return ((T (*)(SGAIPawnPropertyConfig*))(Il2CppBase() + 0x395DDF4))(this);
	}
	template <typename T = uintptr_t> T GetAIPawnPropertyByIndex(int32_t index) {
		return ((T (*)(SGAIPawnPropertyConfig*, int32_t))(Il2CppBase() + 0x395E2C4))(this, index);
	}
	template <typename T = uintptr_t> T GetAIPawnPropertyByType(int32_t type) {
		return ((T (*)(SGAIPawnPropertyConfig*, int32_t))(Il2CppBase() + 0x395E430))(this, type);
	}
	template <typename T = uintptr_t> T GetAIDropConfigByType(int32_t type) {
		return ((T (*)(SGAIPawnPropertyConfig*, int32_t))(Il2CppBase() + 0x395E688))(this, type);
	}
	template <typename T = void> T InitInternalProperties(uintptr_t property) {
		return ((T (*)(SGAIPawnPropertyConfig*, uintptr_t))(Il2CppBase() + 0x395E074))(this, property);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetReferencedZombieTypesInPropertyConfig() {
		return ((T (*)(SGAIPawnPropertyConfig*))(Il2CppBase() + 0x395E8E0))(this);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T GetReferencedZombieTypesAndExpectedCoexistingMaxCounts() {
		return ((T (*)(SGAIPawnPropertyConfig*))(Il2CppBase() + 0x395EBF0))(this);
	}
	template <typename T = void> T UpdateZombieTypeAndCountChecker(uintptr_t spawnInfoList, uintptr_t config, uintptr_t resultDic) {
		return ((T (*)(SGAIPawnPropertyConfig*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x395ECC0))(this, spawnInfoList, config, resultDic);
	}
	template <typename T = void> T UpdateZombieTypeAndCountWave(uintptr_t spawnInfoList, uintptr_t config, uintptr_t resultDic) {
		return ((T (*)(SGAIPawnPropertyConfig*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x395F0A8))(this, spawnInfoList, config, resultDic);
	}
	template <typename T = void> T GetZombieAssetAndPreloadCount(uintptr_t* assetIDList, uintptr_t* preloadCountList, uintptr_t* animatorLoaderInfo) {
		return ((T (*)(SGAIPawnPropertyConfig*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x395F374))(this, assetIDList, preloadCountList, animatorLoaderInfo);
	}
	template <typename T = void> T xLuaBaseProxy_InitAIPawnProperties() {
		return ((T (*)(SGAIPawnPropertyConfig*))(Il2CppBase() + 0x395F510))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetAIPawnPropertyByIndex(int32_t P0) {
		return ((T (*)(SGAIPawnPropertyConfig*, int32_t))(Il2CppBase() + 0x395F518))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetAIPawnPropertyByType(int32_t P0) {
		return ((T (*)(SGAIPawnPropertyConfig*, int32_t))(Il2CppBase() + 0x395F520))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetAIDropConfigByType(int32_t P0) {
		return ((T (*)(SGAIPawnPropertyConfig*, int32_t))(Il2CppBase() + 0x395F528))(this, P0);
	}

};

}
