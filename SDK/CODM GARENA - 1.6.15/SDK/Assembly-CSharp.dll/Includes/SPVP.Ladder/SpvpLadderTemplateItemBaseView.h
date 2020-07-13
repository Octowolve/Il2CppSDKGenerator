#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SPVP.Ladder {

class SpvpLadderTemplateItemBaseView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SPVP.Ladder", "SpvpLadderTemplateItemBaseView"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Win() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Lose() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& LabelModeName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& SpriteModeIcon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& LabelMatchIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& OrangeArrow() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& GrayArrow() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_ColorMatchFinish() {
		return ((T (*)(SpvpLadderTemplateItemBaseView*))(Il2CppBase() + 0x4309BE8))(this);
	}
	template <typename T = uintptr_t> T get_ColorMatchIn() {
		return ((T (*)(SpvpLadderTemplateItemBaseView*))(Il2CppBase() + 0x4309CAC))(this);
	}
	template <typename T = Il2CppVector3> T get_ScaleNormal() {
		return ((T (*)(SpvpLadderTemplateItemBaseView*))(Il2CppBase() + 0x4309D70))(this);
	}
	template <typename T = Il2CppVector3> T get_ScaleHighlight() {
		return ((T (*)(SpvpLadderTemplateItemBaseView*))(Il2CppBase() + 0x4309DAC))(this);
	}
	template <typename T = void> T UpdateView(int32_t index, int32_t numOfEndMatch, uintptr_t result, uintptr_t mode) {
		return ((T (*)(SpvpLadderTemplateItemBaseView*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x43020E8))(this, index, numOfEndMatch, result, mode);
	}

};

}
