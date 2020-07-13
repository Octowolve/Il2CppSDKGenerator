#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PlayerControllerEventProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PlayerControllerEventProcessor"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_NetSyncModules() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigNetSyncModuleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T PreInit(uintptr_t InOwner) {
		return ((T (*)(PlayerControllerEventProcessor*, uintptr_t))(Il2CppBase() + 0x1DDC36C))(this, InOwner);
	}
	template <typename T = void> T ConfigNetSyncModuleList() {
		return ((T (*)(PlayerControllerEventProcessor*))(Il2CppBase() + 0x1DDC4D0))(this);
	}
	template <typename T = uintptr_t> T GetModule(uintptr_t InModuleType) {
		return ((T (*)(PlayerControllerEventProcessor*, uintptr_t))(Il2CppBase() + 0x1DB3630))(this, InModuleType);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit(uintptr_t P0) {
		return ((T (*)(PlayerControllerEventProcessor*, uintptr_t))(Il2CppBase() + 0x1DDC5FC))(this, P0);
	}

};

}
