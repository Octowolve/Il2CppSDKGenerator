#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class ActorSpawner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "ActorSpawner"));
	}

	template <typename T = Il2CppString*> T& ActorTypeName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_ActorType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Camp() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& AutoActivate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& AutoShutDown() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = uintptr_t> T& PawnFsmTemplate() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& HideRenderMesh() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_ActorSpawned() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializePawnData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerInitID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_ActorType() {
		return ((T (*)(ActorSpawner*))(Il2CppBase() + 0x4CE2090))(this);
	}
	template <typename T = void> T set_ActorType(uintptr_t value) {
		return ((T (*)(ActorSpawner*, uintptr_t))(Il2CppBase() + 0x4CE21A8))(this, value);
	}
	template <typename T = uintptr_t> T get_ActorSpawned() {
		return ((T (*)(ActorSpawner*))(Il2CppBase() + 0x4CE21B0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ActorSpawner*))(Il2CppBase() + 0x4CE21B8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ActorSpawner*))(Il2CppBase() + 0x4CE22F8))(this);
	}
	template <typename T = uintptr_t> T InitializePawnData() {
		return ((T (*)(ActorSpawner*))(Il2CppBase() + 0x4CE23C0))(this);
	}
	template <typename T = uintptr_t> T SpawnActor() {
		return ((T (*)(ActorSpawner*))(Il2CppBase() + 0x4CE24AC))(this);
	}
	template <typename T = uint32_t> T GetPlayerInitID(uintptr_t ActorType, uintptr_t PawnObject) {
		return ((T (*)(ActorSpawner*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CE17D4))(this, ActorType, PawnObject);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(ActorSpawner*))(Il2CppBase() + 0x4CE2C14))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(ActorSpawner*))(Il2CppBase() + 0x4CE2CBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ActorSpawner*))(Il2CppBase() + 0x4CE2D8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(ActorSpawner*))(Il2CppBase() + 0x4CE2D94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(ActorSpawner*))(Il2CppBase() + 0x4CE2D9C))(this);
	}

};

}
