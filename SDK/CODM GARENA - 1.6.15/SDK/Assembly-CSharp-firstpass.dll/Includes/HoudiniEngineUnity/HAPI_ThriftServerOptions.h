#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPIThriftServerOptions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_ThriftServerOptions"));
	}

	template <typename T = bool> T& autoClose() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& timeoutMs() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
