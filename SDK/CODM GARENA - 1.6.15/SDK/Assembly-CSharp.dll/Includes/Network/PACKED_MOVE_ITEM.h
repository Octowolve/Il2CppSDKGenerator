#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class PACKEDMOVEITEM
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "PACKED_MOVE_ITEM"));
	}

	template <typename T = uint32_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Pos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Velocity() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = unsigned char> T& FaceYaw() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = unsigned char> T& FacePitch() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = unsigned char> T& RotateExtra() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = unsigned char> T& MoveState() {
		return *(T*)((uintptr_t)this + 0x17);
	}
	template <typename T = uint16_t> T& TimeStamp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = unsigned char> T& CheckSeq() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = unsigned char> T& Extra() {
		return *(T*)((uintptr_t)this + 0x1B);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Serialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PACKEDMOVEITEM*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x507E2DC))(this, bytes, position);
	}
	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PACKEDMOVEITEM*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x507E4E0))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x507E6EC))(0, data, DataIndex);
	}

};

}
