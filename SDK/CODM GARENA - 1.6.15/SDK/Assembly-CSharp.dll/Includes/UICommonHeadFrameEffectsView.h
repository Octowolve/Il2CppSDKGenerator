#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UICommonHeadFrameEffectsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UICommonHeadFrameEffectsView"));
	}

	template <typename T = uintptr_t> T& Culling() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AdditiveUIRederer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ScrollUVSAddUIRederer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& rendererQueueFollow() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EffectTransForm() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> static T& FrameFixedWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCullingPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetURQF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffectScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetCullingPanel(uintptr_t cutPanel) {
		return ((T (*)(UICommonHeadFrameEffectsView*, uintptr_t))(Il2CppBase() + 0x39C97D4))(this, cutPanel);
	}
	template <typename T = void> T SetTransform(uintptr_t frameWidget) {
		return ((T (*)(UICommonHeadFrameEffectsView*, uintptr_t))(Il2CppBase() + 0x39C99D4))(this, frameWidget);
	}
	template <typename T = void> T SetURQF(uintptr_t Follow) {
		return ((T (*)(UICommonHeadFrameEffectsView*, uintptr_t))(Il2CppBase() + 0x39C9C78))(this, Follow);
	}
	template <typename T = void> T SetEffectScale(float scale) {
		return ((T (*)(UICommonHeadFrameEffectsView*, float))(Il2CppBase() + 0x39C9E78))(this, scale);
	}

};

}
