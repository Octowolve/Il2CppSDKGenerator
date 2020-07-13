#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUHandleParamBinding
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_HandleParamBinding"));
	}

	template <typename T = uintptr_t> T& _paramType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _parmID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _paramName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _bDisabled() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _boundChannels() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
