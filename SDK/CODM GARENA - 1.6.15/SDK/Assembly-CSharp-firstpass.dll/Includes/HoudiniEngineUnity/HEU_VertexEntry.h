#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUVertexEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_VertexEntry"));
	}

	template <typename T = int32_t> T& _meshKey() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _vertexIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _normalIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
