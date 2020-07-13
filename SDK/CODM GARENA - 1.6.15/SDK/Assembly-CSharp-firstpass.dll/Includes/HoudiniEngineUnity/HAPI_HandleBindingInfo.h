#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPIHandleBindingInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_HandleBindingInfo"));
	}

	template <typename T = int32_t> T& handleParmNameSH() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& assetParmNameSH() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& assetParmId() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
