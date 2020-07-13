#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsMainViewEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsMainView_En"));
	}

	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& panel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& FlowTable() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ContainerBtnLeft() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& BtnLeft() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& RedPointLeft() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ContainerBtnRight() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& BtnRight() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& RedPointRight() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& TweenAnimation() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> static T& offset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_Count() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& LiveOpsActivityDS() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRedPointLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRedPointRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(LiveOpsMainViewEn*))(Il2CppBase() + 0x34FE050))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(LiveOpsMainViewEn*, float))(Il2CppBase() + 0x34FE058))(this, dt);
	}
	template <typename T = void> T SetData(int32_t count) {
		return ((T (*)(LiveOpsMainViewEn*, int32_t))(Il2CppBase() + 0x34F8DD0))(this, count);
	}
	template <typename T = void> T RefreshRedPointLeft() {
		return ((T (*)(LiveOpsMainViewEn*))(Il2CppBase() + 0x34FE394))(this);
	}
	template <typename T = void> T RefreshRedPointRight() {
		return ((T (*)(LiveOpsMainViewEn*))(Il2CppBase() + 0x34FE5C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(LiveOpsMainViewEn*, float))(Il2CppBase() + 0x34FE7EC))(this, P0);
	}

};

}
