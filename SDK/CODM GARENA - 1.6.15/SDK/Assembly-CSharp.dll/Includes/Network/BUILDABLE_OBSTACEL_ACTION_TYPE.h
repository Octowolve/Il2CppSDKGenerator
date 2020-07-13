#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class BUILDABLEOBSTACELACTIONTYPE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "BUILDABLE_OBSTACEL_ACTION_TYPE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eBUILDABLE_OBSTACEL_ACTION_TYPE_START_BUILD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eBUILDABLE_OBSTACEL_ACTION_TYPE_STOP_BUILD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eBUILDABLE_OBSTACEL_ACTION_TYPE_STATUS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
