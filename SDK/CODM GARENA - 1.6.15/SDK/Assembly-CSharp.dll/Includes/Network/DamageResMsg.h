#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class DamageResMsg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "DamageResMsg"));
	}

	template <typename T = uint32_t> T& DamageCauserID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& TargetPos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& SourcePos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& Damage() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& DisplayDamage() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& PenetrateWallCount() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& PenetratePlayerCount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = unsigned char> T& HitPostion() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& WeaponID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& DamageType() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& Health() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& Critical() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseInDeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuildResponseMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T UseInDeadReplay() {
		return ((T (*)(DamageResMsg*))(Il2CppBase() + 0x50C5150))(this);
	}
	template <typename T = int32_t> static T OnBuildResponseMsg(Il2CppArray<uintptr_t>* data, int32_t DataIndex, int32_t DataCount, int32_t Sequence) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x50C51F0))(0, data, DataIndex, DataCount, Sequence);
	}
	template <typename T = bool> T xLuaBaseProxy_UseInDeadReplay() {
		return ((T (*)(DamageResMsg*))(Il2CppBase() + 0x50C54EC))(this);
	}

};

}
