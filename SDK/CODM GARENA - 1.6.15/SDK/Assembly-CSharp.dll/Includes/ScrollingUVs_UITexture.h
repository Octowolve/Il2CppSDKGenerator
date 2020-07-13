#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScrollingUVsUITexture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScrollingUVs_UITexture"));
	}

	template <typename T = Il2CppVector2> T& uvAnimationRate() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& textureName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector2> T& uvOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mUITexture() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& textureID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ScrollingUVsUITexture*))(Il2CppBase() + 0x3C03978))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(ScrollingUVsUITexture*))(Il2CppBase() + 0x3C03A50))(this);
	}

};

}
