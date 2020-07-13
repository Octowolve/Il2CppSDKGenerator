#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LuaSyncLevelObjectInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LuaSyncLevelObjectInfo"));
	}

	template <typename T = uint32_t> T& InteractiveObjectUID() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_SyncProcess() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindInteractiveObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfoHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T BindInteractiveObject(uint32_t uid) {
		return ((T (*)(LuaSyncLevelObjectInfo*, uint32_t))(Il2CppBase() + 0x4A97C9C))(this, uid);
	}
	template <typename T = void> T SetInfoHandler(uintptr_t type) {
		return ((T (*)(LuaSyncLevelObjectInfo*, uintptr_t))(Il2CppBase() + 0x4A97EF0))(this, type);
	}
	template <typename T = void> T OnSyncProperty(uint32_t propertyID, uint32_t value) {
		return ((T (*)(LuaSyncLevelObjectInfo*, uint32_t, uint32_t))(Il2CppBase() + 0x4A984E8))(this, propertyID, value);
	}
	template <typename T = void> T OnSetHidden() {
		return ((T (*)(LuaSyncLevelObjectInfo*))(Il2CppBase() + 0x4A985CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncProperty(uint32_t P0, uint32_t P1) {
		return ((T (*)(LuaSyncLevelObjectInfo*, uint32_t, uint32_t))(Il2CppBase() + 0x4A98708))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnSetHidden() {
		return ((T (*)(LuaSyncLevelObjectInfo*))(Il2CppBase() + 0x4A9870C))(this);
	}

};

}
