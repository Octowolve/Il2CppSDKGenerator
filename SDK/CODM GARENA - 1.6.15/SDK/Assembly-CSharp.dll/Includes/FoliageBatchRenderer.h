#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FoliageBatchRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FoliageBatchRenderer"));
	}

	template <typename T = bool> static T& enableLowQualitySettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& disabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppArray<uintptr_t>*>*> T& m_TiledRenderers() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& m_Batches() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_TileSceneStreamer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_RefreshScene() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_Delete() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = Il2CppString*> T& m_DeleteExcludeName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& isLowQuality() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshCurrentScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateBatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSortName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLowQualitySetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ITileSceneLoadCallback_OnSceneWasLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ITileSceneLoadCallback_OnSceneWasUnloaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableHismVertexAttributeInstancing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FoliageBatchRenderer*))(Il2CppBase() + 0x3CD0534))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(FoliageBatchRenderer*))(Il2CppBase() + 0x3CD0654))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(FoliageBatchRenderer*))(Il2CppBase() + 0x3CD0A1C))(this);
	}
	template <typename T = void> T RefreshCurrentScene() {
		return ((T (*)(FoliageBatchRenderer*))(Il2CppBase() + 0x3CD0818))(this);
	}
	template <typename T = uintptr_t> T CreateBatch(Il2CppString* sortName) {
		return ((T (*)(FoliageBatchRenderer*, Il2CppString*))(Il2CppBase() + 0x3CD150C))(this, sortName);
	}
	template <typename T = Il2CppString*> static T GetSortName(uintptr_t r) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CD17A8))(0, r);
	}
	template <typename T = void> T CheckLowQualitySetting(uintptr_t hism, uintptr_t scene) {
		return ((T (*)(FoliageBatchRenderer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CD18F0))(this, hism, scene);
	}
	template <typename T = void> T AddScene(uintptr_t scene) {
		return ((T (*)(FoliageBatchRenderer*, uintptr_t))(Il2CppBase() + 0x3CD0F38))(this, scene);
	}
	template <typename T = void> T RemoveScene(uintptr_t scene) {
		return ((T (*)(FoliageBatchRenderer*, uintptr_t))(Il2CppBase() + 0x3CD1C60))(this, scene);
	}
	template <typename T = void> T ITileSceneLoadCallback_OnSceneWasLoaded(uintptr_t scene, uintptr_t mode) {
		return ((T (*)(FoliageBatchRenderer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CD23C4))(this, scene, mode);
	}
	template <typename T = void> T ITileSceneLoadCallback_OnSceneWasUnloaded(uintptr_t scene) {
		return ((T (*)(FoliageBatchRenderer*, uintptr_t))(Il2CppBase() + 0x3CD24BC))(this, scene);
	}
	template <typename T = void> static T EnableHismVertexAttributeInstancing(uintptr_t hism, bool enable) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3CD259C))(0, hism, enable);
	}
	template <typename T = bool> static T RemoveScenem__0(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CD2718))(0, e);
	}
	template <typename T = bool> static T RemoveScenem__1(void* e) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3CD27C4))(0, e);
	}

};

}
