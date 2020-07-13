#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class ETOYBOMBSTATUS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "ETOYBOMB_STATUS"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eTOYBOMB_STATUS_SILENCE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eTOYBOMB_STATUS_MUSIC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
