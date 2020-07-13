#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class RenderBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "RenderBuffer"));
	}

	template <typename T = int32_t> T& m_RenderTextureInstanceID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& m_BufferPtr() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
