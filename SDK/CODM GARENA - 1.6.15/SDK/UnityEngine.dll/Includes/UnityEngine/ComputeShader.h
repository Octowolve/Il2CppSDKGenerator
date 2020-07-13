#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ComputeShader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ComputeShader"));
	}


	template <typename T = int32_t> T FindKernel(Il2CppString* name) {
		return ((T (*)(ComputeShader*, Il2CppString*))(Il2CppBase() + 0x4DA1798))(this, name);
	}

};

}
