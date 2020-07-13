#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Home {

class LoadoutCopyConfirmViewButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Home", "LoadoutCopyConfirmView_Button"));
	}

	template <typename T = uintptr_t> T& NormalName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NormalIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& HighLightName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& HighLightIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& LockTag() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& bUnlock() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T BindLoadout(uintptr_t loadout) {
		return ((T (*)(LoadoutCopyConfirmViewButton*, uintptr_t))(Il2CppBase() + 0x232C028))(this, loadout);
	}

};

}
