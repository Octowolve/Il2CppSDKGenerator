#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsQuestionNaireView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsQuestionNaireView"));
	}

	template <typename T = uintptr_t> T& TemplateItem() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LabelActivityName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LabelActivityDesc() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& LabelTimeInterval() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ContainerGo() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& BtnGo() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ContainerReward() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& BtnReward() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& SpriteRewarded() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& SpriteTimeOut() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& gridRewards() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = double> T& m_CurTime() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = double> T& m_ActivityEndTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRemainTimeFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(CodLiveOpsQuestionNaireView*))(Il2CppBase() + 0x354CBC0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CodLiveOpsQuestionNaireView*))(Il2CppBase() + 0x354CC70))(this);
	}
	template <typename T = Il2CppString*> T GetRemainTimeFormat(int32_t remainTime) {
		return ((T (*)(CodLiveOpsQuestionNaireView*, int32_t))(Il2CppBase() + 0x354CE78))(this, remainTime);
	}
	template <typename T = void> T UpdateView(uintptr_t ds) {
		return ((T (*)(CodLiveOpsQuestionNaireView*, uintptr_t))(Il2CppBase() + 0x354B964))(this, ds);
	}
	template <typename T = bool> static T UpdateViewm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x354D178))(0, it);
	}

};

}
