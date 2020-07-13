#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FadeableRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FadeableRenderer"));
	}

	template <typename T = int32_t> T& FadedRenderQueue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_StoredMaterials() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MaterialList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& PropIdSrcBlend() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& PropIdDstBlend() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& PropIdGlobalAlpha() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_Alpha() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndFade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T StartFade() {
		return ((T (*)(FadeableRenderer*))(Il2CppBase() + 0x3CBF6DC))(this);
	}
	template <typename T = void> T EndFade() {
		return ((T (*)(FadeableRenderer*))(Il2CppBase() + 0x3CBFD04))(this);
	}
	template <typename T = float> T get_Alpha() {
		return ((T (*)(FadeableRenderer*))(Il2CppBase() + 0x3CBFF14))(this);
	}
	template <typename T = void> T set_Alpha(float value) {
		return ((T (*)(FadeableRenderer*, float))(Il2CppBase() + 0x3CBFF1C))(this, value);
	}

};

}
