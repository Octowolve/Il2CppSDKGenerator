#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LuaControlActorSceneConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LuaControlActorSceneConfig"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& actorConfigList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& luaSyncLevelObjectConfigList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& actorConfigAssetRef() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& runtimeActorConfigDic() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelObjectConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Export() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExportLuaSyncLevelObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LuaControlActorSceneConfig*))(Il2CppBase() + 0x4350640))(this);
	}
	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x43506E0))(0);
	}
	template <typename T = uintptr_t> static T GetLevelObjectConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x335AAD0))(0);
	}
	template <typename T = uintptr_t> static T GetConfig(uint32_t configIndex) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x335A76C))(0, configIndex);
	}
	template <typename T = void> T Export(uintptr_t lua_file_content) {
		return ((T (*)(LuaControlActorSceneConfig*, uintptr_t))(Il2CppBase() + 0x4350828))(this, lua_file_content);
	}
	template <typename T = void> T ExportLuaSyncLevelObject(uintptr_t lua_file_content) {
		return ((T (*)(LuaControlActorSceneConfig*, uintptr_t))(Il2CppBase() + 0x43508C8))(this, lua_file_content);
	}

};

}
