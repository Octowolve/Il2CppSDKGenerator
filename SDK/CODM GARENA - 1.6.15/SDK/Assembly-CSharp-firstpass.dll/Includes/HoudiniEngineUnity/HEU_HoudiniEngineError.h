#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUHoudiniEngineError
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_HoudiniEngineError"));
	}

	template <typename T = Il2CppString*> T& _errorMsg() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(HEUHoudiniEngineError*))(Il2CppBase() + 0x2BD3E2C))(this);
	}

};

}
