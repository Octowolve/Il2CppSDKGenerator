#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class LightmapData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "LightmapData"));
	}

	template <typename T = uintptr_t> T& m_Light() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Dir() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_ShadowMask() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_lightmapColor() {
		return ((T (*)(LightmapData*))(Il2CppBase() + 0x47A72F0))(this);
	}
	template <typename T = void> T set_lightmapColor(uintptr_t value) {
		return ((T (*)(LightmapData*, uintptr_t))(Il2CppBase() + 0x47A72F8))(this, value);
	}
	template <typename T = uintptr_t> T get_lightmapDir() {
		return ((T (*)(LightmapData*))(Il2CppBase() + 0x47A7300))(this);
	}
	template <typename T = void> T set_lightmapDir(uintptr_t value) {
		return ((T (*)(LightmapData*, uintptr_t))(Il2CppBase() + 0x47A7308))(this, value);
	}
	template <typename T = uintptr_t> T get_shadowMask() {
		return ((T (*)(LightmapData*))(Il2CppBase() + 0x47A7310))(this);
	}
	template <typename T = void> T set_shadowMask(uintptr_t value) {
		return ((T (*)(LightmapData*, uintptr_t))(Il2CppBase() + 0x47A7318))(this, value);
	}

};

}
