#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class CreateAssetMenuAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "CreateAssetMenuAttribute"));
	}

	template <typename T = Il2CppString*> T& menuName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& fileName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& order() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T set_menuName(Il2CppString* value) {
		return ((T (*)(CreateAssetMenuAttribute*, Il2CppString*))(Il2CppBase() + 0x4DA3594))(this, value);
	}
	template <typename T = void> T set_fileName(Il2CppString* value) {
		return ((T (*)(CreateAssetMenuAttribute*, Il2CppString*))(Il2CppBase() + 0x4DA359C))(this, value);
	}
	template <typename T = void> T set_order(int32_t value) {
		return ((T (*)(CreateAssetMenuAttribute*, int32_t))(Il2CppBase() + 0x4DA35A4))(this, value);
	}

};

}
