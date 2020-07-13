#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SPVP.Ladder {

class SpvpLadderMatchModeItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SPVP.Ladder", "SpvpLadderMatchModeItemView"));
	}

	template <typename T = uintptr_t> T& ObjSelect() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ObjNormal() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LabelModeName() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SpriteModeIcon() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Btn() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetData(uintptr_t data) {
		return ((T (*)(SpvpLadderMatchModeItemView*, uintptr_t))(Il2CppBase() + 0x4300AD4))(this, data);
	}
	template <typename T = void> T OnBtnClick() {
		return ((T (*)(SpvpLadderMatchModeItemView*))(Il2CppBase() + 0x4300E14))(this);
	}

};

}
