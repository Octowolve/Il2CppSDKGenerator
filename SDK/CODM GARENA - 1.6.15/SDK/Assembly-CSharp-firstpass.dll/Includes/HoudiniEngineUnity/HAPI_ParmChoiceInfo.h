#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPIParmChoiceInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_ParmChoiceInfo"));
	}

	template <typename T = int32_t> T& parentParmId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& labelSH() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& valueSH() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
