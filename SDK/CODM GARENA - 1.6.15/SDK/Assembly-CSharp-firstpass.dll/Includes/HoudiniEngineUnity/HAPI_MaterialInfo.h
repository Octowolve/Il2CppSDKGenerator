#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPIMaterialInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_MaterialInfo"));
	}

	template <typename T = int32_t> T& nodeId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& exists() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& hasChanged() {
		return *(T*)((uintptr_t)this + 0x5);
	}


};

}
