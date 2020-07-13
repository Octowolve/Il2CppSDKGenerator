#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class CAREPACKAGETYPE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "CAREPACKAGE_TYPE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eCAREPACKAGE_SINGGAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eCAREPACKAGE_GOLIATH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eCAREPACKAGE_CHAMBER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
