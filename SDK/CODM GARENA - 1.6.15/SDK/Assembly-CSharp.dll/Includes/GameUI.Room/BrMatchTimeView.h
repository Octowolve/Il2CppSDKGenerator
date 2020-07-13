#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class BrMatchTimeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "BrMatchTimeView"));
	}

	template <typename T = uintptr_t> T& LabelModeName() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& LabelMapName() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& WidgetTeamMateRoot() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& TeamMateGrid() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& TeamMateItemList() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTeamMateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetTeamMateInfo(int32_t teamType, Il2CppList<uintptr_t>* teammates, uintptr_t matchModule, bool isEnableAutoFill) {
		return ((T (*)(BrMatchTimeView*, int32_t, Il2CppList<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x2CCCCF4))(this, teamType, teammates, matchModule, isEnableAutoFill);
	}

};

}
