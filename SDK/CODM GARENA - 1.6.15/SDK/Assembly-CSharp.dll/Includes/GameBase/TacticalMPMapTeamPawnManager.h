#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalMPMapTeamPawnManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalMPMapTeamPawnManager"));
	}

	template <typename T = uintptr_t> T& tacticalMapIns() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMPMapSpriteList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalMPMapTeamPawnManager*))(Il2CppBase() + 0x2794B18))(this);
	}
	template <typename T = void> T UpdateMPMapSpriteList(Il2CppList<uintptr_t>* inPawnList, Il2CppList<uintptr_t>* inPawnSpriteList, Il2CppList<uintptr_t>* inPawnNameList) {
		return ((T (*)(TacticalMPMapTeamPawnManager*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2794D30))(this, inPawnList, inPawnSpriteList, inPawnNameList);
	}
	template <typename T = bool> static T UpdateViewm__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x279568C))(0, x);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalMPMapTeamPawnManager*))(Il2CppBase() + 0x2795738))(this);
	}

};

}
