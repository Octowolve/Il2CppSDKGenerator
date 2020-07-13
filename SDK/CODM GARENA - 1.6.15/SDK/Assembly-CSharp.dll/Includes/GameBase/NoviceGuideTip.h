#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class NoviceGuideTip
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "NoviceGuideTip"));
	}

	template <typename T = uintptr_t> T& SpriteBorder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& LabelTip() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBorderHeigh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T RefreshBorderHeigh() {
		return ((T (*)(NoviceGuideTip*))(Il2CppBase() + 0x19DCB48))(this);
	}

};

}
