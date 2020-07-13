#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class TipsDelegateInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "TipsDelegateInfo"));
	}

	template <typename T = uintptr_t> T& tipsType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& delegates() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(TipsDelegateInfo*))(Il2CppBase() + 0x29BA780))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(TipsDelegateInfo*, bool))(Il2CppBase() + 0x29BA788))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(TipsDelegateInfo*))(Il2CppBase() + 0x29BA790))(this);
	}

};

}
