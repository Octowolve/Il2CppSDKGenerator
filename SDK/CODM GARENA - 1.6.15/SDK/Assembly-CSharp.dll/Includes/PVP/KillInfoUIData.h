#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class KillInfoUIData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "KillInfoUIData"));
	}

	template <typename T = Il2CppString*> T& killerName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& killerId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& killerCamp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isKillerLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& weaponId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& deadthName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& deadId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& deathCamp() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isDeathLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& hitGroup() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = unsigned char> T& ContinusKillCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = unsigned char> T& PenetrateCount() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = unsigned char> T& FireComponet() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ResetData() {
		return ((T (*)(KillInfoUIData*))(Il2CppBase() + 0x3484C0C))(this);
	}

};

}
