#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsTaskItemViewEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsTaskItemView_En"));
	}

	template <typename T = uintptr_t> T& ProgressScrollBar() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TaskDesLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SpriteTaskState() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& GoButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& taskPoint() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& ActivityIcon() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& btnTip() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& btnBg() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_codLiveOpsTask() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTaskData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTaskPointData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnGoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_OnBtnGoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LiveOpsTaskItemViewEn*))(Il2CppBase() + 0x4327C70))(this);
	}
	template <typename T = void> T SetTaskData(uintptr_t task, Il2CppString* activityIconStr) {
		return ((T (*)(LiveOpsTaskItemViewEn*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43267B0))(this, task, activityIconStr);
	}
	template <typename T = void> T SetTaskPointData() {
		return ((T (*)(LiveOpsTaskItemViewEn*))(Il2CppBase() + 0x4327EE8))(this);
	}
	template <typename T = void> T OnBtnGoClick() {
		return ((T (*)(LiveOpsTaskItemViewEn*))(Il2CppBase() + 0x43280A8))(this);
	}
	template <typename T = void> T OnBtnGoClick_1(uintptr_t obj) {
		return ((T (*)(LiveOpsTaskItemViewEn*, uintptr_t))(Il2CppBase() + 0x4328394))(this, obj);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(LiveOpsTaskItemViewEn*))(Il2CppBase() + 0x4328648))(this);
	}

};

}
