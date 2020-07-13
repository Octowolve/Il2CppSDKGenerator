#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class AirDropManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "AirDropManager"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_AirDropMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAirDrop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Contains() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveServerMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Remove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_AirDropMap() {
		return ((T (*)(AirDropManager*))(Il2CppBase() + 0x2C562C8))(this);
	}
	template <typename T = uintptr_t> T GetAirDrop(uint32_t actorID) {
		return ((T (*)(AirDropManager*, uint32_t))(Il2CppBase() + 0x2C562D0))(this, actorID);
	}
	template <typename T = bool> T Contains(uint32_t actorID) {
		return ((T (*)(AirDropManager*, uint32_t))(Il2CppBase() + 0x2C55CF8))(this, actorID);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(AirDropManager*))(Il2CppBase() + 0x2C563CC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AirDropManager*))(Il2CppBase() + 0x2C567A0))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(AirDropManager*))(Il2CppBase() + 0x2C56470))(this);
	}
	template <typename T = void> T OnReceiveServerMessage(uintptr_t info) {
		return ((T (*)(AirDropManager*, uintptr_t))(Il2CppBase() + 0x2C56B38))(this, info);
	}
	template <typename T = void> T Remove(uint32_t actorID) {
		return ((T (*)(AirDropManager*, uint32_t))(Il2CppBase() + 0x2C56844))(this, actorID);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(AirDropManager*))(Il2CppBase() + 0x2C57434))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(AirDropManager*))(Il2CppBase() + 0x2C5743C))(this);
	}

};

}
