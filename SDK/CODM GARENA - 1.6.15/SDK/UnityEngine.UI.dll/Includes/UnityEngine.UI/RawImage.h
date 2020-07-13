#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class RawImage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "RawImage"));
	}

	template <typename T = uintptr_t> T& m_Texture() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppRect> T& m_UVRect() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = uintptr_t> T get_mainTexture() {
		return ((T (*)(RawImage*))(Il2CppBase() + 0x4E29E90))(this);
	}
	template <typename T = uintptr_t> T get_texture() {
		return ((T (*)(RawImage*))(Il2CppBase() + 0x4E2A0B0))(this);
	}
	template <typename T = void> T set_texture(uintptr_t value) {
		return ((T (*)(RawImage*, uintptr_t))(Il2CppBase() + 0x4E2A0B8))(this, value);
	}
	template <typename T = Il2CppRect> T get_uvRect() {
		return ((T (*)(RawImage*))(Il2CppBase() + 0x4E2A1A0))(this);
	}
	template <typename T = void> T set_uvRect(Il2CppRect value) {
		return ((T (*)(RawImage*, Il2CppRect))(Il2CppBase() + 0x4E2A1B0))(this, value);
	}
	template <typename T = void> T SetNativeSize() {
		return ((T (*)(RawImage*))(Il2CppBase() + 0x4E2A234))(this);
	}
	template <typename T = void> T OnPopulateMesh(uintptr_t vh) {
		return ((T (*)(RawImage*, uintptr_t))(Il2CppBase() + 0x4E2A4C0))(this, vh);
	}

};

}
