#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPIPDGWorkitemInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_PDG_WorkitemInfo"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& numResults() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& nameSH() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
