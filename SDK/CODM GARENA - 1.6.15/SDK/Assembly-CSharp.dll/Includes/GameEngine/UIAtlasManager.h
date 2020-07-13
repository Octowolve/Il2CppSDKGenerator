#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class UIAtlasManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "UIAtlasManager"));
	}

	template <typename T = Il2CppString*> static T& SpriteToUIAtlasListScriptFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& spriteNameToAtlasAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> static T& atlasAssetIdToAtlasName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& atlasAtlasNameToAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& m_AtlasTypeMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& idToAtlas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& atlasCounter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& CurrentReferenceGeneration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StaticInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSpriteNameConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyStaticallyUsedUIAtlas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IncreaseUseCounter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DecreaseUseCounter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUserCounter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCommonUIAtlases() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAtlasId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadUIAtlas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadSpecified() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReloadConfigs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCounters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadUIAtlasForSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadUIAtlas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoadUIAltas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintUIAtlasesInUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = void> static T StaticInit() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E7108C))(0);
	}
	template <typename T = void> static T LoadSpriteNameConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E711FC))(0);
	}
	template <typename T = void> static T NotifyStaticallyUsedUIAtlas(uintptr_t atlas) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2E71630))(0, atlas);
	}
	template <typename T = void> static T IncreaseUseCounter(Il2CppString* atlasName, uintptr_t spriteWidget) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2E71A6C))(0, atlasName, spriteWidget);
	}
	template <typename T = void> static T DecreaseUseCounter(Il2CppString* atlasName, uintptr_t spriteWidget) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2E71C1C))(0, atlasName, spriteWidget);
	}
	template <typename T = int32_t> static T GetUserCounter(Il2CppString* atlasName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2E72284))(0, atlasName);
	}
	template <typename T = bool> static T IsCommonUIAtlases(Il2CppString* atlasName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2E723E8))(0, atlasName);
	}
	template <typename T = int32_t> static T GetAtlasId(Il2CppString* atlasName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2E71904))(0, atlasName);
	}
	template <typename T = void> static T UnloadUIAtlas(Il2CppString* atlasName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2E71E94))(0, atlasName);
	}
	template <typename T = void> static T UnloadAll() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E724B8))(0);
	}
	template <typename T = void> static T UnloadSpecified(uintptr_t unloaded) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2E729A0))(0, unloaded);
	}
	template <typename T = void> static T ReloadConfigs() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E72FF4))(0);
	}
	template <typename T = void> static T ResetCounters() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E731D0))(0);
	}
	template <typename T = uintptr_t> static T LoadUIAtlasForSprite(Il2CppString* uiSpriteName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2E73304))(0, uiSpriteName);
	}
	template <typename T = uintptr_t> static T LoadUIAtlas(int32_t atlasAssetId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2E735D0))(0, atlasAssetId);
	}
	template <typename T = void> static T PrintStatus() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E73E50))(0);
	}
	template <typename T = uintptr_t> static T DoLoadUIAltas(int32_t atlasAssetId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2E73AD4))(0, atlasAssetId);
	}
	template <typename T = void> static T PrintUIAtlasesInUse() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E7429C))(0);
	}

};

}
