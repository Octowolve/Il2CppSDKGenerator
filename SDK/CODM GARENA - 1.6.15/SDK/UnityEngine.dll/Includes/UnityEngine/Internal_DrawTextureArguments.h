#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class InternalDrawTextureArguments
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Internal_DrawTextureArguments"));
	}

	template <typename T = Il2CppRect> T& screenRect() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppRect> T& sourceRect() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& leftBorder() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& rightBorder() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& topBorder() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& bottomBorder() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& pass() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& texture() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& mat() {
		return *(T*)((uintptr_t)this + 0x3C);
	}


};

}
