#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class EBRKEYEVENTCLASS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "EBRKEY_EVENT_CLASS"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& KILL_EVENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& KNOCKDOWN_EVENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& KICKOUT_EVENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& WIN_EVENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
