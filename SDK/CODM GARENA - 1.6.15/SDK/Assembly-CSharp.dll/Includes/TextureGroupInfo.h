#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TextureGroupInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextureGroupInfo"));
	}

	template <typename T = int32_t> T& UniqueId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& EnableStreaming() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& MinLodSize() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& MaxLodSize() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& LodBias() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& StreamingPriority() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
