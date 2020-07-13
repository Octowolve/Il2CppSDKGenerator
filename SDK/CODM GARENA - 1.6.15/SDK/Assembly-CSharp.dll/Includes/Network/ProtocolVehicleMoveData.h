#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class ProtocolVehicleMoveData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "ProtocolVehicleMoveData"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetMoveData(uintptr_t moveData) {
		return ((T (*)(ProtocolVehicleMoveData*, uintptr_t))(Il2CppBase() + 0x50825B8))(this, moveData);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(ProtocolVehicleMoveData*))(Il2CppBase() + 0x50827A0))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(ProtocolVehicleMoveData*, bool))(Il2CppBase() + 0x50827A8))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(ProtocolVehicleMoveData*))(Il2CppBase() + 0x50827B0))(this);
	}

};

}
