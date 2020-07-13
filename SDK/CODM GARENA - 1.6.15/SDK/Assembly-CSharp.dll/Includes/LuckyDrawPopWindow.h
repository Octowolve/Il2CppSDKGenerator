#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LuckyDrawPopWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LuckyDrawPopWindow"));
	}

	template <typename T = uintptr_t> T& templateUI() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& popupViewAnimator() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ContainerRoot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Title() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Content() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& DescTitle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DescSub() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DescContent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DescObjs() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& grid() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& scorllView() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& TweenAlpha() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& beiginAni() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& playOpen() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& beginWaitTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& closeWaitTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAniInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOpenAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T SetInfos(uintptr_t style, Il2CppList<uintptr_t>* color_prob_list) {
		return ((T (*)(LuckyDrawPopWindow*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4358000))(this, style, color_prob_list);
	}
	template <typename T = void> T SetAniInfo() {
		return ((T (*)(LuckyDrawPopWindow*))(Il2CppBase() + 0x435873C))(this);
	}
	template <typename T = void> T SetText(uintptr_t style) {
		return ((T (*)(LuckyDrawPopWindow*, uintptr_t))(Il2CppBase() + 0x43588B0))(this, style);
	}
	template <typename T = void> T PlayOpenAni() {
		return ((T (*)(LuckyDrawPopWindow*))(Il2CppBase() + 0x4358BB4))(this);
	}
	template <typename T = void> T PlayClose() {
		return ((T (*)(LuckyDrawPopWindow*))(Il2CppBase() + 0x4358D64))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LuckyDrawPopWindow*))(Il2CppBase() + 0x4358EA4))(this);
	}
	template <typename T = int32_t> static T SetInfosm__0(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x435908C))(0, x, y);
	}

};

}
