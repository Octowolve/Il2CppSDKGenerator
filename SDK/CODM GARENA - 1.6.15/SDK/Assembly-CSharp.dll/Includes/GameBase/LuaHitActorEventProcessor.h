#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class LuaHitActorEventProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "LuaHitActorEventProcessor"));
	}

	template <typename T = uintptr_t> T& hitActor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigNetSyncModuleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDoDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveBatchAIMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T ConfigNetSyncModuleList() {
		return ((T (*)(LuaHitActorEventProcessor*))(Il2CppBase() + 0x19AD6B4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LuaHitActorEventProcessor*))(Il2CppBase() + 0x19AD4A0))(this);
	}
	template <typename T = void> T OnDoDamage(uintptr_t Msg) {
		return ((T (*)(LuaHitActorEventProcessor*, uintptr_t))(Il2CppBase() + 0x19AD788))(this, Msg);
	}
	template <typename T = void> T OnSyncDead(uintptr_t Msg) {
		return ((T (*)(LuaHitActorEventProcessor*, uintptr_t))(Il2CppBase() + 0x19AD9AC))(this, Msg);
	}
	template <typename T = void> T OnReceiveBatchAIMoveData(uintptr_t inMsg) {
		return ((T (*)(LuaHitActorEventProcessor*, uintptr_t))(Il2CppBase() + 0x19ADC2C))(this, inMsg);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigNetSyncModuleList() {
		return ((T (*)(LuaHitActorEventProcessor*))(Il2CppBase() + 0x19ADD98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LuaHitActorEventProcessor*))(Il2CppBase() + 0x19ADDA0))(this);
	}

};

}
