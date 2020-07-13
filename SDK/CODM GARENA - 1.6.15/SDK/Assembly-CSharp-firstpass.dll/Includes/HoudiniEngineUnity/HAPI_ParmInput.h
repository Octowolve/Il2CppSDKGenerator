#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPIParmInput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_ParmInput"));
	}

	template <typename T = bool> T& isAsset() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& inputObject() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& newInputObject() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& inputNodeId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& inputNodeUniqueId() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
