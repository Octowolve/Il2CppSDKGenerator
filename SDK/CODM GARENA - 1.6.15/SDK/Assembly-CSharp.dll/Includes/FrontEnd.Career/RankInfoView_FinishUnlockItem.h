#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd.Career {

class RankInfoViewFinishUnlockItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd.Career", "RankInfoView_FinishUnlockItem"));
	}

	template <typename T = uintptr_t> T& Desc() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetContent(Il2CppString* title) {
		return ((T (*)(RankInfoViewFinishUnlockItem*, Il2CppString*))(Il2CppBase() + 0x2919D50))(this, title);
	}

};

}
