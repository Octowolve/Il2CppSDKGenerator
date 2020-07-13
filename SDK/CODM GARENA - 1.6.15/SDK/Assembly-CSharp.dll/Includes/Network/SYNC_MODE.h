#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class SYNCMODE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "SYNC_MODE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eSYNC_MODE_ALL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eSYNC_MODE_INCREMENT_ADD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eSYNC_MODE_INCREMENT_DELETE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eSYNC_MODE_MODIFY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
