#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LuaActorManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LuaActorManager"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_AllLuaSpawnActorMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_AllLuaSyncLevelObjectMap() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddLuaActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddLuaSyncLevelObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyLuaActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLuaActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLuaSyncLevelObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_allLuaSpawnActorMap() {
		return ((T (*)(LuaActorManager*))(Il2CppBase() + 0x4A8BAB8))(this);
	}
	template <typename T = void> T AddLuaActor(uint32_t actorId, uintptr_t actor) {
		return ((T (*)(LuaActorManager*, uint32_t, uintptr_t))(Il2CppBase() + 0x4A8BAC0))(this, actorId, actor);
	}
	template <typename T = void> T AddLuaSyncLevelObject(uint32_t actorId, uintptr_t levelObject) {
		return ((T (*)(LuaActorManager*, uint32_t, uintptr_t))(Il2CppBase() + 0x4A8BBF8))(this, actorId, levelObject);
	}
	template <typename T = void> T DestroyLuaActor(uint32_t actorId) {
		return ((T (*)(LuaActorManager*, uint32_t))(Il2CppBase() + 0x4A8BD30))(this, actorId);
	}
	template <typename T = uintptr_t> T GetLuaActor(uint32_t actorID) {
		return ((T (*)(LuaActorManager*, uint32_t))(Il2CppBase() + 0x4A8C084))(this, actorID);
	}
	template <typename T = uintptr_t> T GetLuaSyncLevelObject(uint32_t actorID) {
		return ((T (*)(LuaActorManager*, uint32_t))(Il2CppBase() + 0x4A8C184))(this, actorID);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LuaActorManager*))(Il2CppBase() + 0x4A8C284))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(LuaActorManager*))(Il2CppBase() + 0x4A8C710))(this);
	}

};

}
