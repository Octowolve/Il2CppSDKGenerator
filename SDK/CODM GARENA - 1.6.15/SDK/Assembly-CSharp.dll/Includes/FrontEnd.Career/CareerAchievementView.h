#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd.Career {

class CareerAchievementView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd.Career", "CareerAchievementView"));
	}

	template <typename T = uintptr_t> T& ScorllView() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ScrollBar() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& NoAchievementRoot() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& NormalRoot() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& AchievementPeriodTemplate() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& AchievementPeriodGrid() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& GotNum() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& BtnShow() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& GoldNumLabel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& SilverNumLabel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& CopperNumLabel() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& gameTypeSelector() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& rdetailedInformation() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& cacheAchievementPeriodViewList() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGameTagState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShowingData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetrdetailedInformationData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAchievementNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetGameTagState() {
		return ((T (*)(CareerAchievementView*))(Il2CppBase() + 0x28FF1F8))(this);
	}
	template <typename T = void> T SetShowingData(uintptr_t data) {
		return ((T (*)(CareerAchievementView*, uintptr_t))(Il2CppBase() + 0x29041C0))(this, data);
	}
	template <typename T = void> T SetrdetailedInformationData(uintptr_t data) {
		return ((T (*)(CareerAchievementView*, uintptr_t))(Il2CppBase() + 0x2901718))(this, data);
	}
	template <typename T = void> T SetAchievementNum(int32_t AllNum, int32_t GoldNum, int32_t SilverNum, int32_t CopperNum) {
		return ((T (*)(CareerAchievementView*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x29012FC))(this, AllNum, GoldNum, SilverNum, CopperNum);
	}

};

}
