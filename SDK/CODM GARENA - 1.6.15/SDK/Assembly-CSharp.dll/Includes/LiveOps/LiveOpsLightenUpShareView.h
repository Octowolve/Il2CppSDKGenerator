#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsLightenUpShareView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsLightenUpShareView"));
	}

	template <typename T = uintptr_t> T& HeadIcon() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& LabelName() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ProgressBarValue() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& LabelGrossValue() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& BtnDownLoad() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& BtnFB() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& BtnGarena() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& BtnLine() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& shareScreenRegion() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ObjeShare() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& ObjLightenUp() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& ObjReward() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ShareLabel() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ShareLabelBg() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ShareBg() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& adapterBtnRectWidget() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLightenUpInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShareInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWWL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowGarena() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAnchorAbsolute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPersonalInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T SetLightenUpInfo() {
		return ((T (*)(LiveOpsLightenUpShareView*))(Il2CppBase() + 0x34EEBE8))(this);
	}
	template <typename T = void> T SetShareInfo(int32_t index) {
		return ((T (*)(LiveOpsLightenUpShareView*, int32_t))(Il2CppBase() + 0x34ED744))(this, index);
	}
	template <typename T = void> T SetWidget(int32_t index) {
		return ((T (*)(LiveOpsLightenUpShareView*, int32_t))(Il2CppBase() + 0x34EE410))(this, index);
	}
	template <typename T = void> T SetWWL(uintptr_t platform) {
		return ((T (*)(LiveOpsLightenUpShareView*, uintptr_t))(Il2CppBase() + 0x34ED88C))(this, platform);
	}
	template <typename T = bool> T IsShowGarena(uintptr_t platform) {
		return ((T (*)(LiveOpsLightenUpShareView*, uintptr_t))(Il2CppBase() + 0x34EEC80))(this, platform);
	}
	template <typename T = void> T UpdateAnchorAbsolute(uintptr_t uIWidget, uintptr_t target, int32_t left, int32_t right, int32_t bottom, int32_t top) {
		return ((T (*)(LiveOpsLightenUpShareView*, uintptr_t, uintptr_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x34EED7C))(this, uIWidget, target, left, right, bottom, top);
	}
	template <typename T = void> T SetPersonalInfo() {
		return ((T (*)(LiveOpsLightenUpShareView*))(Il2CppBase() + 0x34ECB7C))(this);
	}

};

}
