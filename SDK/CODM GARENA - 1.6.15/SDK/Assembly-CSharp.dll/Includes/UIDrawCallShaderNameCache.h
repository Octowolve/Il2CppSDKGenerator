#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIDrawCallShaderNameCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIDrawCallShaderNameCache"));
	}

	template <typename T = Il2CppString*> T& BaseShader() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& TextureClipShader() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& SoftClipShader1() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& SoftClipShader1_FallBackA() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& SoftClipShader1_FallBackB() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& SoftClipShader2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& SoftClipShader2_Fallback() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& SoftClipShader3() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& SoftClipShader3_Fallback() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCachedShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T GetCachedShader(uintptr_t panel, uintptr_t dc) {
		return ((T (*)(UIDrawCallShaderNameCache*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39E7AD4))(this, panel, dc);
	}

};

}
