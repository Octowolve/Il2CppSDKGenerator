#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class SyncRespawnMsg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "SyncRespawnMsg"));
	}

	template <typename T = uint32_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& RespawnPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint64_t> T& RoleId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = unsigned char> T& Camp() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& FaceDirection() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = unsigned char> T& RespawnType() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint64_t> T& RespawnTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& HomeZoneId() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& PickupWeaponId() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = unsigned char> T& BagId() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = unsigned char> T& MoveState() {
		return *(T*)((uintptr_t)this + 0x61);
	}
	template <typename T = int32_t> T& OwnerPlayerId() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& PicId() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& FrameId() {
		return *(T*)((uintptr_t)this + 0x6C);
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
		return ((T (*)(SyncRespawnMsg*))(Il2CppBase() + 0x4EBE41C))(this);
	}
	template <typename T = int32_t> static T OnBuildResponseMsg(Il2CppArray<uintptr_t>* data, int32_t DataIndex, int32_t DataCount, int32_t Sequence) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4EBE4BC))(0, data, DataIndex, DataCount, Sequence);
	}
	template <typename T = bool> T xLuaBaseProxy_UseInDeadReplay() {
		return ((T (*)(SyncRespawnMsg*))(Il2CppBase() + 0x4EBE88C))(this);
	}

};

}
