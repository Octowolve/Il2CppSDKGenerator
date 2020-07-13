#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class TrainingTaskTitleData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "TrainingTaskTitleData"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& groupID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isLocked() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isSelected() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& isShowRed() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& contentData() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
