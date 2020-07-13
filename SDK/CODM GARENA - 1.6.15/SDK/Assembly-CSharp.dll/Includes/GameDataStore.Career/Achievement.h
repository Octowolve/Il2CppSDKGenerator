#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameDataStore.Career {

class Achievement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameDataStore.Career", "Achievement"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& CurrentProgress() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Sequence() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<int32_t>*> T& AchieveTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Lv() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Order() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& iconName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isEquipment() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildAchievementFromCsv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillAchievementFromServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillAchievementDataFromServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T BuildAchievementFromCsv(uintptr_t csv) {
		return ((T (*)(Achievement*, uintptr_t))(Il2CppBase() + 0x4A01F28))(this, csv);
	}
	template <typename T = void> T FillAchievementFromServer(uintptr_t data) {
		return ((T (*)(Achievement*, uintptr_t))(Il2CppBase() + 0x4A02090))(this, data);
	}
	template <typename T = void> T FillAchievementDataFromServer(bool isShow, int32_t count) {
		return ((T (*)(Achievement*, bool, int32_t))(Il2CppBase() + 0x4A023F0))(this, isShow, count);
	}

};

}
