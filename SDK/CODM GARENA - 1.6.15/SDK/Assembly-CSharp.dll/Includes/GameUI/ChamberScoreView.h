#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ChamberScoreView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ChamberScoreView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& livesList() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& DeathAlpha() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLivesNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T WillShow() {
		return ((T (*)(ChamberScoreView*))(Il2CppBase() + 0x3DDDF68))(this);
	}
	template <typename T = void> T SetLivesNum(int32_t num) {
		return ((T (*)(ChamberScoreView*, int32_t))(Il2CppBase() + 0x3DDE0C4))(this, num);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(ChamberScoreView*))(Il2CppBase() + 0x3DDE26C))(this);
	}

};

}
