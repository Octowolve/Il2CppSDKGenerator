#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPIPDGEventInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_PDG_EventInfo"));
	}

	template <typename T = int32_t> T& nodeId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& workitemId() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& dependencyId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& currentState() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& lastState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& eventType() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
