#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CareerInfo {

class PersonalInfoResultViewZombieThemeDataItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CareerInfo", "PersonalInfoResultView_ZombieThemeDataItem"));
	}

	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& FirstPassTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Kills() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Accuracy() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& WeakPointAccuracy() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetContent(int32_t levelId, uintptr_t stat) {
		return ((T (*)(PersonalInfoResultViewZombieThemeDataItem*, int32_t, uintptr_t))(Il2CppBase() + 0x1D172C0))(this, levelId, stat);
	}

};

}
