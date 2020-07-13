#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkImageSourceSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkImageSourceSettings"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x49026B8))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkImageSourceSettings*, uintptr_t))(Il2CppBase() + 0x490274C))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkImageSourceSettings*))(Il2CppBase() + 0x4902778))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkImageSourceSettings*))(Il2CppBase() + 0x49027E0))(this);
	}
	template <typename T = void> T SetOneTexture(uint32_t in_texture) {
		return ((T (*)(AkImageSourceSettings*, uint32_t))(Il2CppBase() + 0x4902968))(this, in_texture);
	}
	template <typename T = void> T SetName(Il2CppString* in_pName) {
		return ((T (*)(AkImageSourceSettings*, Il2CppString*))(Il2CppBase() + 0x4902A1C))(this, in_pName);
	}
	template <typename T = void> T set_params_(uintptr_t value) {
		return ((T (*)(AkImageSourceSettings*, uintptr_t))(Il2CppBase() + 0x4902AD0))(this, value);
	}
	template <typename T = uintptr_t> T get_params_() {
		return ((T (*)(AkImageSourceSettings*))(Il2CppBase() + 0x4902C00))(this);
	}

};

}
