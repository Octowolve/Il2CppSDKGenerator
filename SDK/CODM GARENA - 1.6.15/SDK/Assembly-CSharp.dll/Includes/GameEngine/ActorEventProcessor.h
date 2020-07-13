#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ActorEventProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ActorEventProcessor"));
	}

	template <typename T = uintptr_t> T& m_ActorRoot() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& EventChannel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_bIsInit() {
		return *(T*)((uintptr_t)this + 0x10);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RegisterHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_Owner() {
		return ((T (*)(ActorEventProcessor*))(Il2CppBase() + 0x2B39E60))(this);
	}
	template <typename T = void> T set_Owner(uintptr_t value) {
		return ((T (*)(ActorEventProcessor*, uintptr_t))(Il2CppBase() + 0x2B39E68))(this, value);
	}
	template <typename T = bool> T get_bIsInit() {
		return ((T (*)(ActorEventProcessor*))(Il2CppBase() + 0x2B39E70))(this);
	}
	template <typename T = void> T set_bIsInit(bool value) {
		return ((T (*)(ActorEventProcessor*, bool))(Il2CppBase() + 0x2B39E78))(this, value);
	}
	template <typename T = void> T PreInit(uintptr_t InOwner) {
		return ((T (*)(ActorEventProcessor*, uintptr_t))(Il2CppBase() + 0x2B39E80))(this, InOwner);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ActorEventProcessor*))(Il2CppBase() + 0x2B39F58))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(ActorEventProcessor*))(Il2CppBase() + 0x2B39FFC))(this);
	}
	template <typename T = void> T RegisterHandler(uint32_t commandId, void* handler) {
		return ((T (*)(ActorEventProcessor*, uint32_t, void*))(Il2CppBase() + 0x2B3A0C0))(this, commandId, handler);
	}
	template <typename T = void> T RegisterHandler_1(uintptr_t matchType, void* handler) {
		return ((T (*)(ActorEventProcessor*, uintptr_t, void*))(Il2CppBase() + 0x2B3A1A4))(this, matchType, handler);
	}
	template <typename T = bool> T OnEvent(uintptr_t Msg) {
		return ((T (*)(ActorEventProcessor*, uintptr_t))(Il2CppBase() + 0x2B3A288))(this, Msg);
	}

};

}
