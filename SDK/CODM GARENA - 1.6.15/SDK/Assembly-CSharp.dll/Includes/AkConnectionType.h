#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkConnectionType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkConnectionType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& ConnectionType_Direct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ConnectionType_GameDefSend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ConnectionType_UserDefSend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
