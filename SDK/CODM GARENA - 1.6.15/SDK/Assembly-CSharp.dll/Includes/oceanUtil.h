#pragma once
#include <Il2Cpp/Il2Cpp.h>

class oceanUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "oceanUtil"));
	}

	template <typename T = uintptr_t> static T& m_instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_complexConj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_complexProduct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_uniformRandomVariable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_gaussianRandomVariable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_debug_createTexture2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> static T getInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EE6B8C))(0);
	}
	template <typename T = void> T init() {
		return ((T (*)(oceanUtil*))(Il2CppBase() + 0x3EEA5B0))(this);
	}
	template <typename T = Il2CppVector2> T complexConj(Il2CppVector2 complex) {
		return ((T (*)(oceanUtil*, Il2CppVector2))(Il2CppBase() + 0x3EE6D6C))(this, complex);
	}
	template <typename T = Il2CppVector2> T complexProduct(Il2CppVector2 c1, Il2CppVector2 c2) {
		return ((T (*)(oceanUtil*, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x3EE7BAC))(this, c1, c2);
	}
	template <typename T = float> T uniformRandomVariable() {
		return ((T (*)(oceanUtil*))(Il2CppBase() + 0x3EEA678))(this);
	}
	template <typename T = Il2CppVector2> T gaussianRandomVariable() {
		return ((T (*)(oceanUtil*))(Il2CppBase() + 0x3EE76B8))(this);
	}
	template <typename T = uintptr_t> T debug_createTexture2D(int32_t width, int32_t height) {
		return ((T (*)(oceanUtil*, int32_t, int32_t))(Il2CppBase() + 0x3EEA758))(this, width, height);
	}

};

}
