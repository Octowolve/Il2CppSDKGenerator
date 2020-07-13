#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SignObjectEffectHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SignObjectEffectHandler"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_rendererList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& OutlineEffectComp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_OutlineEffectComp() {
		return ((T (*)(SignObjectEffectHandler*))(Il2CppBase() + 0x2E0DBF8))(this);
	}
	template <typename T = void> T set_OutlineEffectComp(uintptr_t value) {
		return ((T (*)(SignObjectEffectHandler*, uintptr_t))(Il2CppBase() + 0x2E0DC00))(this, value);
	}

};

}
