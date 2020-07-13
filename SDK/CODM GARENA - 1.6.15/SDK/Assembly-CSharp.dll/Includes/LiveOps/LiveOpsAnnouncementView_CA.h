#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsAnnouncementViewCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsAnnouncementView_CA"));
	}

	template <typename T = uintptr_t> T& LineTop() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& LineButtom() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& LeftScrollView() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& LabelActivityInterval() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& WordScrollView() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationLeftView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationLeftSpriteView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsAnnouncementViewCA*))(Il2CppBase() + 0x356AA24))(this);
	}
	template <typename T = void> T AdaptationLeftView(int32_t inLabelDistanceToButtom, int32_t inViewHeight, int32_t inViewWidth) {
		return ((T (*)(LiveOpsAnnouncementViewCA*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x356850C))(this, inLabelDistanceToButtom, inViewHeight, inViewWidth);
	}
	template <typename T = void> T AdaptationLeftSpriteView(uintptr_t inSprite, uintptr_t tPanel) {
		return ((T (*)(LiveOpsAnnouncementViewCA*, uintptr_t, uintptr_t))(Il2CppBase() + 0x356AACC))(this, inSprite, tPanel);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsAnnouncementViewCA*))(Il2CppBase() + 0x356AFCC))(this);
	}

};

}
