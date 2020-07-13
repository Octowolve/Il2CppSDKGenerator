#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class SplatPrototype
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "SplatPrototype"));
	}

	template <typename T = uintptr_t> T& m_Texture() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_NormalMap() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector2> T& m_TileSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& m_TileOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_SpecularMetallic() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_Smoothness() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T set_texture(uintptr_t value) {
		return ((T (*)(SplatPrototype*, uintptr_t))(Il2CppBase() + 0x4E8585C))(this, value);
	}
	template <typename T = void> T set_normalMap(uintptr_t value) {
		return ((T (*)(SplatPrototype*, uintptr_t))(Il2CppBase() + 0x4E85864))(this, value);
	}
	template <typename T = Il2CppVector2> T get_tileSize() {
		return ((T (*)(SplatPrototype*))(Il2CppBase() + 0x4E8586C))(this);
	}
	template <typename T = void> T set_tileSize(Il2CppVector2 value) {
		return ((T (*)(SplatPrototype*, Il2CppVector2))(Il2CppBase() + 0x4E85880))(this, value);
	}
	template <typename T = void> T set_tileOffset(Il2CppVector2 value) {
		return ((T (*)(SplatPrototype*, Il2CppVector2))(Il2CppBase() + 0x4E8588C))(this, value);
	}
	template <typename T = void> T set_specular(uintptr_t value) {
		return ((T (*)(SplatPrototype*, uintptr_t))(Il2CppBase() + 0x4E85898))(this, value);
	}
	template <typename T = void> T set_metallic(float value) {
		return ((T (*)(SplatPrototype*, float))(Il2CppBase() + 0x4E858A4))(this, value);
	}
	template <typename T = void> T set_smoothness(float value) {
		return ((T (*)(SplatPrototype*, float))(Il2CppBase() + 0x4E858AC))(this, value);
	}

};

}
