#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UICommonReceiveItemBaseView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UICommonReceiveItemBaseView"));
	}

	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Desc() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& QualityBar() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& TimeLimit() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& shareContainer() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ClickBoxList() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGeneralInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetGeneralInfo(uintptr_t item) {
		return ((T (*)(UICommonReceiveItemBaseView*, uintptr_t))(Il2CppBase() + 0x39CC878))(this, item);
	}

};

}
