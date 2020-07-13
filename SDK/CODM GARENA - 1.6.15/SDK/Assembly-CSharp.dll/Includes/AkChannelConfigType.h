#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkChannelConfigType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkChannelConfigType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& AK_ChannelConfigType_Anonymous() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AK_ChannelConfigType_Standard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AK_ChannelConfigType_Ambisonic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
