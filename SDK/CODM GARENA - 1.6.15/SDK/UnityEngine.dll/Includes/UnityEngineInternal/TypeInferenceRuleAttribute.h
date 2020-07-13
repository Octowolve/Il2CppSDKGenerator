#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngineInternal {

class TypeInferenceRuleAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngineInternal", "TypeInferenceRuleAttribute"));
	}

	template <typename T = Il2CppString*> T& _rule() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(TypeInferenceRuleAttribute*))(Il2CppBase() + 0x4D424A4))(this);
	}

};

}
