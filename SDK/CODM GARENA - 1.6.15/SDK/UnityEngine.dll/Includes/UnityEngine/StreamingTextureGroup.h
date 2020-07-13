#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class StreamingTextureGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "StreamingTextureGroup"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& minLODSize() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& maxLODSize() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& lodBias() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& streamingPriority() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& uniqueID() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
