#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class EAIRDROPBOXSTATE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "EAIRDROP_BOX_STATE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eAIRDROP_BOX_STATE_NORMAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eAIRDROP_BOX_STATE_ONGROUND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eAIRDROP_BOX_STATE_STOP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
