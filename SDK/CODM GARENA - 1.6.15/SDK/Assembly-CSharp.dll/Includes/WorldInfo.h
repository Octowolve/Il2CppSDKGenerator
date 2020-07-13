#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WorldInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorldInfo"));
	}

	template <typename T = Il2CppString*> static T& EMPTY_LEVEL_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& levelName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& enableWorldComposition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& enableWorldOriginShift() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& enableVirtualScene() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = bool> T& enableLinearSceneStreaming() {
		return *(T*)((uintptr_t)this + 0x2B);
	}
	template <typename T = bool> T& scanSubFolders() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& persistentScene() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& initialLoadScenesEditTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& initialLoadScenes() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& ldScenesEditTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& dynamicLightingScenes() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& dynamicLoadScenes() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& excludeScenes() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& linearStreamingScenes() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& dynamicLoadPath() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& virtualSceneDataPath() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& defaultLightingSceneIndex() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ldSceneInfos() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsLoadDynamicLightingScene() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDSLoginSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryLoadDynamicLightingScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLightingSceneIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadDynamicLDScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T get_isRuntimeMap() {
		return ((T (*)(WorldInfo*))(Il2CppBase() + 0xC181A0))(this);
	}
	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0xC18248))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(WorldInfo*))(Il2CppBase() + 0xC18390))(this);
	}
	template <typename T = void> T OnDSLoginSuccess() {
		return ((T (*)(WorldInfo*))(Il2CppBase() + 0xC18A48))(this);
	}
	template <typename T = void> T TryLoadDynamicLightingScene() {
		return ((T (*)(WorldInfo*))(Il2CppBase() + 0xC18708))(this);
	}
	template <typename T = int32_t> T GetLightingSceneIndex() {
		return ((T (*)(WorldInfo*))(Il2CppBase() + 0xC18AF4))(this);
	}
	template <typename T = void> T LoadDynamicLDScene() {
		return ((T (*)(WorldInfo*))(Il2CppBase() + 0xC18D6C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(WorldInfo*))(Il2CppBase() + 0xC19154))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(WorldInfo*))(Il2CppBase() + 0xC191F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDSLoginSuccess() {
		return ((T (*)(WorldInfo*))(Il2CppBase() + 0xC191FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(WorldInfo*))(Il2CppBase() + 0xC19204))(this);
	}

};

}
