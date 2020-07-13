#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUInputObjectInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_InputObjectInfo"));
	}

	template <typename T = uintptr_t> T& _gameObject() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _terrain() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _syncdTransform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _useTransformOffset() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& _translateOffset() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector3> T& _rotateOffset() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& _scaleOffset() {
		return *(T*)((uintptr_t)this + 0x6C);
	}

	template <typename T = void> T CopyTo(uintptr_t destObject) {
		return ((T (*)(HEUInputObjectInfo*, uintptr_t))(Il2CppBase() + 0x2BDAC4C))(this, destObject);
	}

};

}
