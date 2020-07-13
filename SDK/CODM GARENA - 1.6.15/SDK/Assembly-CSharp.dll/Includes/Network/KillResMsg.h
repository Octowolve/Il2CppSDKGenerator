#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class KillResMsg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "KillResMsg"));
	}

	template <typename T = Il2CppVector3> T& DeadPos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& KillerID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& DeadID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& WeaponId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = unsigned char> T& HitPosition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = unsigned char> T& ContinusKill() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = unsigned char> T& PenetrateWallCount() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = unsigned char> T& PenetratePlayerCount() {
		return *(T*)((uintptr_t)this + 0x3B);
	}
	template <typename T = unsigned char> T& DeadType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = unsigned char> T& FireComponet() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = unsigned char> T& KillSum() {
		return *(T*)((uintptr_t)this + 0x3E);
	}
	template <typename T = unsigned char> T& IsKnockDown() {
		return *(T*)((uintptr_t)this + 0x3F);
	}
	template <typename T = unsigned char> T& IsRealKiller() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& WeaponLevel() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& CamoId() {
		return *(T*)((uintptr_t)this + 0x48);
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
		return ((T (*)(KillResMsg*))(Il2CppBase() + 0x482EF04))(this);
	}
	template <typename T = int32_t> static T OnBuildResponseMsg(Il2CppArray<uintptr_t>* data, int32_t DataIndex, int32_t DataCount, int32_t Sequence) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x482EFA4))(0, data, DataIndex, DataCount, Sequence);
	}
	template <typename T = bool> T xLuaBaseProxy_UseInDeadReplay() {
		return ((T (*)(KillResMsg*))(Il2CppBase() + 0x482F254))(this);
	}

};

}
