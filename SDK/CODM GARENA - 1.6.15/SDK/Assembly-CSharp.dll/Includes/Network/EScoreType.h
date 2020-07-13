#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class EScoreType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "EScoreType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& ESCORE_TYPE_KILL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ESCORE_TYPE_ASSIT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ESCORE_TYPE_RULE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ESCORE_TYPE_MAX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
