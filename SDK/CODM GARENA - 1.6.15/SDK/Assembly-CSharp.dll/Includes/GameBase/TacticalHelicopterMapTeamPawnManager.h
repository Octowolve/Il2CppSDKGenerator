#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalHelicopterMapTeamPawnManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalHelicopterMapTeamPawnManager"));
	}

	template <typename T = uintptr_t> T& helicopterTacticalIns() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateHelicopterSpriteList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalHelicopterMapTeamPawnManager*))(Il2CppBase() + 0x30D0490))(this);
	}
	template <typename T = void> T UpdateHelicopterSpriteList(Il2CppList<uintptr_t>* inPawnList, uintptr_t inPawnSpriteList, uintptr_t inPawnNameList) {
		return ((T (*)(TacticalHelicopterMapTeamPawnManager*, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D0594))(this, inPawnList, inPawnSpriteList, inPawnNameList);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalHelicopterMapTeamPawnManager*))(Il2CppBase() + 0x30D1310))(this);
	}

};

}
