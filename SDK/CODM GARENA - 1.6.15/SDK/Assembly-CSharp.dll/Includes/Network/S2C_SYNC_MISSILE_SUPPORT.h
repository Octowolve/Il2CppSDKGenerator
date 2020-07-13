#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class S2CSYNCMISSILESUPPORT
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "S2C_SYNC_MISSILE_SUPPORT"));
	}

	template <typename T = uint32_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = unsigned char> T& Camp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = unsigned char> T& ControllableType() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = unsigned char> T& LeftMissileNum() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = uintptr_t> T& Pos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Velocity() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& FlyTimeElapse() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = unsigned char> T& FlyState() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0x28);
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
		return ((T (*)(S2CSYNCMISSILESUPPORT*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E8ED9C))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4E8EFB8))(0, data, DataIndex);
	}
	template <typename T = void> T xLuaBaseProxy_Unserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(S2CSYNCMISSILESUPPORT*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E8F09C))(this, P0, P1);
	}

};

}
