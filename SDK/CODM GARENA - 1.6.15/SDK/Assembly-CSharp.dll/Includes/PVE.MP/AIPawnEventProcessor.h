#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class AIPawnEventProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "AIPawnEventProcessor"));
	}

	template <typename T = bool> T& m_IsPreInited() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventAfterPawnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventBeforePawnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigNetSyncModuleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T PreInit(uintptr_t InOwner) {
		return ((T (*)(AIPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x49C435C))(this, InOwner);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AIPawnEventProcessor*))(Il2CppBase() + 0x49C4424))(this);
	}
	template <typename T = void> T RegisterEventAfterPawnStart() {
		return ((T (*)(AIPawnEventProcessor*))(Il2CppBase() + 0x49C44E0))(this);
	}
	template <typename T = void> T RegisterEventBeforePawnStart() {
		return ((T (*)(AIPawnEventProcessor*))(Il2CppBase() + 0x49C4578))(this);
	}
	template <typename T = void> T ConfigNetSyncModuleList() {
		return ((T (*)(AIPawnEventProcessor*))(Il2CppBase() + 0x49C4610))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit(uintptr_t P0) {
		return ((T (*)(AIPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x49C4788))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(AIPawnEventProcessor*))(Il2CppBase() + 0x49C4790))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterEventAfterPawnStart() {
		return ((T (*)(AIPawnEventProcessor*))(Il2CppBase() + 0x49C4798))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterEventBeforePawnStart() {
		return ((T (*)(AIPawnEventProcessor*))(Il2CppBase() + 0x49C47A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigNetSyncModuleList() {
		return ((T (*)(AIPawnEventProcessor*))(Il2CppBase() + 0x49C47A8))(this);
	}

};

}
