#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class S2CSYNCMOVE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "S2C_SYNC_MOVE"));
	}

	template <typename T = uint32_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Pos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = unsigned char> T& RotateX() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = unsigned char> T& RotateY() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = unsigned char> T& RotateExtra() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = uintptr_t> T& Velocity() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = unsigned char> T& MoveState() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& LogicFrame() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = unsigned char> T& CheckSeq() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = unsigned char> T& Extra() {
		return *(T*)((uintptr_t)this + 0x25);
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
		return ((T (*)(S2CSYNCMOVE*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E8FE58))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4E90064))(0, data, DataIndex);
	}
	template <typename T = void> T xLuaBaseProxy_Unserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(S2CSYNCMOVE*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E90148))(this, P0, P1);
	}

};

}
