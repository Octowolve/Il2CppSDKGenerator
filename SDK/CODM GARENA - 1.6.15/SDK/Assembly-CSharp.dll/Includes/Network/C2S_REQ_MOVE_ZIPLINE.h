#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class C2SREQMOVEZIPLINE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "C2S_REQ_MOVE_ZIPLINE"));
	}

	template <typename T = uintptr_t> T& Pos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = unsigned char> T& RotateX() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = unsigned char> T& RotateY() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = unsigned char> T& RotateExtra() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = uintptr_t> T& Velocity() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = unsigned char> T& MoveState() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& LogicFrame() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = unsigned char> T& BodyRotateX() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = unsigned char> T& CheckSeq() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = uint32_t> T& ClientUID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = unsigned char> T& MoveStage() {
		return *(T*)((uintptr_t)this + 0x28);
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
		return ((T (*)(C2SREQMOVEZIPLINE*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x5043C7C))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x5043E98))(0, data, DataIndex);
	}
	template <typename T = void> T xLuaBaseProxy_Serialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(C2SREQMOVEZIPLINE*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x5043F7C))(this, P0, P1);
	}

};

}
