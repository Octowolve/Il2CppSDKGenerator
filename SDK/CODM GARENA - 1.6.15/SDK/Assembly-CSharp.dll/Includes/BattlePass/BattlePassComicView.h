#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassComicView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassComicView"));
	}

	template <typename T = uintptr_t> T& SeasonInfoView() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ComicScrollView() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SeasonKv() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SeasonTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SeasonName() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBattlePassSeasonKv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBattlePassSeasonInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetBattlePassSeasonKv(Il2CppString* SpriteName) {
		return ((T (*)(BattlePassComicView*, Il2CppString*))(Il2CppBase() + 0x327BDE8))(this, SpriteName);
	}
	template <typename T = void> T SetBattlePassSeasonInfo(Il2CppString* SeaspnTime_str, Il2CppString* SeasonName_str) {
		return ((T (*)(BattlePassComicView*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x327C370))(this, SeaspnTime_str, SeasonName_str);
	}

};

}
