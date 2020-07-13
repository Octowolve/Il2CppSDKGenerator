#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class VOTEFORKICKRESULTSTATE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "VOTE_FOR_KICK_RESULT_STATE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eVOTE_FOR_KICK_RESULT_STATE_BEGIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eVOTE_FOR_KICK_RESULT_STATE_VOTING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eVOTE_FOR_KICK_RESULT_STATE_END() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
