#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class KillInfoParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "KillInfoParam"));
	}

	template <typename T = uint32_t> T& KillerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& DeadID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& WeaponId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& HitPosition() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ContinusKill() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& PenetrateWallCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& PenetratePlayerCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& DeadType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& FireComponet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& KillSum() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& IsKnockDown() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& IsRealKiller() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = uint32_t> T& CamoId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& isLogin() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& m_Nickname() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& WeaponLevel() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& IsKillByZomebie() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& LoginMsgType() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_NickName() {
		return ((T (*)(KillInfoParam*))(Il2CppBase() + 0x3484ABC))(this);
	}
	template <typename T = void> T set_NickName(Il2CppString* value) {
		return ((T (*)(KillInfoParam*, Il2CppString*))(Il2CppBase() + 0x3484AC4))(this, value);
	}
	template <typename T = bool> T get_IsSuicide() {
		return ((T (*)(KillInfoParam*))(Il2CppBase() + 0x3484AE4))(this);
	}

};

}
