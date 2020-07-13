#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class ProtocolMoveData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "ProtocolMoveData"));
	}

	template <typename T = Il2CppVector3> T& SimulateLocation() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& SimulateDirection() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& SimulateVelocity() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& TimeStamp() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = unsigned char> T& MoveState() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = unsigned char> T& Extra() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = unsigned char> T& CheckSeq() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x33);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPackMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetPackMoveData(uintptr_t moveData) {
		return ((T (*)(ProtocolMoveData*, uintptr_t))(Il2CppBase() + 0x5081B7C))(this, moveData);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(ProtocolMoveData*))(Il2CppBase() + 0x5081D70))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(ProtocolMoveData*, bool))(Il2CppBase() + 0x5081D78))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(ProtocolMoveData*))(Il2CppBase() + 0x5081D80))(this);
	}

};

}
