#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SystemManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SystemManager"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_Systems() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_SystemUpdateList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_SystemWrapperList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_SystemState() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IsPlayInEditor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterSystemService() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSystemService() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeServices() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = bool> T get_IsPlayInEditor() {
		return ((T (*)(SystemManager*))(Il2CppBase() + 0x3418340))(this);
	}
	template <typename T = void> T set_IsPlayInEditor(bool value) {
		return ((T (*)(SystemManager*, bool))(Il2CppBase() + 0x3418348))(this, value);
	}
	template <typename T = void> T RegisterSystemService(bool tick) {
		return ((T (*)(SystemManager*, bool))(Il2CppBase() + 0x1E803D8))(this, tick);
	}
	template <typename T = uintptr_t> T GetSystemService() {
		return ((T (*)(SystemManager*))(Il2CppBase() + 0x1B7BEA4))(this);
	}
	template <typename T = void> T ChangeToState(uintptr_t TargetState) {
		return ((T (*)(SystemManager*, uintptr_t))(Il2CppBase() + 0x3418350))(this, TargetState);
	}
	template <typename T = void> T OnApplicationPause(bool pause) {
		return ((T (*)(SystemManager*, bool))(Il2CppBase() + 0x3418430))(this, pause);
	}
	template <typename T = void> T InitializeServices() {
		return ((T (*)(SystemManager*))(Il2CppBase() + 0x34185A4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SystemManager*, float))(Il2CppBase() + 0x3418778))(this, deltaTime);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(SystemManager*))(Il2CppBase() + 0x34188EC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SystemManager*))(Il2CppBase() + 0x3418C18))(this);
	}

};

}
