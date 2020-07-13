#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class TreeInstance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "TreeInstance"));
	}

	template <typename T = Il2CppVector3> T& position() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& widthScale() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& heightScale() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppQuaternion> T& rotation() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& lightmapColor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& prototypeIndex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& temporaryDistance() {
		return *(T*)((uintptr_t)this + 0x30);
	}


};

}
