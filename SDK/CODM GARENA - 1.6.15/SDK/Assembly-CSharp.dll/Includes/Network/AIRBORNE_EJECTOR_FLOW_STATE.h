#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class AIRBORNEEJECTORFLOWSTATE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "AIRBORNE_EJECTOR_FLOW_STATE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eAIRBORNE_EJECTOR_FLOW_STATE_APPLY_SUCCESS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eAIRBORNE_EJECTOR_FLOW_STATE_APPLY_FAIL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eAIRBORNE_EJECTOR_FLOW_STATE_START() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eAIRBORNE_EJECTOR_FLOW_STATE_EJECTING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eAIRBORNE_EJECTOR_FLOW_STATE_END() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eAIRBORNE_EJECTOR_FLOW_STATE_DESTROY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
