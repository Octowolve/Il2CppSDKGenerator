#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class ModuleBuilderTokenGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "ModuleBuilderTokenGenerator"));
	}

	template <typename T = uintptr_t> T& mb() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> T GetToken(Il2CppString* str) {
		return ((T (*)(ModuleBuilderTokenGenerator*, Il2CppString*))(Il2CppBase() + 0x4573C84))(this, str);
	}
	template <typename T = int32_t> T GetToken_1(uintptr_t member) {
		return ((T (*)(ModuleBuilderTokenGenerator*, uintptr_t))(Il2CppBase() + 0x4573CAC))(this, member);
	}
	template <typename T = int32_t> T GetToken_2(uintptr_t method, Il2CppArray<uintptr_t>* opt_param_types) {
		return ((T (*)(ModuleBuilderTokenGenerator*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4573CD4))(this, method, opt_param_types);
	}

};

}
