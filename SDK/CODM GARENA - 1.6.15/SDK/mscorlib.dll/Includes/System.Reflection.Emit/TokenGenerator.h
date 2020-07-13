#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class TokenGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "TokenGenerator"));
	}


	template <typename T = int32_t> T GetToken(Il2CppString* str) {
		return ((T (*)(TokenGenerator*, Il2CppString*))(Il2CppBase() + 0x0))(this, str);
	}
	template <typename T = int32_t> T GetToken_1(uintptr_t member) {
		return ((T (*)(TokenGenerator*, uintptr_t))(Il2CppBase() + 0x0))(this, member);
	}
	template <typename T = int32_t> T GetToken_2(uintptr_t method, Il2CppArray<uintptr_t>* opt_param_types) {
		return ((T (*)(TokenGenerator*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, method, opt_param_types);
	}

};

}
