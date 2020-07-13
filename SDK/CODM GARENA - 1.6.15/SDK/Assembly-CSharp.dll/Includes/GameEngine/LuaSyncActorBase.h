#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LuaSyncActorBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LuaSyncActorBase"));
	}

	template <typename T = uint32_t> T& m_ActorID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& modelInstance() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uint32_t> T get_ActorID() {
		return ((T (*)(LuaSyncActorBase*))(Il2CppBase() + 0x4A93384))(this);
	}
	template <typename T = uintptr_t> static T GetActor(uint32_t actorID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x4A8FE68))(0, actorID);
	}
	template <typename T = void> T Start() {
		return ((T (*)(LuaSyncActorBase*))(Il2CppBase() + 0x4A96FD0))(this);
	}
	template <typename T = void> T DestroyComponent() {
		return ((T (*)(LuaSyncActorBase*))(Il2CppBase() + 0x4A8EAD4))(this);
	}
	template <typename T = uintptr_t> T get_modelAsset() {
		return ((T (*)(LuaSyncActorBase*))(Il2CppBase() + 0x4A97078))(this);
	}
	template <typename T = Il2CppString*> T get_syncAnimStateName() {
		return ((T (*)(LuaSyncActorBase*))(Il2CppBase() + 0x4A97080))(this);
	}
	template <typename T = void> T SyncPlayAnim() {
		return ((T (*)(LuaSyncActorBase*))(Il2CppBase() + 0x4A97130))(this);
	}
	template <typename T = void> T ReleaseModel() {
		return ((T (*)(LuaSyncActorBase*))(Il2CppBase() + 0x4A955D8))(this);
	}
	template <typename T = uintptr_t> T UpdateModel() {
		return ((T (*)(LuaSyncActorBase*))(Il2CppBase() + 0x4A959D4))(this);
	}
	template <typename T = void> T SetHidden(bool hidden) {
		return ((T (*)(LuaSyncActorBase*, bool))(Il2CppBase() + 0x4A94918))(this, hidden);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(LuaSyncActorBase*))(Il2CppBase() + 0x4A97330))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyComponent() {
		return ((T (*)(LuaSyncActorBase*))(Il2CppBase() + 0x4A97338))(this);
	}

};

}
