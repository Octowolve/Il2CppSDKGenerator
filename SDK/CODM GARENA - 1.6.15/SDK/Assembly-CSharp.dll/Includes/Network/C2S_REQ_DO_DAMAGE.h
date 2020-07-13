#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class C2SREQDODAMAGE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "C2S_REQ_DO_DAMAGE"));
	}

	template <typename T = uint32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = unsigned char> T& TargetType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& WeaponId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = unsigned char> T& bWeaponSlotIdx() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = unsigned char> T& HitPostion() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = unsigned char> T& PenetrateWallCount() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = unsigned char> T& PenetratePlayerCount() {
		return *(T*)((uintptr_t)this + 0x1B);
	}
	template <typename T = unsigned char> T& HitPlayerTimes() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Target() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Source() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Damage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ClientTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int16_t> T& CurrentClipNum() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int16_t> T& RecoilYaw() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = int16_t> T& RecoilPitch() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int16_t> T& DistributeYaw() {
		return *(T*)((uintptr_t)this + 0x36);
	}
	template <typename T = int16_t> T& DistributePitch() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& TargetPos() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = unsigned char> T& HitSpecialFlag() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = unsigned char> T& RightOrLeft() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Serialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(C2SREQDODAMAGE*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x503F92C))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x503FC28))(0, data, DataIndex);
	}
	template <typename T = void> T xLuaBaseProxy_Serialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(C2SREQDODAMAGE*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x503FD28))(this, P0, P1);
	}

};

}
