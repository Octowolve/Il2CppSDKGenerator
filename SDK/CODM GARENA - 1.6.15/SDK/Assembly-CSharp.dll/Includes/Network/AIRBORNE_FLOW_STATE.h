#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class AIRBORNEFLOWSTATE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "AIRBORNE_FLOW_STATE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eAIRBORNE_FLOW_STATE_CREATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eAIRBORNE_FLOW_STATE_CHANGE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eAIRBORNE_FLOW_STATE_DESTROY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
