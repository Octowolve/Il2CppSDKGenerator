#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class S2CSYNCKILL
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "S2C_SYNC_KILL"));
	}

	template <typename T = uint32_t> T& ShooterId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& WeaponId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = unsigned char> T& HitPosition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = unsigned char> T& ContinusKill() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = unsigned char> T& PenetrateWallCount() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = unsigned char> T& PenetratePlayerCount() {
		return *(T*)((uintptr_t)this + 0x1B);
	}
	template <typename T = unsigned char> T& DeathType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Pos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = unsigned char> T& FireComponent() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = unsigned char> T& KillSum() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = unsigned char> T& IsKnockDown() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = unsigned char> T& IsRealKiller() {
		return *(T*)((uintptr_t)this + 0x27);
	}
	template <typename T = int32_t> T& WeaponLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& CamoId() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& AttackActorID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(S2CSYNCKILL*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E8D8B0))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4E8DB58))(0, data, DataIndex);
	}
	template <typename T = void> T xLuaBaseProxy_Unserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(S2CSYNCKILL*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E8DC20))(this, P0, P1);
	}

};

}
