#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class ProtocolVehicleDriveData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "ProtocolVehicleDriveData"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x24);
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

	template <typename T = void> T SetMoveData(uintptr_t msg) {
		return ((T (*)(ProtocolVehicleDriveData*, uintptr_t))(Il2CppBase() + 0x5081EBC))(this, msg);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(ProtocolVehicleDriveData*))(Il2CppBase() + 0x508246C))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(ProtocolVehicleDriveData*, bool))(Il2CppBase() + 0x5082474))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(ProtocolVehicleDriveData*))(Il2CppBase() + 0x508247C))(this);
	}

};

}
