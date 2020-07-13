#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class UIRichWidget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "UIRichWidget"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& RichObjects() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RichColors() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRichState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UIRichWidget*))(Il2CppBase() + 0x49FD3EC))(this);
	}
	template <typename T = void> T SetRichState(uintptr_t rstate) {
		return ((T (*)(UIRichWidget*, uintptr_t))(Il2CppBase() + 0x49FCC20))(this, rstate);
	}

};

}
