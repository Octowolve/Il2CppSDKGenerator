#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class S2CSYNCSENTRYGUNFIREINFO
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "S2C_SYNC_SENTRY_GUN_FIRE_INFO"));
	}

	template <typename T = uint32_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = unsigned char> T& Camp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = unsigned char> T& IsDestroyed() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = unsigned char> T& LifeTime() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = unsigned char> T& MissileFire() {
		return *(T*)((uintptr_t)this + 0x17);
	}
	template <typename T = uint32_t> T& LockedTargetID() {
		return *(T*)((uintptr_t)this + 0x18);
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
		return ((T (*)(S2CSYNCSENTRYGUNFIREINFO*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E95788))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4E95954))(0, data, DataIndex);
	}
	template <typename T = void> T xLuaBaseProxy_Unserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(S2CSYNCSENTRYGUNFIREINFO*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E95A04))(this, P0, P1);
	}

};

}
